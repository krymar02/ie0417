# Semana 8, Clase 1  
**Lunes 29 de septiembre**  
**Apuntes de la clase**  
**Estudiante: Kryssia Martinez**

---

## Espacio para notas
- Contenedores importantes.
---

# Contenedores y su orquestación  

---

## ¿Qué es un contenedor?
- Unidad ligera, autónoma y ejecutable que incluye todo lo necesario para ejecutar una aplicación: código, librerías, dependencias y configuración.
- No requiere su propio sistema operativo, comparte el kernel con el host.
- Se puede mover, ejecutar y escalar con facilidad en distintos entornos (dev/test/prod, nube o local).

---

## Espacio para notas
- La maquina piensa que existe sola, por ejemplo no toma encuenta que esta dentro de una compu dividida.

---
## Contenedores vs Máquinas Virtuales

### Máquinas Virtuales
- Permiten la virtualización a nivel de hardware, ejecutando varios sistemas operativos en una sola máquina.
- Cada VM actúa como un sistema aislado con su propio SO, aplicaciones y dependencias.
- Arquitectura:
  - **Hardware:** Máquina física.
  - **Sistema operativo:** Instalado en el host.
  - **Hipervisor:** Asigna recursos a las VM.
  - **Sistema operativo invitado:** SO dentro de cada VM.
  - **Aplicación** y **dependencias**.

### Contenedores
- Virtualización a nivel de sistema operativo.
- Múltiples aplicaciones se ejecutan en el mismo kernel del SO.
- Más ligeros y eficientes que las VM.
- Arquitectura:
  - **Hardware**
  - **SO del host**
  - **Motor de contenedor**
  - **Aplicación**
  - **Dependencias**

---

## Docker

## Espacio para notas
- Docker es un programa.
- Ayuda a destruir, contraer crear contenedores importantes.
- Clase: Plantilla o molde a partir del cual se crean instancias (ejemplo: una imagen en Docker puede verse como una clase).
- Instancia: Una realización concreta de la clase (en Docker sería un contenedor, creado a partir de una imagen).
- Objeto: Clase instanciada; en Docker equivaldría al contenedor en ejecución.
- Plantilla: Es el modelo base; en Docker, la imagen es la plantilla que define cómo será el contenedor.
- Nosotros somos los clientes, la linea de comandos es CLI.
- CLI: (Command Line Interface): Herramienta de línea de comandos para interactuar con Docker (docker run, docker ps, etc.).
- API: (Application Programming Interface): Interfaz que expone Docker para que otros programas o scripts interactúen con él, sin usar directamente la CLI.
-Una imagen es una plantilla, una serie de imagenes por ejemplo. Un contenedor se crea a partir de ella.
- Sponsor : Patrocinador. Organización o empresa que apoya el proyecto (ejemplo: Docker Inc., y en Kubernetes → CNCF).

---

### ¿Qué es Docker?
- Plataforma abierta para desarrollar, distribuir y ejecutar aplicaciones.
- Separa aplicaciones de la infraestructura subyacente.
- Basado en arquitectura cliente-servidor.

### Componentes
- **Docker Client**: Herramienta de interacción (`docker`).
- **Docker Daemon (dockerd)**: Gestiona contenedores.
- **Docker Images**: Plantillas inmutables para apps.
- **Docker Containers**: Instancias vivas de imágenes.
- **Docker Registry**: Almacenamiento de imágenes (ej. Docker Hub).

---

## De Dockerfile a contenedor
1. Escribir un **Dockerfile**.
2. Construir la imagen:  
   ```bash
   docker build -t nombre-imagen:tag .
## Ejecutar un contenedor

```bash
  docker run nombre-imagen .

```
## Gestionar contenedores

# Listar contenedores en ejecución
```
docker ps      
```

# Detener un contenedor
```
docker stop ID 
```

# Ejecutar comandos dentro de un contenedor
```
docker exec -it ID bash  
```

# Ver logs de un contenedor
```
docker logs ID 
```

# Docker y Kubernetes

## Ejemplo de Dockerfile
```dockerfile
FROM python:3.10-slim
WORKDIR /app
COPY requirements.txt .
RUN pip install --no-cache-dir -r requirements.txt
COPY . .
EXPOSE 8000
CMD ["python", "manage.py", "runserver", "0.0.0.0:8000"]

