# Semana 11 - Clase 1 | 20 de Octubre  
## Laboratorio 11  
### Apuntes de la clase 
## Tema: Depuración, gdb, valgrind

---

# Depuración, gdb y valgrind

## 1. Depuración

La depuración es el proceso de identificar, comprender y eliminar errores o fallos en un programa de software. Garantiza que el código funcione correctamente y cumpla los requisitos establecidos.

### Importancia
- Garantía de calidad: minimiza fallos en el producto final.
- Mantenimiento del código: mejora legibilidad, modularidad y documentación.
- Eficiencia del desarrollo: detectar errores temprano reduce costos y tiempo.
- Experiencia del usuario: evita fallos y comportamientos inesperados.

---

## 2. Tipos de errores

| Tipo de error | Momento en que ocurre | Ejemplos | Detección |
|--------------|----------------------|----------|-----------|
| Errores de sintaxis | Antes de ejecutar | Falta de punto y coma, paréntesis incorrectos | Detectados por el compilador |
| Errores de ejecución | Durante la ejecución | División por cero, puntero nulo | El programa se detiene inesperadamente |
| Errores lógicos | Programa ejecuta pero con resultados incorrectos | Algoritmo mal diseñado, bucle infinito | Mediante pruebas y análisis |

Los errores lógicos son difíciles de detectar porque el programa no falla, pero no hace lo correcto.

---

## 3. Conceptos esenciales

### Breakpoints (Puntos de interrupción)
Pausan la ejecución del programa en una línea específica para inspeccionar el estado del sistema.

### Stepping
- Step over (next): avanza sin entrar en funciones
- Step into (step): entra en las funciones llamadas
- Step out (finish): sale de la función actual

### Inspección de variables
Permite observar o modificar los valores de variables en tiempo de ejecución.

### Call Stack (Pila de llamadas)
Muestra la secuencia de funciones llamadas hasta la línea actual. La parte superior es la función activa.

---

## 4. gdb (GNU Debugger)

Herramienta para depurar programas escritos en C, C++ y otros lenguajes.

### Características
- Pausar y reanudar la ejecución
- Visualizar y modificar variables
- Navegar la pila de llamadas
- Establecer breakpoints
- Análisis paso a paso

### Compilación con símbolos de depuración
```bash
g++ -g -o programa programa.cpp
```

### Ejecución con gdb
```
gdb programa
(gdb) run

```
### Comandos más utilizados

| Comando | Función | Ejemplo |
|--------|---------|---------|
| run | Inicia ejecución del programa | run |
| break | Establece un punto de interrupción | break main.cpp:10 |
| next | Paso sin entrar a función | next |
| step | Paso entrando a función | step |
| continue | Reanuda hasta siguiente breakpoint | continue |
| print | Mostrar variable | print x |
| backtrace | Mostrar pila de llamadas | backtrace |

---

### 5. Análisis de memoria

#### Valgrind
Marco de herramientas para:
- Encontrar pérdidas de memoria
- Detectar accesos inválidos a memoria
- Detectar memoria no inicializada
- Analizar concurrencia

Ejecución:
g++ -g -o programa programa.cpp  
valgrind --leak-check=yes ./programa

#### Memcheck
Detecta:
- Lecturas/escrituras fuera de límites
- Doble liberación de memoria
- Memoria dinámica no liberada

---

### 6. Sanitizers

Herramientas del compilador que agregan verificaciones automáticas.

#### AddressSanitizer (ASan)
Detecta:
- heap-buffer-overflow
- use-after-free
- accesos ilegales

g++ -fsanitize=address -g -o programa programa.cpp  
./programa

#### ThreadSanitizer (TSan)
Detecta:
- Condiciones de carrera
- Problemas de sincronización en hilos

g++ -fsanitize=thread -g -o programa programa.cpp  
./programa

---

### 7. Análisis de hilos

#### Helgrind (Valgrind)
Detecta:
- Condiciones de carrera
- Deadlocks
- Errores de concurrencia

valgrind --tool=helgrind ./programa

---

### Conclusión

La depuración es fundamental para asegurar:
- Correcto funcionamiento del software
- Buena calidad del código
- Eficiencia en el desarrollo
- Estabilidad y seguridad del programa

Herramientas clave:
- gdb: ejecución y lógica del programa
- Valgrind y Sanitizers: errores de memoria y concurrencia
