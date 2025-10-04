# Semana 8  
**Kryssia Martinez**  
**Laboratorio 8.2**  
**Tema:** Laboratorio de Contenedores  

---

## Índice
1. [Docker: de cero a capas (con Flask)](#docker-de-cero-a-capas-con-flask)  
   - [A Repaso de Conceptos](#a-repaso-de-conceptos)  
   - [B Prerrequisitos](#b-prerrequisitos)  
   - [C Desarrollo](#c-desarrollo)  
     - [1. Instalación de Docker y clonar repo](#1-instalación-de-docker-y-clonar-repo)  
     - [2. Estructura para el proyecto](#2-estructura-para-el-proyecto)  
     - [3. Construcción y observación de Capas](#3-construcción-y-observación-de-capas)  
     - [4. Docker Compose](#4-docker-compose)
     - [5. Multi-stage](#multi-stage) 
     - [6. Limpieza y etiquetas](#limpieza-y-etiquetas)

---

## Docker: de cero a capas (con Flask)

### A) Repaso de Conceptos
- **Imagen:** Plantilla inmutable hecha de capas. Cada instrucción del Dockerfile suele producir una capa nueva. Se almacenan en un sistema “copy-on-write”.  
- **Contenedor:** Una instancia en ejecución de una imagen, con su capa superior de escritura para cambios temporales.  
- **Capas y caché:** Si Docker detecta que una instrucción y sus inputs no cambiaron, reusa la capa cacheada y evita rehacer trabajo. Orden y granularidad importan.  
- **CMD vs ENTRYPOINT:** CMD define el comando por defecto y se puede reemplazar desde docker run <imagen> <otro comando>. ENTRYPOINT fija el ejecutable principal; lo que pases al final en run se convierte en argumentos del entrypoint.
---

### B) Prerrequisitos 
- Docker instalado (`docker --version` debe responder).  
- Editor de texto (VS Code, etc.).  
- curl para probar endpoints desde terminal.

---

### C) Desarrollo

#### 1. Instalación de Docker y clonar repo
   - En esta primera parte se realizó la instalación de Docker y curl para probar los endpoints desde la terminal.
   - También se clonó el repositorio, para subir commits individuales de cada cambio.  

- **Imagen de la instalación exitosa de Docker**  

   ![Instalación de Docker](ImagenesDocker/InstalacionDocker.png)  

---

#### 2. Estructura para el proyecto 
- Se creó una carpeta llamada `docker-por-capas` dentro de `Semanas/Semana8/Laboratorios/Laboratorio8.2/docker-por-capas/`  

- Dentro de esa carpeta se encuentran los siguientes archivos:  
   - `app.py` : Permitirá ver el contenedor respondiendo y manipular env vars.  
   - `requirements.txt` : Declara dependencias Python. Separarlo del código ayuda al caché.  
   - `Dockerfile` : Se constituyen las capas en las que se va trabajando  
   - `.dockerignore` : Excluye archivos del contexto de build (lo que Docker manda al daemon para construir). Menos contexto = builds más rápidos y capas más pequeñas.  
   
   ```markdown
   Laboratorio8.2/
   └─ docker-por-capas/
      ├─ app.py
      ├─ requirements.txt
      ├─ Dockerfile
      ├─ Dockerfile.dev
      ├─ .dockerignore
      └─ ImagenesDocker/    
   ```

   - **Imagen de la estructura**  

   ![Instalación de Docker](ImagenesDocker/CreacionEstructura.png)  

---

#### 3. Construcción y observación de Capas

a. Primero se utilizó `docker build -t capas-flask:1.0 .` para construir capas secuencialmente.  

![Instalación de Docker](ImagenesDocker/DockerConstruir1.png)  
![Instalación de Docker](ImagenesDocker/DockerConstruir2.png)  

- **Resultado:** 
   - En esta parte, la imagen `capas-flask:1.0` se construyó correctamente y todas las capas se ejecutaron de manera adecuada.
   - Docker crea imágenes en capas secuenciales.
   - Cada instrucción del Dockerfile genera una capa.

---

b. Luego se usa `docker history capas-flask:1.0` para ver el historial de las capas.  

![Instalación de Docker](ImagenesDocker/DockerCapas.png)  

- **Resultado:**
   - Se muestra cada capa, su tamaño y la instrucción que la generó. Ayuda a explicar por qué conviene separar `requirements.txt` del código.  

---

c. Posteriormente se usa `docker run --name demo-capas -d -p 5000:5000 capas-flask:1.0` para ejecutar el contenedor.  

![Instalación de Docker](ImagenesDocker/EjecutarContenedor.png)  

---

d. En la parte de Networking, Docker crea una red (bridge). El contenedor escucha en `0.0.0.0:5000` dentro del contenedor; con `-p` rediriges tráfico del host al contenedor.  

- Consola:  
![Instalación de Docker](ImagenesDocker/Networking.png)  

- Internet:  
![Instalación de Docker](ImagenesDocker/SalidaDeLevantar.png)  

- **Resultado:**  
   - Se usa en la consola `curl http://localhost:5000` y desde internet `http://localhost:5000` se muestra `{"ok": true, "mensaje": "Hola desde la imagen"}`.

---

e. Estado, logs y health:  
   - Ejecución de `docker ps` . 
   - `docker logs -f demo-capas`  .
   - `docker inspect demo-capas --format '{{.State.Health.Status}}'`  .

   - Si el HEALTHCHECK falla, se verá `unhealthy`. Se debe revisar logs o el endpoint.  

   ![Instalación de Docker](ImagenesDocker/EstadoLogsHealth.png)  

   - Para detener y limpiar:  
   `docker stop demo-capas`  
   `docker rm demo-capas`  

   ![Instalación de Docker](ImagenesDocker/DetenerLimpiar.png)  

---

f. Demostración del caché:  
- Se reconstruyó con `docker build -t capas-flask:1.1 .`  

![Instalación de Docker](ImagenesDocker/CacheReconstruccion1.png)  

- Se cambió `requirements.txt` (por ejemplo a `flask==3.0.2`) y se reconstruyó con `docker build -t capas-flask:1.2 .`  

![Instalación de Docker](ImagenesDocker/CacheReconstruccion21.png)  
![Instalación de Docker](ImagenesDocker/CacheReconstruccion22.png)  

- **Resultado:** 
   - Se invalida la capa de `pip install` y todo lo posterior.  

---

g. Variables de entorno (ENV) y prioridad:  
   - Valor por defecto en la imagen: `ENV SALUDO="..."`.  
   - En `run`, `-e` tiene prioridad: `docker run --rm -p 5000:5000 -e SALUDO="Hola desde run" capas-flask:1.2`  

- Consola:  
![Instalación de Docker](ImagenesDocker/VariableEntornoRun.png)  

- Salida en internet:  
![Instalación de Docker](ImagenesDocker/VariableEntornoRunSalida.png)  

- También se puede realizar desde un archivo `.env`:
- Se ejecuta `docker run --rm -p 5000:5000 --env-file .env capas-flask:1.2`  .

- Consola:  
![Instalación de Docker](ImagenesDocker/VariableEntornoEnv.png)  

- Salida en internet:  
![Instalación de Docker](ImagenesDocker/VariableEntornoEnvSalida.png)  

---

h. Prueba rápida:  
Se ejecuta el comando `docker run --rm capas-flask:1.2 python -c "print('hola')"` .

![Instalación de Docker](ImagenesDocker/PruebaRapida.png)  

---

i. Volúmenes:  
   - Objetivo: Editar código en el host y que el contenedor lo vea en caliente (sin reconstruir).  
   - Se creó `Dockerfile.dev` y se ejecutó `docker build -f Dockerfile.dev -t capas-flask:dev .`  

- Consola:  
![Instalación de Docker](ImagenesDocker/VolumenesConstruccionDev.png)  

- Salida en internet:  
![Instalación de Docker](ImagenesDocker/VolumenesConstruccionDevSalida.png)  

- En Windows: `docker run --name dev-capas -d -p 5000:5000 -v "${PWD}:/app" capas-flask:dev`  

- Consola:  
![Instalación de Docker](ImagenesDocker/VolumenesConstruccionDevWin.png)  

- Salida en internet:  
![Instalación de Docker](ImagenesDocker/VolumenesConstruccionDevWin2.png)  

- **Resultado:**
   - Se refrescó el navegador y se observaron los cambios.  

---

j. Healthcheck (qué evalúa y cuándo):  
   - El HEALTHCHECK corre periódicamente el comando indicado.  
   - Si retorna `0` → `healthy`.  
   - Si retorna ≠ 0 o se excede timeout → `unhealthy` tras retries fallidos.  

- Para ver el estado:  
- Se ejecuta el comando `docker inspect dev-capas --format '{{.State.Health}}'`  

![Instalación de Docker](ImagenesDocker/EstadoDocker1.png)  

- Al romper app a propósito y cambiar el puerto a 5001, se puede reiniciar y ver el comportamiento. 

![Instalación de Docker](ImagenesDocker/CambioDePuerto.png)

---

#### 4. Docker Compose
- Se crea un archivo `docker-compose.yml` con su contenido respectivo.
- Luego se levanta el contenedor con `docker compose up -d`.
  
![Instalación de Docker](ImagenesDocker/EjecucionDockerCompose.png)  

- **Resultado:**
   - Se levantaron los contenedores en segundo plano y Compose lee el `.yml` y aplica lo que se definió.

---

- Luego se procede a ver el resultado de los contenedores con `docker compose ps`. Posteriormente se ejecuta `docker compose logs -f` para ver los logs en tiempo real.

![Instalación de Docker](ImagenesDocker/EstadoLogsHealth.png) 

- **Resultado:**
   - Se muestra la lista de contenedores levantados y sus puertos.
   - Funciona como `docker logs -f <container>` y sirve para depurar cambios mientras se edita `app.py`.

---

- Luego se procede a limpiar los contenedores con `docker compose down`.

![Instalación de Docker](ImagenesDocker/EjecucionDockerCompose.png)

- En la misma imagen se muestra la ejecución de los comandos.
 
---

#### 5. Multi-stage 

- Para esta última parte del laboratorio, se construye en una etapa y se copian solo los artefactos a la etapa final (runtime).
- Beneficios: imágenes finales más pequeñas y builds reproducibles, tal como indican las instrucciones.

---

- Primero se crea un archivo llamado `Dockerfile.multistage`, donde `build` crea todas las dependencias en formato wheel y `runtime` solo copia los wheels e instala, dejando la imagen final más pequeña.
- Luego se construye y compara la imagen con capas-flask:multistage.

- Ejecución de los comandos:

![Instalación de Docker](ImagenesDocker/ParteFinal.png)

- Tamaño de las imágenes:
  
![Instalación de Docker](ImagenesDocker/TamanoImagenes.png)

- **Resultado:**
   - Se indica que se usa el archivo multistage.
   - Se ven varias etiquetas: `1.2`, `multistage`, `latest`, `dev`.
   - Así como sus tamaños.

---

#### 6. Limpieza y etiquetas 

- Se inicia la parte final de este laboratorio, donde se realiza la limpieza. Primero se etiqueta como `latest`.

![Instalación de Docker](ImagenesDocker/ParteFinal.png)

---

- Luego se procede a limpiar imágenes sin referencia (no usadas por ningún contenedor).

![Instalación de Docker](ImagenesDocker/ParteFinal.png)

---

- Por último, se realiza una limpieza agresiva. Se debe tener cuidado, ya que puede borrar redes, contenedores parados y caché.

![Instalación de Docker](ImagenesDocker/SeBorro.png)

- **Resultado:**
   - Empieza la limpieza y se muestra el cuadro con los tamaños de las imágenes.
   - Se realizan ambas limpiezas y queda demostrado cómo funciona cada uno de los comandos.
