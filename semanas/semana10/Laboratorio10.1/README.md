# Semana 10, Clase 1  
**Lunes 13 de Octubre**  
**Apuntes de la clase**  
**Estudiante: Kryssia Martinez**

---

## Espacio para notas
- Procesos e hilos
- Procesos
- Hilos: Son procesos individuales

- Paralelismo vs Concurrencia:
- Parelelismo: Algo

- Cpu vs Gpu
- Quien es mas inteligente
- 
- CPU Es muy inteligente sabe hacer muchas cosas mas 
- GPU hace cosas muy basicas, lo que le digan y ya 

- Scheduler
- Cache memoria cercana al procesador(el procesador no tiene memoria)

Gerarquia de memoria 
Regs
cache 
-l1, l2 y l3
RAM
SSD/HDD

Multi nucleo y multiprocesador 
Que es cada uno y un ejemplo 

Memria compartida y distribuida 

Cndiciones de carrera (Race-condition)

Situación que ocurre cuando dos o más hilos o procesos acceden a una
memoria compartida al mismo tiempo y al menos uno de ellos está
realizando una operación de escritura, lo que ocasiona resultados
impredecibles y no deseados.
Situación que ocurre cuando dos o más hilos o procesos acceden a una
memoria compartida al mismo tiempo y al menos uno de ellos está
realizando una operación de escritura, lo que ocasiona resultados
impredecibles y no deseados.

Sincronizacion de hilos 
Importancia de la sincronización para evitar condiciones de carrera:
1. Evitar resultados inconsistentes: Asegura que los datos compartidos se actualicen de manera coherente y predecible.
a. Ejemplo: Utilizar un mutex para proteger el acceso a una variable compartida garantiza que solo un hilo a la vez pueda modificar su valor.
2. Prevenir comportamiento no determinista: Permite que el programa tenga un comportamiento predecible y reproducible, facilitando la depuración
y el mantenimiento.
a. Ejemplo: Utilizar std::lock_guard en C++ para asegurar que un mutex se desbloquee automáticamente al salir del ámbito.
3. Seguridad y consistencia de datos: Protege contra la corrupción de datos y fallos del programa, asegurando que las operaciones críticas se completen
sin interferencias.
a. Ejemplo: Utilizar semáforos para gestionar el acceso a un recurso limitado, como un pool de conexiones.
4. Asegurar el orden correcto de ejecución: Garantiza que las operaciones se realicen en el orden correcto, evitando interdependencias incorrectas.
a. Ejemplo: Utilizar std::condition_variable para coordinar la ejecución de hilos basados en ciertos eventos o condiciones.

