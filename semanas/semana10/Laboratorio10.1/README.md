# Semana 10, Clase 1  
**Lunes 13 de Octubre**  
**Apuntes de la clase**  
**Estudiante: Kryssia Martinez**
## Tema: Programacion paralela/concurrente

---

## Espacio para notas

### Procesos e Hilos
- **Procesos:**
  - Programa en ejecución con recursos propios (memoria, espacio de direcciones, archivos).
  - Aislados entre sí: un proceso no accede directamente a la memoria de otro.
- **Hilos:**
  - Unidad mínima de ejecución dentro de un proceso.
  - Comparten memoria y recursos del proceso padre.
  - Menor sobrecarga que los procesos (crear/switch es más barato).

---

### Paralelismo vs Concurrencia
- **Concurrencia:** varias tareas progresan en el tiempo (no necesariamente al mismo tiempo); el SO alterna su ejecución. Útil cuando hay más tareas que CPU.
- **Paralelismo:** tareas se ejecutan realmente al mismo tiempo aprovechando múltiples núcleos. Útil para alto rendimiento.

---

### CPU vs GPU
| Aspecto | CPU | GPU |
|---|---|---|
| Núcleos | Pocos y complejos | Muchos y simples |
| Versatilidad | Alta (control, lógica, secuencial) | Baja (especializada en datos masivos) |
| Uso típico | Sistemas, I/O, lógica de control | Gráficos, ML, cómputo masivo paralelo |

- La CPU coordina y resuelve tareas heterogéneas.
- La GPU ejecuta operaciones repetitivas en paralelo a gran escala.

---

### Scheduler (Planificador)
- Decide qué proceso/hilo corre, cuándo y por cuánto tiempo.
- Objetivos: alta utilización de CPU, baja latencia, justicia entre tareas, cumplimiento de prioridades.

---

### Caché (memoria cercana a la CPU)
- Almacena datos/instrucciones recientes para reducir latencia.
- Niveles: L1 (más rápida/pequeña), L2, L3 (más grande/lenta).
- El procesador no “guarda” datos a largo plazo; utiliza la jerarquía de memorias.

---

### Jerarquía de Memoria (rápida → lenta)
1. **Registros**
2. **Caché**: L1 → L2 → L3
3. **RAM**
4. **Almacenamiento**: SSD / HDD

---

### Multinúcleo vs Multiprocesador
- **Multinúcleo:** un chip con varios núcleos (p. ej., CPU de 8 núcleos).
- **Multiprocesador:** varios sockets/CPUs físicos en el mismo sistema (p. ej., servidor con 2 CPUs).

---

### Memoria Compartida vs Distribuida
| Modelo | Descripción | Ejemplo |
|---|---|---|
| **Compartida** | Hilos/procesos comparten el mismo espacio de direcciones | PC multinúcleo |
| **Distribuida** | Cada nodo tiene su propia memoria; comunican por red | Clúster HPC |

---

### Condiciones de carrera (Race Condition)
- Ocurren cuando dos o más hilos/procesos acceden a memoria compartida simultáneamente y al menos uno escribe.
- Consecuencias: resultados impredecibles, inconsistencias y fallos intermitentes.
- Difíciles de reproducir; dependen del intercalado de ejecución.

---

### Sincronización de Hilos
- Objetivo: coordinar el acceso a recursos compartidos y preservar la consistencia.

**Importancia y ejemplos:**
1. **Evitar resultados inconsistentes**
   - Usar **mutex** para secciones críticas.
2. **Prevenir comportamiento no determinista**
   - En C++ usar `std::lock_guard`/`std::scoped_lock` para liberar mutex automáticamente.
3. **Seguridad y consistencia de datos**
   - Usar **semáforos** para recursos contados (p. ej., pool de conexiones).
4. **Orden correcto de ejecución**
   - Usar `std::condition_variable` para esperar eventos/condiciones.

---

### Multi núcleo y Multiprocesador: ejemplos
- **Multinúcleo:** laptop con CPU de 6/8 núcleos ejecutando compilación paralela.
- **Multiprocesador:** servidor con 2 sockets corriendo bases de datos y microservicios en paralelo.

---

### Memoria Compartida y Distribuida: ejemplos
- **Compartida:** aplicación multihilo con colas en memoria protegidas por mutex.
- **Distribuida:** MapReduce/Spark donde los nodos intercambian datos por red.

## Programación Paralela y Concurrente

### Procesos e Hilos
- **Proceso**
  - Instancia de un programa en ejecución.
  - Posee su propio espacio de memoria.
  - Crear y gestionar procesos es costoso.
  - La comunicación entre procesos requiere IPC (pipes, sockets, colas de mensajes).
  - Ejemplos: navegador completo, editor de texto, reproductor de música.

- **Hilo**
  - Unidad de ejecución dentro de un proceso.
  - Comparte memoria y recursos del proceso.
  - Más económico de crear y administrar que un proceso.
  - Ejemplos: una pestaña del navegador, autoguardado de Word, hilo de sonido en un juego.

---

### Multitarea
- Capacidad del sistema operativo para ejecutar múltiples tareas a la vez.
- Se asigna un **quantum** de CPU a cada proceso.
- Cambios rápidos entre tareas generan la sensación de ejecución simultánea.
- En CPU de un solo núcleo, no hay paralelismo real, sino intercalado.

Características:
- Nivel: procesos
- Espacio de memoria independiente
- Comunicación por IPC
- Alto costo de creación

---

