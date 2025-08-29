# Semana 3, Clase 2 - 28 de agosto, 2025

## Quiz de la sesión sobre SIMOVILAB  
**Profesor de charla:** Fabián Abarca

> “Las empresas autobuseras creen que si los usuarios saben que faltan 20 minutos para que pase el bus, van a preferir utilizar Uber.”

---

## Opinión personal
Creo que lo que se menciona podría ser cierto, pero también depende del tipo de usuario.  
Algunas personas sí van a preferir Uber si el bus tarda 20 minutos, o incluso más, o si hay un choque o algún atraso.  
Sin embargo, creo que si se supiera con certeza el horario del bus, muchas personas se organizarían mejor para llegar a tiempo a su parada.

Por ejemplo, en mi caso, necesito tomar el bus para ir a clases, de Guadalupe a la UCR el trayecto dura unos 5 a 7 minutos, pero el bus usualmente **no pasa a la hora que se supone**. A veces uso Moovit, pero no es tan precisa. Por ejemplo, la Interlínea pasa solo dos veces por hora, y a veces prefiero irme 20 minutos antes de mi clase en Uber, porque me cobra solo 300 colones más que el bus. Así no llego tarde y no tengo que esperar una hora.Pero en otras ocasiones sí me toca esperar, porque la diferencia en precio entre irme en bus o en Uber sí es mucho mayor. Entonces, **tener información en tiempo real ayuda a tomar mejores decisiones**, y no necesariamente hace que todos se vayan a pedir un Uber. Depende del contexto de cada persona y el dinero que tenga disponible para viajar, uno como estudiante no tiene mucho dinero para destinar a Uber.

---

## Apuntes de la charla

### Proyecto SIMOVILAB

SIMOVILAB trabaja en el desarrollo de **Sistemas de Información para la Movilidad Inteligente (SIMI)**.  
Un ejemplo clave es:

- **Databús**: Recolecta información y suministra datos.
- **Infobús**: Entrega la información ya procesada a usuarios o aplicaciones.

Desarrollan una **guía práctica de diseño e implementación** para tomadores de decisiones y entidades del sector, tanto dentro como fuera de la universidad.

Incluye:
- Especificaciones técnicas
- Interfaces del sistema
- Aplicaciones para entidades como el **CTP (Consejo de Transporte Público de Costa Rica)**, que actualmente tiene **limitaciones de personal especializado en tecnología**.

---
### Datos

Primero, se encuentra un **servidor central de datos**, desde el cual se distribuye la información hacia diferentes módulos del sistema:

- Análisis de datos  
- Servidor de pantallas  
- Sitio web de transporte  
- Otros servicios de información

Este sistema abarca distintos actores, como se mostró en el cuadro de la presentación:

- Un investigador  
- La pantalla instalada en el bus  
- El pasajero  
- El editor de señalización

---

### Arquitectura del sistema

#### Backend:
- **Django** como framework principal
- **Celery** para la gestión de tareas asíncronas
- **PostgreSQL** como sistema de base de datos
- **Redis** como intermediador de mensajes
- **Python** como lenguaje base
- **Strapi CMS** para la gestión de contenido

#### Monitoreo:
- **Grafana**
- **Zabbix**
- **Wazuh**
- **Prometheus**

#### Frontend:

**Aplicación móvil:**
- **Ionic UI** con interfaz en **Vue**
- Usa lenguaje **TypeScript**
- Se basa en la plataforma **Capacitor**

**Sitio web:**
- **PrimeVue UI** para la interfaz web
- Usa **Vue** con la plataforma **Nuxt**

---

### Repositorio en Git

En el repositorio del proyecto se observan varios módulos divididos por funcionalidad. Algunos de ellos son:

1. `databus`  
2. `databus-admin`  
3. `databus-cms`  
4. `databus-app`  
5. `databus-editor`  
6. `databus-py`  
7. `databus-flow`  
8. `databus-stop-times`  
9. `django-app-gtfs` 

Y por parte de Infobús:

