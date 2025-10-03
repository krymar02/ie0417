# Semana 8 - Clase 2 | 2 de Octubre
## Laboratorio 8.2 
# Exposicion de los grupos 3 y 4  
---
### Grupo 3  
### Tema: Inteligencia Artificial y Ciencia de Datos

# Índice de temas

1. Introducción a IA y Machine Learning  
2. Ciclo de un proyecto de Machine Learning  
3. Herramientas y lenguajes  
4. Ejemplos reales de aplicación  
5. Aspectos éticos  
6. Áreas laborales

---

## Introducción a IA y Machine Learning

- **IA (Inteligencia Artificial):** busca reproducir la inteligencia humana en máquinas mediante razonamiento lógico, probabilístico, percepción, lenguaje, robótica y toma de decisiones.  
- **ML (Machine Learning):** es un subconjunto de la IA centrado en aprender patrones a partir de datos para clasificar, predecir e inferir sin programación explícita.  
- **Diferencia principal:**  
  - IA = inteligencia general en sistemas.  
  - ML = aprendizaje automático basado en datos.  

### Tipos de aprendizaje en ML
- **Supervisado:** aprende a partir de datos etiquetados.  
- **No supervisado:** detección de patrones ocultos.  
- **Por refuerzo:** aprendizaje con recompensas y penalizaciones.  
- **Evolutivo:** modelos que optimizan sus soluciones mediante algoritmos evolutivos.  

### Otros enfoques de IA
- Lógica simbólica y razonamiento probabilístico  
- Computación evolutiva y enjambres (algoritmos genéticos, colonias de hormigas)  
- Redes neuronales y deep learning (visión computacional, reconocimiento de voz)  
- Procesamiento de lenguaje natural (PLN): comprensión de texto y voz  
- Robótica y agentes: percepción, planificación y acción  
- Visión computacional: análisis automático de imágenes y videos

---

## Áreas de la IA

- **Lógica y razonamiento simbólico:** sistemas expertos y reglas.  
- **Razonamiento probabilístico:** redes bayesianas y decisiones bajo incertidumbre.  
- **Computación evolutiva y enjambres:** algoritmos genéticos, colonias de hormigas.  
- **Redes neuronales y deep learning:** visión computacional, reconocimiento de voz.  
- **Procesamiento de lenguaje natural (PLN):** comprensión de texto y voz.  
- **Robótica y agentes:** percepción, planificación y acción.  
- **Visión computacional:** análisis automático de imágenes y video.

---

## IA Tradicional vs IA Moderna

| Característica          | IA Tradicional (basada en reglas)                  | IA Moderna (basada en datos)                        |
|-------------------------|--------------------------------------------------|----------------------------------------------------|
| Enfoque                 | Sistemas expertos: reglas lógicas               | Aprende de grandes volúmenes de datos             |
| Razonamiento            | Explícito                                       | Algoritmos de Machine Learning y Deep Learning    |
| Patrones                | Necesitan reglas predefinidas                    | Redes neuronales descubren patrones automáticamente |
| Flexibilidad            | Rígida, difícil de escalar                      | Más flexible, adaptable y escalable               |
| Dependencia             | Expertos humanos                                | Datos y algoritmos                                 |