### Paralelismo vs Concurrencia
| Concepto | Definición | Ejemplo |
|----------|------------|---------|
| **Paralelismo** | Ejecución simultánea real en múltiples núcleos | Procesamiento de imágenes, simulaciones científicas |
| **Concurrencia** | Varias tareas progresan de manera intercalada | Servidores web, UI con tareas en segundo plano |

Resumen:
- Paralelismo → Ejecución al mismo tiempo
- Concurrencia → Gestión de múltiples tareas superpuestas

---

### CPU vs GPU
| CPU | GPU |
|-----|-----|
| Pocos núcleos complejos | Muchos núcleos simples |
| Muy versátil | Especializada en cálculos repetitivos |
| Ideal para lógica y control | Ideal para cómputo masivo paralelo |

---

### Procesadores multinúcleo y multiprocesador
- **Multinúcleo**
  - Un chip con varios núcleos que comparten memoria.
  - Paralelismo verdadero dentro del mismo procesador.
  - Ejemplo: CPU de 4 u 8 núcleos.

- **Multiprocesador**
  - Sistema con varios procesadores físicos.
  - Utilizado en servidores y sistemas de alto rendimiento.
  - Ejemplo: Servidor con 2 procesadores de 8 núcleos cada uno.

---

### Memoria compartida vs memoria distribuida
| Modelo | Características | Ejemplo |
|--------|----------------|---------|
| **Compartida** | Comunicación directa con variables compartidas usando mecanismos de sincronización | PCs y estaciones de trabajo |
| **Distribuida** | Cada nodo tiene su propia memoria y se comunican por red mediante mensajes | Clústeres, supercomputadoras |

---

### Modelos de programación
- **Modelo de memoria compartida**
  - Comunicación mediante memoria común.
  - Requiere sincronización.
  - Ejemplos: Pthreads, OpenMP

- **Modelo de paso de mensajes**
  - Comunicación mediante envío/recepción de mensajes.
  - No se comparte memoria.
  - Ejemplos: MPI, Actor Model

---

### Jerarquía de Memoria (más rápida → más lenta)
1. Registros (dentro de CPU)
2. Caché L1 → L2 → L3
3. RAM
4. SSD / HDD

---

### Scheduler
- Decide qué hilo o proceso corre y cuándo.
- Objetivos: minimizar latencia, maximizar uso de CPU, aplicar prioridades.

---

### Condiciones de carrera (Race Condition)
Definición:
- Ocurre cuando varios hilos acceden a memoria compartida y al menos uno escribe, generando resultados impredecibles.

Consecuencias:
- Resultados incorrectos
- Comportamiento no determinista
- Fallos y corrupción de memoria
- Posibles vulnerabilidades de seguridad

---

### Sincronización de hilos
Evita interferencias concurrentes y mantiene consistencia de datos.

Beneficios:
1. Evitar resultados inconsistentes
2. Comportamiento reproducible
3. Seguridad y coherencia de datos
4. Orden correcto de ejecución

---

### Mecanismos de sincronización comunes

| Mecanismo | Descripción | Uso típico |
|----------|-------------|-----------|
| **Mutex** | Exclusión mutua: solo un hilo accede a la sección crítica | Modificar datos compartidos |
| **Semáforo** | Controla acceso a recursos limitados | Pools de conexiones |
| **Variables de condición** | Hilos esperan a que ocurra un evento | Productor-consumidor |
| **Barreras** | Hilos deben esperar a todos para continuar | Algoritmos en etapas |

---

### Bloqueos y Deadlocks
- **Bloqueo (lock):** recurso adquirido por un hilo que debe ser liberado.
- **Deadlock:** dos o más hilos se bloquean mutuamente esperando un recurso.

Ejemplo clásico:
- Hilo A tiene recurso X y espera Y
- Hilo B tiene recurso Y y espera X

Ninguno puede continuar.

---

### Costos de hilos
- **Creación**
  - Requiere reserva de recursos (stack, ID)
- **Memoria**
  - Cada hilo tiene su propia pila
- **Context switching**
  - Cambiar entre hilos implica guardar/restaurar registros
  - Exceso reduce eficiencia por pérdida de caché
- **Sincronización**
  - Contención si muchos hilos compiten por un recurso

---

### Consideraciones de rendimiento

1. **Número de hilos**
   - Pocos → subutilización de CPU
   - Muchos → overhead y contención
   - Recomendación: similar al número de núcleos

2. **Granularidad de tareas**
   - Muy pequeñas → demasiado overhead
   - Muy grandes → mala distribución del trabajo

3. **Utilización del sistema**
   - CPU, memoria, I/O deben estar balanceados

4. **Planificación (Scheduling)**
   - Ajuste de prioridades según tareas críticas

5. **Perfilado**
   - Herramientas: perf, valgrind, gprof

---

### Ejemplo clásico: Productor-Consumidor
- Productores generan tareas
- Consumidores procesan tareas
- Búfer compartido
- Uso de:
  - Mutex
  - Semáforos
  - Variables de condición
- Objetivo: evitar corrupción de datos y espera indefinida

---

### Resumen general
| Tema | Punto clave |
|------|------------|
| Procesos vs hilos | Memoria propia vs compartida |
| Concurrencia | Intercalado |
| Paralelismo | Ejecución simultánea real |
| Memoria compartida | Requiere sincronización |
| Memoria distribuida | Comunicación por mensajes |
| Deadlock | Espera circular |
| Rendimiento | Balance hilos vs núcleos |

---