10. `infobus`  
11. `infobus-admin`  
12. `infobus-app`  
13. `infobus-cms`  
14. `infobus-data`  
15. `infobus-mcp`  
16. `infobus-py`  
17. `infobus-screens`  
18. `infobus-web`

---

### Reporte de especificaciones técnicas

El proyecto incluye un **reporte detallado de especificaciones técnicas**, útil para desarrolladores, entidades del sector público y tomadores de decisiones.

---

### Aplicación móvil operativa: Databús

Se presentó una **aplicación móvil funcional** como parte de la propuesta, pensada como una **alternativa de bajo costo** para:

- Rastreo de vehículos  
- Telemetría  
- Comunicación interna entre operadores del sistema

---

### Sitio web público: Infobús

También se mostró un **sitio web accesible al público**, diseñado para personas usuarias. Este sitio ofrece:

- Información en **tiempo real**  
- Diseño adaptado para dispositivos móviles  
- Interfaz amigable y responsiva

---


### Tecnologías utilizadas

- **Redis**: Intermediador de mensajes, asegura el correcto funcionamiento del sistema.
- **Django**: Framework de Python usado para construir Databús.
  - Organizado en pequeñas aplicaciones.
  - Usa modelos para describir la base de datos mediante clases de Python.
  - Sirve como interfaz limpia para estructurar el backend.
- **Celery**: Gestor de tareas en segundo plano, que funciona con un *worker*.
  - Supervisa tareas, gestiona su progreso y lanza nuevas tareas según sea necesario.
- **Terminal recomendada**: Se mencionó **Warp**, una terminal moderna y optimizada.

---

### Ventajas de la propuesta Databús / Infobús

- Especialización  
- Consistencia y unicidad  
- Gestión integral
- Datos en tiempo real
- Flexibilidad de implementación  
- Soluciones a la medida  
- Enfoque en seguridad y robustez  
- Respaldo académico
- Garantia contractual
- Flexibilidad de financiamento
- Nuevo modelo de gobernanza
- Codigo abierto  

---

### Otros puntos relevantes

- Se han realizado publicaciones académicas del proyecto.
- Explicaron cómo se registra un vehículo utilizando **API endpoints**, implementado con Django.
- El código y los paquetes están disponibles en el repositorio de SIMOVI.

#### Conceptos clave:
- **MCP**: (Modelo Conceptual de Plataforma)
- **API**: Interfaz para conectar sistemas o aplicaciones.
- **GTFS (General Transit Feed Specification)**:
  - Protocolo para publicar datos de transporte público.
  - Incluye datos **estáticos** (rutas, horarios) y **dinámicos** (ubicación en tiempo real).
  - Es usado por aplicaciones como **Moovit**, pero este proyecto busca ofrecer una alternativa más completa.

La idea es que los usuarios tengan información en tiempo real para saber si llegarán a tiempo al bus o si deben optar por otra opción.

---

### Visualización del sistema

- Se mostró un ejemplo en el que un tren llamado **“Green-E”** aparece como dato de prueba dentro del sistema.
- La información está contenida en una **URL** y gestionada desde servicios en **Google Cloud**.
- Se visualizó el código fuente y cómo se estructuran los modelos y bases de datos en Django.

---
### Demostración en clase

- El profesor realizó una demostración de los objetos y otras funciones dentro de la base de datos en **Django**.
- Mostró cómo **Celery**, el gestor de tareas, trabaja con un **worker (CPU)** para organizar mejor los procesos.
  - Celery se encarga de revisar el progreso de una tarea y enviar otra cuando la anterior se ha completado.
- **Terminal recomendada:** Se mencionó **Worp** (posiblemente se refería a Warp).

---

### ¿Cómo se capturan los datos de un bus? Apartado de preguntas en la clase

- Se mencionó la posibilidad de usar los **validadores** de los buses, ya que tienen GPS incorporado.
- También se plantea que los **cobradores** podrían tener un papel clave en el sistema.
- Se necesita una **interfaz** para capturar y gestionar ciertos datos necesarios.
- Además, se contempla el uso de una **aplicación móvil** para apoyar la recolección de información.

---

