# Semana 10  
**Kryssia Martinez**  
**Laboratorio 10**  
**Tema:** Laboratorio Programación paralela y concurrente en C++ 

---

## Índice


---

Preparacion del laboratorio 10

- Primero se clonó el repositorio, para trabajar en la compu.

Conceptos:

Fase 1:  Fundamentos prácticos de concurrencia

Actividad 1: Creación de hilos independientes
Instruccion 
Implementar un programa simple con 4 hilos que impriman mensajes en consola de forma intercalada.
Archivo creado threads_basic.cpp

Imagen del código 

Preguntas y desarrollo

Imagen de salida 

1. ¿Qué patrón de ejecución observas en la salida?
2. ¿Existe una forma de controlar el orden de ejecución sin cambiar la lógica principal?

---

Fase 2: Sincronización y exclusión mutua

Actividad 2: Simulación de una variable compartida
Instruccion
Implementar un contador compartido entre varios hilos sin protección, y luego corregirlo usando std::mutex.
Archivo creado: contador_compartido.cpp

Imagen del código

Preguntas y desarrollo
1. Ejecutar el código con y sin mutex, comparar resultados.

Imagen del codigo con mutex

Imagen del codigo sin mutex

Resultados de la comparacion

2. Explicar por qué ocurre el resultado incorrecto en la versión sin sincronización.
   
3. Estimar cuántos “context switch” pueden estar ocurriendo (de manera conceptual).

Imagen de salida 

Actividad 3: Variables de condición (modelo productor-consumidor)
Instruccion
Implementar el clásico problema Productor-Consumidor con buffer limitado.
Archivo creado: productor_consumidor.cpp

Imagen del codigo 

Imagen de salida 

---






















