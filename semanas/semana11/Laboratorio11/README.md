# Semana 11  
**Kryssia Martínez**  
**Laboratorio 11**  
**Tema:** Laboratorio Depuración en C++ con gdb, Valgrind y Sanitizers 

---

## Índice
- [Preparación del laboratorio 10](#preparación-del-laboratorio-10)
- [Conceptos](#conceptos)
  - [Fase 1: Fundamentos prácticos de concurrencia](#fase-1-fundamentos-prácticos-de-concurrencia)
  - [Fase 2: Sincronización y exclusión mutua](#fase-2-sincronización-y-exclusión-mutua)
  - [Fase 3: Mecanismos avanzados y análisis de rendimiento](#fase-3-mecanismos-avanzados-y-análisis-de-rendimiento)
  - [Fase 4: Análisis conceptual y reflexivo](#fase-4-análisis-conceptual-y-reflexivo)
- [Ejecución con Docker](#ejecución-con-docker)

---

## Preparación del laboratorio 10

- Primero, se actualizó el repositorio para trabajar en la computadora.

![Repo](images/1.png)

---

## Conceptos

### Lo que aprendí



---

### Fase 1: Fundamentos prácticos de depuración

**Actividad 1:  Exploración con gdb**  
- **Instrucción:**  
Implementar un programa que contenga errores de lógica y de ejecución, y utilizar gdb para analizarlo paso a paso.  
- **Archivo creado:** `threads_basic.cpp`

**Imagen del código**  
![Código threads_basic](images/2.png)  

---

- Desarrollo de tareas:

1. Compilar el programa en modo debug con símbolos de depuración:
g++ -g -O0 -std=c++17 suma_vector.cpp -o suma_vector

**Imagen de la compilación**  
![Compilación](images/2.png)  

2. Ejecutar bajo gdb:
gdb ./suma_vector

**Imagen de la ejecución**  
![Ejecución](images/2.png)  

3. Usar los comandos run, next, step, print, bt e info locals para ubicar los errores.

**Busqueda de errores**  
![Ejecución](images/2.png) 


4. Explicar las causas del error de ejecución y el error lógico.


5. Corregir ambos errores y validar la salida correcta (suma = 10).

**Corrección del código**  
![Corrección del código](images/2.png) 

**Imagen de salida**  
![Salida del programa](images/3.png)
---

### Preguntas y desarrollo

1. ¿Qué tipo de error genera el fallo de ejecución?
- 

2. ¿Qué comando permite identificar la línea exacta donde ocurre el fallo?
-

3. ¿Qué diferencia existe entre los comandos next y step en gdb?
- 

---

### Fase 2:  Detección de errores de memoria

**Actividad 2: Diagnóstico con AddressSanitizer y Valgrind**  
- **Instrucción:**  
Analizar un programa con errores de asignación y fugas de memoria utilizando AddressSanitizer (ASan) y Valgrind/Memcheck.

- **Archivo creado:** `contador_compartido.cpp`

**Imagen del código**  
![Código](images/4.png)

---

- Desarrollo de tareas:

1. Compilar con AddressSanitizer:
clang++ -g -O0 -fsanitize=address -fno-omit-frame-pointer
buffers.cpp -o buffers
./buffers

**Imagen de la compilación**  
![Compilación](images/2.png)  

2. Ejecutar con Valgrind:
valgrind --leak-check=yes --track-origins=yes
--show-leak-kinds=all ./buffers

**Imagen de la ejecución**  
![Ejecución Valgrind](images/2.png)  

3. Registrar los errores detectados y sus causas.
- 

**Busqueda de errores**  
![Ejecución](images/2.png) 


4. Corregir el código (agregar espacio adecuado, evitar accesos inválidos y liberar memoria).

**Corrección del código**  
![Corrección del código](images/2.png) 

5. Validar la ejecución sin errores en ASan y Valgrind.


**Corrección del código**  
![ejecución sin errores ASan](images/2.png) 

**Imagen de salida**  
![ejecución sin errores Valgrind](images/3.png)
---

### Preguntas y desarrollo

1. ¿Qué tipo de error detectó AddressSanitizer primero?
- 

2. ¿Cuál fue la causa de la fuga de memoria?
-

3. ¿Por qué es importante compilar con la opción -g?
- 

---
### Fase 3:  Análisis de concurrencia

**Actividad 3: Detección de condiciones de carrera**  
- **Instrucción:**  
Analizar un programa con accesos concurrentes a una variable compartida sin sincronización. Usar ThreadSanitizer y Helgrind para detectar el problema y luego corregirlo.

- **Archivo creado:** `contador_compartido.cpp`

**Imagen del código**  
![Código](images/4.png)


---

- Desarrollo de tareas:

1. Compilar con ThreadSanitizer:
clang++ -g -O1 -fsanitize=thread -std=c++17 race.cpp -o
race -lpthread
./race

**Imagen de la compilación**  
![Compilación](images/2.png)  

2. Ejecutar con Helgrind:
valgrind --tool=helgrind ./race

**Imagen de la ejecución**  
![Ejecución Helgrind](images/2.png)  

3. Registrar el diagnóstico de ambas herramientas.

**Diagnóstico de errores con ThreadSanitizer:**  
![Diagnóstico con ThreadSanitizer](images/2.png) 

**Diagnóstico de errores con Helgrind:**  
![Diagnóstico con Helgrind](images/2.png)
- 

4. Corregir el código usando std::mutex o std::atomic<int>.

**Corrección del código**  
![Corrección del código](images/2.png) 

**Imagen de salida**  
![ejecución sin errores Valgrind](images/3.png)

---

### Preguntas y desarrollo

1. ¿Qué tipo de acceso detecta ThreadSanitizer como data race?
-

2. ¿Por qué Helgrind tiene un mayor costo de ejecución?
-

3. ¿Qué ventajas tiene usar std::atomic frente a std::mutex?
-

---

### Fase 4:  Integración y automatización

**Actividad 4:  Makefile y perfiles de análisis**  
- **Instrucción:**  
Crear un Makefile que automatice la compilación y ejecución con los diferentes perfiles de depuración.

- **Archivo creado:** `Makefile`

**Imagen del código**  
![Código](images/4.png)


---
