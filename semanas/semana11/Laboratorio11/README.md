# Semana 11  
**Kryssia Martínez**  
**Laboratorio 11**  
**Tema:** Laboratorio Depuración en C++ con gdb, Valgrind y Sanitizers 

---

## Índice
- [Preparación del laboratorio 11](#preparación-del-laboratorio-11)
- [Conceptos](#conceptos)
  - [Fase 1: Fundamentos prácticos de depuración](#fase-1-fundamentos-prácticos-de-depuración)
  - [Fase 2: Detección de errores de memoria](#fase-2-detección-de-errores-de-memoria)
  - [Fase 3: Análisis de concurrencia](#fase-3-análisis-de-concurrencia)
  - [Fase 4: Integración y automatización](#fase-4-integración-y-automatización)
  - [Fase 5: Análisis conceptual y reflexivo](#fase-5-análisis-conceptual-y-reflexivo)
- [Ejecución con Docker](#ejecución-con-docker)

---

## Preparación del laboratorio 11

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
- **Archivo creado:** `suma_vector.cpp`

**Imagen del código**  
![Código suma_vector](images/2.png)  

---

- Desarrollo de tareas:

1. Compilar el programa en modo debug con símbolos de depuración:
g++ -g -O0 -std=c++17 suma_vector.cpp -o suma_vector

2. Ejecutar bajo gdb:
gdb ./suma_vector

**Imagen de la compilación y ejecución**  
![Compilación fallida](images/4.png)  

3. Usar los comandos run, next, step, print, bt e info locals para ubicar los errores.

**Busqueda de errores**  
![Ejecución](images/5.png) 

- En la depuración en **gdb**, usé `break main` para poner un *breakpoint* al inicio de `main` y que el programa se detuviera ahí, para que avance despacio. Luego usé `catch throw` para que se pare justo cuando se lance una excepción C++, así se puede ver el fallo cuando sucede. Después, con `run` arranqué el programa para poder localizar el problema.  

- Cuando **gdb** se detuvo en `main`, usé `list` para ver el código con números de línea. Busqué la línea con `cout << "Suma calculada..."` y la que tiene `datos.at(4)`. Puse un *breakpoint* en la línea de `datos.at(4)` con `(gdb) break N` y continué la ejecución con `(gdb) continue`.  

- Para inspeccionar las variables antes del fallo, vi los valores usando `print s` (6 en este caso), luego el tamaño del vector con `print datos.size()` y los elementos con `print datos`.  

- Casi al final, usé `(gdb) bt` (*backtrace*) para ver la pila y la línea donde se lanzó la excepción, también `(gdb) info locals` para ver las variables locales del *frame* donde ocurrió el fallo, y `(gdb) print datos.size()` donde se confirma por qué pasa el error.  

- Por último, se muestra que antes `bt` e `info locals` decían "No stack" / "No frame" porque se usaron después de que el programa ya se había terminado. Con `catch throw` activo, **gdb** se detiene justo cuando se lanza la excepción, en ese momento `bt` e `info locals` sí brindan información útil.

**Parte 1 de la ejecución con gdb**  
![Ejecución 1](images/6.png) 

**Parte 2 de la ejecución con gdb**  
![Ejecución 2](images/7.png) 

**Parte 3 de la ejecución con gdb**  
![Ejecución 3](images/8.png) 

**Parte 4 de la ejecución con gdb**  
![Ejecución 4](images/9.png) 



4. Explicar las causas del error de ejecución y el error lógico.

- **Error lógico:** La función `suma` tenía un bucle `for` con la condición `i < v.size() - 1`, con eso se ignoraba el último elemento del vector. Entonces cuando se hacia la suma daba 6 en lugar de 10.

- **Error de ejecución:** Se intentaba acceder a `datos.at(4)` en un vector de tamaño 4, ahi se generó una excepción `std::out_of_range` porque el índice 4 no existe como pudimos observar. Entonces el programa se veia obligado a detenerse de manera incorrecta.

5. Corregir ambos errores y validar la salida correcta (suma = 10).

- Se realizó la corrección del c ódigo, lo que da una salida correcta.

**Corrección del código**  
![Corrección del código](images/10.png) 

**Imagen de salida**  
![Salida del programa](images/11.png)
---

### Preguntas y desarrollo

1. ¿Qué tipo de error genera el fallo de ejecución?
- Se genera una excepción std::out_of_range por intentar acceder a un índice inválido del vector.

2. ¿Qué comando permite identificar la línea exacta donde ocurre el fallo?
-`bt` (backtrace) en gdb, que muestra la pila y la línea donde se lanza la excepción.

3. ¿Qué diferencia existe entre los comandos next y step en gdb?
- `next` es el que ejecuta la siguiente línea de código pero sin entrar en funciones llamadas. 
- mientras que `step` ejecuta la siguiente línea de código y entra en cualquier función llamada en esa línea.

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
### Fase 5:  Análisis conceptual y reflexivo

**APreguntas de análisis:**  
1. ¿Qué diferencias existen entre un error de ejecución y un error lógico?
- 

2. ¿Qué ventajas presenta AddressSanitizer frente a Valgrind?
- 

3. ¿Cómo afectan las herramientas de depuración el rendimiento del programa?
- 

4. ¿Por qué se recomienda compilar con -O0 durante la depuración?
- 

5. ¿Qué aprendiste sobre la importancia de diagnosticar errores antes de liberar un programa?
- 

---

## Ejecución con Docker

**Imagen del código Docker**

- Para la parte de docker utilicé este.

![Dockerfile](images/21.png)  

- **Comandos**

  ```bash
  Comandos:
    docker build -t lab-debug .
    docker run -it --rm -v $(pwd):/lab-debug lab-debug
    make asan


  ```

- **Resultados**  