```

### Volúmenes, redes y persistencia en Docker

## Volúmenes

- Permiten mantener datos persistentes fuera de los contenedores.

- Ejemplo:
```
docker volume create datos
docker run -v datos:/app miapp-django:1.0
docker run -v $(pwd):/app miapp-django:1.0
```
## Redes
- Conectan contenedores entre sí o con otros servicios.

- Ejemplo:
```
docker network create red-demo
docker run --network red-demo --name backend postgres
docker run --network red-demo --name web miapp-django:1.0
```
---
## Espacio para notas
- En Docker Host: abro la puerta para hablar con el mundo externo.
- Bridge: red interna creada por Docker para que los contenedores se comuniquen entre sí; permite acceso al host y al exterior mediante NAT.
- None: contenedor sin ninguna red, completamente aislado; no tiene comunicación con otros contenedores ni con el host.
- Punto docker ignore: para no pushear cosas innecesarias. 
---

### Buenas prácticas en Docker

- Usar imágenes pequeñas (slim, alpine).

- Eliminar cachés y archivos temporales.

- No incluir claves/tokens en imágenes.

- Usar variables de entorno y .dockerignore.

### Kubernetes
## ¿Por qué necesitamos Kubernetes?

- Escalado automático de instancias.

- Reinicio de contenedores que fallan.

- Actualizaciones sin downtime.

- Balanceo de tráfico.

- Gestión de configuración y secretos.
---
## Espacio para notas
- K8s: Kubernetes
-  Por ejemplo, cuando se compran entradas, sirve para gestionar de forma automática y confiable la disponibilidad de instancias, balancear la carga, reiniciar contenedores que fallen y actualizar servicios sin interrupciones (que no se caiga mientras se compra).
---

## Funcionalidades

- Despliegue

- Escalado horizontal

- Recuperación ante fallos

- Red y balanceo de carga

- Rollouts y rollbacks

### Arquitectura de Kubernetes

## Plano de control:
- API Server : Puerta de entrada al clúster. Recibe comandos kubectl y los expone como REST API.
- etcd : Base de datos distribuida que guarda el estado deseado del clúster.
- Scheduler : Decide en qué nodo se ejecuta un nuevo pod, considerando recursos, afinidad, etc.
- Controller Manager: Se asegura de que el estado real coincida con el deseado. Crea/detiene pods, realiza
actualizaciones.
- 
## Espacio para notas
- Scheduler sirve para asignar pods a los nodos disponibles según recursos, afinidad, tolerancias y políticas definidas.
- La arquitectura básica de K8s se describe como un plano de control (API Server, Scheduler, Controller Manager, etcd) y nodos de trabajo (kubelet, kube-proxy, Container Runtime) que ejecutan los pods.
- El contenedor sirve para encapsular la aplicación junto con todas sus dependencias, garantizando que se ejecute de manera consistente en cualquier entorno.
- La plantilla sirve para definir la configuración base de un objeto de Kubernetes, como un Deployment, indicando cómo deben crearse los pods y qué contenedores deben incluir.
- Otra cosa importante es que K8s permite escalado automático, balanceo de carga, recuperación ante fallos y actualizaciones sin downtime, facilitando la gestión de aplicaciones distribuidas.
---
### Nodos de trabajo:
- kubelet: Agente local que ejecuta instrucciones del plano de control (por ejemplo, iniciar un pod).
- kube-proxy: Gestiona la red y el balanceo de carga para los pods del nodo.
- Container Runtime: Docker, containerd, CRI-O, etc. Es lo que ejecuta contenedores.

## Flujo típico:
1. Usuario aplica manifiesto YAML (kubectl apply)
2. API Server guarda el estado deseado en etcd
3. Scheduler decide dónde correr el pod
4. kubelet en el nodo crea el pod con el runtime

### Objetos fundamentales en Kubernetes

#### Pod
- Unidad mínima de ejecución en Kubernetes.
- Puede contener uno o más contenedores (usualmente uno).
- Todos los contenedores del pod comparten red, almacenamiento y ciclo de vida.

#### ReplicaSet
- Asegura que siempre haya un número fijo de pods corriendo.
- Reemplaza pods automáticamente si uno falla.
- Normalmente no se usa directamente, sino a través de Deployment.

#### Service
- Abstracción que expone un conjunto de pods de manera estable.
- Balancea tráfico entre los pods seleccionados por etiquetas.
- Tipos:
  - **ClusterIP (default):** acceso interno
  - **NodePort:** acceso externo básico
  - **LoadBalancer:** acceso externo con balanceador de nube

#### Otros objetos importantes
- **ConfigMap:** almacena configuración no sensible (por ejemplo, URLs, variables).
- **Secret:** almacena configuración sensible (tokens, claves API), codificada en base64.
- **Namespace:** particiona el clúster lógicamente para multi-tenant o aislamiento de ambientes.
- 
### Manifiestos YAML

¿Qué es un manifiesto YAML?
- Archivo de texto estructurado que define el estado deseado de un objeto de Kubernetes.
- Puede describir pods, deployments, servicios, secretos, etc.
- Se aplica usando kubectl apply -f archivo.yaml.

- Ejemplo:
```
kubectl apply -f deployment.yaml
```

### Kubernetes en la nube

#### Clústeres gestionados en la nube
Plataformas populares:
- **AKS** (Azure Kubernetes Service)
- **EKS** (Amazon Elastic Kubernetes Service)
- **GKE** (Google Kubernetes Engine)

#### Ventajas
- No gestionás el plano de control (API Server, etcd, etc.).
- Escalado automático de nodos.
- Integración con otros servicios cloud (almacenamiento, monitoreo, identidad).
### containerd

#### ¿Qué es?
- **containerd** es un runtime de contenedores de nivel bajo.
- Ejecuta, pausa, elimina y gestiona el ciclo de vida de los contenedores.
- Fue parte de Docker, pero se separó y hoy es un proyecto CNCF de nivel graduado.

#### ¿Dónde se usa?
- Kubernetes usa containerd como runtime por defecto (reemplazando a Docker desde la v1.20+).
- Herramientas como Docker, nerdctl y cri-o pueden usar containerd como backend.
- Compatible con el estándar OCI (Open Container Initiative).

### ¿Debo preocuparme por containerd?

#### Respuesta corta: no en la mayoría de los casos
- Si se usa Docker, este ya se encarga de hablar con containerd.
- Si se usa Kubernetes, kubelet habla directamente con containerd a través de la CRI.
- Solo si se construyen herramientas de bajo nivel, se necesitará interactuar directamente con él.

#### Pero sí es importante saber que:
- Docker no es el único runtime.
- Kubernetes no depende de Docker, sino de una interfaz estándar llamada CRI.
- Saber esto ayuda a entender mejor los errores, logs y la arquitectura de clústeres modernos.

#### Notas 
- Averiguar sobre librerias que me sirvan para el laboratorio futuro.
- Tarea de leer y practicar texto pdf, 7 de octubre se entrega media noche.
- Proxima semana charlas de reclutamiento Alejandro Murillo Microsoft
