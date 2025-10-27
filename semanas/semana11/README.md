# Semana 11 - Clase 1 | 20 de Octubre  
## Laboratorio 11  
### Apuntes de la clase 
## Tema: Depuración, gdb, valgrind

---

# Depuración

La depuración es el proceso de identificar y eliminar errores o fallos en un programa de software. Es una etapa crucial en el ciclo de desarrollo que asegura que el código funcione correctamente y cumpla con los requisitos especificados.

Depurar implica:

Encontrar los errores.

Comprender por qué ocurrieron.

Solucionarlos de forma efectiva.

## ¿Por qué es importante?

### Garantía de calidad
Asegura que el software funcione bien en distintas condiciones.  
Reduce fallos y errores en el producto final.

### Mantenimiento del código
Se mejora la legibilidad y documentación.  
Se facilita la modularidad y futuras actualizaciones.

### Eficiencia del desarrollo
Detectar errores temprano ahorra tiempo y dinero.  
Reduce errores después del lanzamiento.

## Tipos de errores

### Errores de sintaxis
Violaciones de las reglas del lenguaje. Detectados por el compilador o intérprete.

Ejemplos:
- Falta de ;
- Paréntesis mal colocados

### Errores de tiempo de ejecución
Ocurren durante la ejecución por datos o acciones inválidas.

Ejemplos:
- División por cero
- Acceso a índices fuera de rango
- Punterros nulos

### Errores lógicos
El programa corre, pero con resultados incorrectos. Son los más difíciles de detectar.

Ejemplos:
- Algoritmos incorrectos
- Bucle infinito

## Conceptos básicos de depuración

### Puntos de interrupción (Breakpoints)
Marcas que pausan la ejecución en una línea para diagnosticar el estado del programa.

### Paso a paso (Stepping)
Step over: Avanza sin entrar en funciones.  
Step into: Entra en funciones llamadas en la línea actual.  
Step out: Sale de la función actual hasta la siguiente ejecución externa.

### Inspección de variables
Permite ver/modificar valores en tiempo real dentro del depurador.

### Call Stack (Pila de llamadas)
Permite revisar la secuencia de funciones ejecutadas y entender el flujo del programa.

## gdb — GNU Debugger

Documentación: https://sourceware.org/gdb/documentation/

Herramienta de depuración para C/C++ que permite inspeccionar el comportamiento interno del programa.

### Características principales
Control de ejecución  
Inspección y modificación de variables  
Navegación en la pila de llamadas  
Establecer breakpoints  
Ejecución paso a paso (tracing)

## Comandos básicos de gdb

Comando | Descripción | Ejemplo
------- | ----------- | -------
run | Ejecuta el programa | (gdb) run
break | Establece un breakpoint en línea o función | (gdb) break main.cpp:10
next | Ejecuta la siguiente línea (sin entrar a funciones) | (gdb) next
step | Avanza entrando en funciones | (gdb) step
continue | Reanuda ejecución | (gdb) continue
print | Muestra valor de variable | (gdb) print x
backtrace | Muestra la pila de llamadas | (gdb) backtrace

### Ejemplo de uso
g++ -g -o programa programa.cpp  
gdb programa  
(gdb) run  
(gdb) break funcion1  
(gdb) continue  
(gdb) next  
(gdb) print a  
(gdb) step  
(gdb) backtrace  
(gdb) continue  

## Análisis de memoria

### Valgrind
Framework para análisis de memoria y concurrencia.

Detecta:
- Leaks (fugas de memoria)
- Accesos inválidos
- Uso de memoria no inicializada
- Errores en programas multihilo

Ejemplo de uso:  
g++ -g -o programa programa.cpp  
valgrind --leak-check=yes ./programa  

### Memcheck
Herramienta principal de Valgrind para errores de memoria.

Detecta:
- Lecturas/escrituras fuera de límites
- Memoria no inicializada
- Doble liberación free()
- Fugas de memoria

## Sanitizers
Herramientas del compilador para detectar errores en tiempo de ejecución.

### AddressSanitizer (ASan)
Detecta:
- heap-buffer-overflow
- use-after-free
- Acceso a memoria no inicializada

Compilación:  
g++ -fsanitize=address -g -o programa programa.cpp  
./programa  

Incluye un shadow memory para validar accesos.

### ThreadSanitizer (TSan)
Detecta problemas de concurrencia como Race conditions (data race)

Compilación:
g++ -fsanitize=thread -g -o programa programa.cpp  
./programa  

## Análisis de hilos

### Helgrind (Valgrind)
Detecta:
- Condiciones de carrera
- Bloqueos
- Mal manejo de sincronización

Ejemplo de uso:
g++ -g -o programa programa.cpp  
valgrind --tool=helgrind ./programa  

## Conclusión

Estas herramientas permiten:  
Mejor desempeño  
Mayor calidad  
Software más seguro y estable  

Depurar es una parte esencial del desarrollo profesional.