Se realizó una demostración de una página y su funcionamiento con Python, mostrando cómo la IA ayuda a escoger una pizza mediante el siguiente enlace: [PizzaRecom](https://huggingface.co/spaces/Alerolero/pizzarecom)

---

## Herramientas y lenguajes

**Lenguaje base: Python**  
- Lenguaje más usado en ciencia de datos por su simplicidad y versatilidad.  
- Características: sintaxis clara, multiplataforma, código abierto, tipado dinámico.  
- Bibliotecas clave:  
  - **NumPy, pandas, SciPy**: manejo y análisis de datos.  
  - **Scikit-Learn**: algoritmos clásicos de ML.  
  - **TensorFlow, Keras, PyTorch**: deep learning y redes neuronales.  
- Ventajas: fácil de aprender, flexible, gran comunidad.  
- Limitaciones: no es el más rápido y puede consumir memoria.  

### Bibliotecas principales

**Scikit-Learn**  
- Implementa modelos clásicos de ML:  
  - Regresión: predicción de valores y clasificación binaria.  
  - Árboles de decisión: reglas jerárquicas para clasificación/regresión.  
  - Clustering (K-Means, DBSCAN): agrupación sin etiquetas.  
- Muy usado en investigación y aplicaciones prácticas.  

**TensorFlow y PyTorch**  
- Bibliotecas líderes en deep learning y redes neuronales.  
- **TensorFlow (Google):** flexible, escalable (CPU, GPU, TPU).  
- **PyTorch (Facebook):** dinámico, sencillo, popular en investigación.  
- Usados en visión computacional, PLN, traducción automática, generación de texto, etc.  

**Redes neuronales**  
- Capas de entrada, ocultas y salida que procesan datos y aprenden representaciones.

---

## Entornos de desarrollo más comunes
- **Jupyter Notebooks:** exploración de datos, prototipado rápido, enseñanza.  
- **Google Colab:** versión en la nube de Jupyter, gratis con GPU/TPU.  
- **Azure ML:** servicio en la nube de Microsoft para crear y desplegar modelos a escala.  
- **Kaggle:** plataforma de datasets, notebooks y competiciones de ML.

---

## Ejemplos de aplicación

1. **Sistemas de recomendación**  
   - Analizan historial y patrones de usuarios.  
   - Tipos:  
     - Filtrado colaborativo (usuarios similares).  
     - Basado en contenido (características de productos).  
     - Híbridos (combinación).  
   - Ejemplos: Netflix, Spotify, Amazon.  

2. **Chatbots y asistentes virtuales**  
   - Usan PLN y ML para responder en tiempo real.  
   - Aplicaciones principales:  
     - ChatGPT: conversaciones complejas.  
     - Siri: tareas en dispositivos Apple.  
     - Alexa: control del hogar y compras por voz.  

3. **Mantenimiento predictivo**  
   - Predice fallas industriales con sensores + IA.  
   - Técnicas: vibraciones, temperatura, modelos ML/DL, gemelos digitales.  
   - Ejemplos:  
     - GE (turbinas y motores)  
     - Siemens (plantas de manufactura)  
     - Bosch (producción industrial)  

4. **Visión por computadora**  
   - Permite a máquinas interpretar imágenes y videos.  
   - Técnicas:  
     - CNN (redes convolucionales)  
     - Modelos en tiempo real (YOLO, SSD, Faster R-CNN)  
     - Reconocimiento facial  
     - Segmentación semántica  
   - Ejemplos:  
     - Facebook/Meta (etiquetado de fotos)  
     - Tesla (detección de objetos en conducción)  
     - Google Photos (organización automática de imágenes)  

Se realizó un ejemplo demostrativo aplicando visión por computadora con Google Colab, mostrando cómo escribir código repartido en celdas. Se entrenó una red neuronal que identifica imágenes, por ejemplo un perrito, mostrando cómo se ingresa la imagen y cómo se obtiene el resultado.

---

## Aspectos éticos

**SLOP:** desperdicio o basura digital generada por imágenes de IA; a veces ya no se distingue lo real de lo artificial.

---

## Datos y sociedad

- La sociedad es **parcialmente artificial**, construida mediante sistemas sociales y técnicos.  
- Así como diseñamos artefactos, también podemos **diseñar estructuras sociales**.  
- La manipulación de la información (selección de datos, construcción de algoritmos) impacta directamente en la vida social.  
- Los datasets son parte de esta infraestructura social, **no son neutrales**, y un dataset sesgado genera tecnologías que reproducen desigualdades.  
- Los datasets en IA funcionan como **sociotécnicas invisibles**, influyendo en decisiones.

---

## Sesgos en los datos

- Los datos sintéticos son información generada artificialmente mediante algoritmos (por ejemplo, modelos de machine learning o simulaciones) que imitan características estadísticas de datos reales.  
- Si los datos históricos están sesgados, el modelo replicará esos sesgos.  
- Los resultados pueden parecer objetivos, pero reflejan desigualdades sociales previas.  

### Situaciones donde se usan datos sintéticos
- Los datos reales son escasos o difíciles de recolectar.  
- Se busca proteger la privacidad (anonimización).  
- Se quieren balancear datasets con clases poco representadas.  

### Beneficios
- **Privacidad**: protege la información sensible.  

### Desventajas
- Puede ser **poco realista** a veces.  

### Tipos de sesgos
- **Género**  
- **Raza / rasgos étnicos**  

- Las IA aprenden desde datos reales.  
- Las redes neuronales siempre aprenden y aumentan su base de datos.  
- Privacidad: es importante entender qué pasa con nuestros datos cuando los sistemas usan información personal.  
- Derechos: saber, consentir, rectificar, eliminar datos y transparencia sobre su uso.

---

## IA responsable

Para que los sistemas de IA sean aceptables socialmente:  
- **Explicabilidad:** usuarios y reguladores pueden entender por qué el modelo dio un resultado.  
- **Justicia (Fairness):** el sistema trata de forma equitativa a distintos grupos, sin discriminaciones implícitas.  

### Técnicas para IA justa
- Recolección de datos balanceados: asegurar que todos los subgrupos estén representados.  
- Reponderación y muestreo (ej. SMOTE): equilibrar clases desproporcionadas.  
- Preprocesamiento y limpieza de datos: eliminar variables sensibles (género, raza, edad).  
- Entrenamiento contrafactual: modificar características sensibles para reducir impacto.  
- Auditorías de equidad: evaluar métricas de justicia después del entrenamiento.  
- Penalizaciones en la función de pérdida: ajustar el modelo para que no favorezca sistemáticamente a un grupo.

---

## Empresas que usan IA

- **Amazon**  
- **Zoom:** filtros que inicialmente funcionaban mal con pieles oscuras o rasgos diferentes a los latinos/blancos.  
- Solución: seguimiento y entrenamiento correcto de las IA con datos diversos.

---

## Áreas laborales

**Data Scientist**  
- Analiza datos y construye modelos para generar valor.  
- Tareas: limpieza y preparación, análisis estadístico, selección de variables, entrenamiento.  
- Ámbitos: salud, finanzas, e-commerce, transporte.  
- Habilidades: matemáticas/estadística, Python/R, bases de datos y visualización.

**ML Engineer**  
- Pone los modelos en producción a escala.  
- Tareas: optimización, APIs, integración, despliegue, monitoreo, MLOps.  
- Ámbitos: tech y corporaciones con predicción en tiempo real (recomendadores, búsqueda, fraude).  
- Habilidades: programación avanzada, ingeniería de software, nube (AWS/GCP/Azure), DevOps.

**AI Researcher**  
- Crea nuevas técnicas y arquitecturas de IA.  
- Tareas: experimentación (deep/reinforcement learning), publicaciones, trabajo de laboratorio.  
- Ámbitos: laboratorios y universidades; aplicaciones de frontera (autonomía, medicina personalizada).  
- Habilidades: matemáticas avanzadas, teoría de la computación, enfoque científico.


### Grupo 4  
### Tema: Bases de datos y Big Data

# Introducción

Una **base de datos** es un repositorio digital para almacenar, gestionar y proteger colecciones organizadas de datos. Los diferentes tipos de bases de datos almacenan información de distintas maneras.  

Las organizaciones utilizan estos diferentes tipos de bases de datos para gestionar diversos tipos de datos:  
- Las **bases de datos relacionales** sobresalen con datos estructurados, como registros financieros.  
- Las **bases de datos no relacionales** son mejores para tipos de datos no estructurados, como archivos de texto, audio y video.  

La importancia de las bases de datos radica en que las compañías poseen grandes cantidades de datos, a menudo medidos en **petabytes** o incluso cuatrillones de bits. Estos datos incluyen:  
- Transacciones de clientes  
- Inventario de productos  
- Procesos internos  
- Investigación patentada  

Por lo tanto, los datos deben organizarse en una **arquitectura de datos coherente** para que los usuarios y las aplicaciones puedan acceder a ellos cuando los necesiten.

---

## Sin bases de datos

Sin bases de datos, los datos se almacenarían en **archivos sueltos**, lo que genera varios problemas:  
- Dificultad para localizar información.  
- Problemas para actualizar y compartir datos de manera eficiente.  
- Seguridad comprometida, al no poder hacer seguimiento constante.  
- Mayor tiempo requerido para resolver problemas y mantener la información consistente.  


# Bases de datos

## Bases de datos relacionales
- Tienen un esquema definido y valores estructurados que permiten hacer **consultas estructuradas** (SQL).  
- Se pueden usar **llaves primarias** y **llaves foráneas** para relacionar tablas.  
- Ideales para datos bien organizados y consistentes.

## Bases de datos no relacionales (NoSQL)
- La naturaleza de los datos puede cambiar y no siempre calzan en un esquema fijo.  
- **No tienen un esquema estructurado** predefinido, lo que permite mayor flexibilidad.  
- Tipos principales:  
  - **Document Store:** almacena documentos JSON o XML (ej. MongoDB).  
  - **Key-Value Store:** almacena pares clave-valor (ej. Redis).  
  - **Wide Column Store:** almacena columnas agrupadas para grandes volúmenes de datos (ej. Cassandra).  
  - **Graph Store:** almacena relaciones entre nodos (ej. Neo4j).

---

## Cómo han cambiado los datos

Los datos actuales presentan las **3 V**:

1. **Volumen:** cantidad de datos generados es enorme.  
2. **Velocidad:** la rapidez con la que los datos se generan y se procesan.  
3. **Variedad:** tipos de datos distintos (estructurados, no estructurados, multimedia, sensores, logs, etc.).

### Qué significan las 3 V
- **Volumen:** grandes cantidades de datos que requieren sistemas especializados.  
- **Velocidad:** procesamiento casi en tiempo real para tomar decisiones rápidas.  
- **Variedad:** integración de datos diversos de múltiples fuentes.

---

## Proceso tradicional vs Big Data

**Proceso tradicional:**  
- Datos almacenados en bases de datos relacionales.  
- Procesamiento centralizado.  
- Limitado a volúmenes y tipos de datos manejables.

**Big Data:**  
- Se refiere a la gestión y análisis de grandes volúmenes de datos distribuidos.  
- Implica **segmentación de datos** y procesamiento en **múltiples computadoras (nodos)** con un **nodo controlador** que coordina la operación.  
- Permite analizar altos volúmenes de datos de manera eficiente y escalar horizontalmente.  
- Se utilizan frameworks como **Hadoop** o **Spark** para procesamiento distribuido.

# Demostración de actividad - Demostración de Apache Spark

El compañero realizó una presentación de un demo utilizando **Apache Spark**, un **framework** que permite trabajar con grandes volúmenes de datos de manera distribuida y paralela.

## Lenguaje utilizado
- **Python** mediante **PySpark**, la API de Spark para Python.  

## Conceptos clave

### RDD (Resilient Distributed Dataset)
- Spark trabaja con **RDD**, que significa **Conjunto de Datos Distribuido y Resiliente**.  
- Es la unidad básica de datos en Spark, distribuida a través de varios nodos, que permite **procesamiento paralelo** y tolerancia a fallos.  

### Paralelización
- La **paralelización** significa que las operaciones sobre los datos se ejecutan simultáneamente en múltiples nodos o procesadores, acelerando el procesamiento de grandes volúmenes de información.  

### Operaciones en PySpark
PySpark permite realizar operaciones sobre RDD y DataFrames, como:  
- **Modificar valores**  
- **Filtrar información**  
- **Transformar datos**  
- **Realizar agregaciones y cálculos complejos**  

---

## Transformaciones y acciones en un RDD

- **Transformaciones:** crean un nuevo RDD a partir de uno existente sin ejecutar el cálculo inmediatamente. Ejemplos:  
  - `map()` → aplica una función a cada elemento.  
  - `filter()` → filtra elementos según una condición.  
  - `flatMap()` → aplana estructuras anidadas.  

- **Acciones:** ejecutan operaciones que devuelven un resultado final al controlador o escriben datos en almacenamiento externo. Ejemplos:  
  - `collect()` → devuelve todos los elementos al nodo principal.  
  - `count()` → cuenta el número de elementos.  
  - `take(n)` → devuelve los primeros n elementos.  

---

## DataFrames en Spark

- Un **DataFrame** trabaja con **datos estructurados** (tablas con columnas y tipos de datos definidos).  
- Es similar a una hoja de cálculo o una tabla SQL.  
- Permite consultas más expresivas y optimizaciones automáticas mediante **Catalyst Optimizer**.  

### Carga de datos
- Se pueden cargar datos desde distintos formatos, por ejemplo:  
  - **CSV** (`spark.read.csv("archivo.csv")`)  
  - JSON, Parquet, ORC  
  - Bases de datos externas (JDBC)  

- Los DataFrames permiten aplicar transformaciones y acciones de manera más intuitiva que los RDD tradicionales.

# Casos de uso

## Medicina
- Ejemplo: **EDUS** (Expediente Digital Único en Salud), que utiliza **datos personales** de los pacientes para mejorar diagnósticos, tratamientos y seguimiento clínico.

## Netflix
Netflix utiliza datos de los usuarios para ofrecer recomendaciones personalizadas. Entre los factores que analiza están:  
- Actividad de otros miembros con gustos y preferencias similares a los tuyos.  
- Información sobre los títulos, como género, categorías, actores, año de lanzamiento, etc.  
- Hora del día en que accedes a Netflix.  
- Idiomas preferidos.  
- Dispositivos desde los que accedes a Netflix.  
- Tiempo dedicado a cada título.

## Amazon
Amazon aplica **análisis predictivo** para mejorar la experiencia del usuario y optimizar ventas:  
- Análisis de historiales de compra.  
- Likes y preferencias de los compradores.  
- Productos agregados al carrito de compras.

---

## Panorama general

En **Bases de Datos y Big Data** se busca combinar los ecosistemas de **gestión de datos** y el **procesamiento a gran escala**.  

Es importante entender que las **bases de datos OLTP** (Online Transaction Processing) son la base de la operación:  
- Permiten guardar y leer todo tipo de información (pagos, pedidos, conexiones de usuarios) con **baja latencia**.  
- Esto hace que la recolección de información sea eficiente y confiable.  

Por su parte, **Big Data** procesa los grandes volúmenes almacenados en las bases de datos para:  
- Generar análisis y reportes.  
- Construir modelos predictivos.  
- Escalar horizontalmente y obtener resultados de manera eficiente.  

# Bases de Datos

## Bases de datos relacionales

### MySQL
- Es un sistema de gestión de bases de datos relacional (RDBMS) de código abierto.  
- Popular por su facilidad de uso, fiabilidad y soporte amplio en aplicaciones web.  
- Soporta transacciones, integridad referencial y consultas SQL complejas.

### PostgreSQL
- Es una base de datos relacional de código abierto con gran reputación por su **fiabilidad, flexibilidad y adhesión a estándares**.  
- Admite tipos de datos relacionales y no relacionales (JSON/JSONB) dentro del mismo motor.  
- Ideal para aplicaciones que requieren integridad de datos y análisis complejos.

---

## Bases de datos no relacionales (NoSQL)

### MongoDB
- Sistema de gestión de bases de datos **NoSQL** de código abierto.  
- Utiliza documentos en formato **BSON** (tipo JSON) en lugar de tablas y filas.  
- Modelo flexible que facilita almacenar y consultar datos variados.  
- Escalable en múltiples entornos y adecuado para datos semi-estructurados.

### Cassandra
- Base de datos **NoSQL** de código abierto creada para gestionar grandes volúmenes de datos distribuidos en múltiples centros de datos.  
- Prioriza **escalabilidad** y **alta disponibilidad** sin un punto único de falla.  
- Arquitectura distribuida permite crecer horizontalmente añadiendo nodos, manteniendo el servicio operativo incluso ante fallos de hardware o redes.

---

## Áreas laborales en bases de datos

### DBA (Database Administrator)
- Responsable de la **seguridad** y el **mantenimiento** de las operaciones de la base de datos.  
- Garantiza que la información se almacene y recupere correctamente.  
- Colabora con los desarrolladores para **diseñar e implementar nuevas soluciones**.

### Data Engineer
- Profesional encargado de **extraer, depurar y preparar** los datos para su posterior tratamiento.  
- Funciones:  
  - Extraer grandes volúmenes de datos.  
  - Depurar y clasificar la información.  
  - Asegurar la calidad y consistencia de los datos para análisis y modelos de ML.

### Arquitecto de datos
- Diseña y supervisa la **arquitectura general de los datos** en una organización.  
- Funciones:  
  - Definir cómo se almacenan, integran y gestionan los datos.  
  - Establecer estándares de calidad, seguridad y gobernanza de datos.  
  - Seleccionar tecnologías adecuadas (bases de datos relacionales, NoSQL, Big Data).  
  - Asegurar que los sistemas de datos soporten las necesidades de negocio y escalabilidad.

