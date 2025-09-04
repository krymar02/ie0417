# Metodologías de Desarrollo de Software

## Semana 3 — Lectura de artículo
**Tema:** Metodologías de desarrollo de software: tipos, criterios de selección y estadísticas  

---

## 1. Resumen general  

**¿Qué es una metodología de desarrollo de software?**  
Es un marco que se utiliza para estructurar, planificar y gestionar el proceso de desarrollo de software.  

**¿Cuál es su propósito fundamental?**  
Garantizar la entrega del software conforme a las especificaciones del proyecto, dentro del plazo y el presupuesto, y minimizando los riesgos del proyecto.  

---

## 2. Principales enfoques  

### 2.1 Metodologías secuenciales  
Estas dividen el ciclo de desarrollo de software en fases consecutivas e independientes. Priorizan la recopilación de requisitos detallados del proyecto, la planificación de todo el proceso de desarrollo y el establecimiento de los entregables para cada fase antes de comenzar el desarrollo.  

**Ventajas y Desventajas:**  

| Ventajas | Desventajas |
|----------|-------------|
| Facilita el seguimiento de las etapas del proyecto | La recopilación exhaustiva de requisitos conduce a una fase de descubrimiento prolongada |
| Los requisitos de proyecto estables permiten a los desarrolladores concentrarse mejor en los objetivos | Las partes interesadas participan principalmente al comienzo, lo que puede generar menor satisfacción del usuario final |
| Alcance claro del proyecto y cronograma | Proceso inflexible |
| La documentación detallada facilita el mantenimiento del software | Abordar los requisitos cambiantes es un desafío |

**Tipos de metodologías secuenciales:**  

- **Cascada:** Sigue un flujo de trabajo lineal, que progresa de arriba a abajo a través de varias etapas centradas en objetivos específicos. Una vez iniciado el proceso de desarrollo, no se permiten extensiones ni modificaciones al alcance del proyecto, por lo que todos los requisitos deben obtenerse durante la fase de planificación.  
  - Adecuado para:  
    - Proyectos con requisitos y objetivos bien definidos e inmutables  
    - Proyectos donde el control del cronograma y el presupuesto son fundamentales  

- **Modelo V:** Es una extensión de la metodología Cascada que prioriza las pruebas en paralelo al proceso de desarrollo. Cada fase de desarrollo posterior solo puede comenzar después de las pruebas de la etapa anterior, lo que reduce la probabilidad de defectos y errores en el producto final y garantiza una alta calidad del software.  
  - Adecuado para:  
    - Proyectos que pueden utilizar Waterfall pero exigen mayores niveles de calidad y confiabilidad  

- **RAD (Desarrollo Rápido de Aplicaciones):** Ciclos cortos, prototipos, pruebas tempranas y reutilización de componentes.  
  - Adecuado para:
      - Requisitos identificables de antemano y sistemas modularizables.  

- **Espiral:** Ciclos con gestión de riesgos en cada iteración.  
  - Adecuado para:
    - Proyectos grandes/complejos con incertidumbre y cambios.  

- **Incremental:** Entrega por incrementos funcionales desde el primer despliegue.  
  - Adecuado para:
    - Necesidad de salir pronto al mercado y modularidad.  

---

### 2.2 Metodologías ágiles  
Se caracterizan por un ciclo de vida de desarrollo de software flexible, equipos multifuncionales estrechamente integrados, iteraciones rápidas, pruebas continuas y técnicas colaborativas.  

**Por qué han ganado tanta popularidad:**  
Basadas en el Manifiesto Ágil (2001), promueven adaptabilidad, colaboración y entregas rápidas.  

**Tipos:**  
- Scrum: Trabajo en sprints (2–4 semanas), reuniones diarias, revisiones y retrospectivas.  
- Kanban: Visualización de tareas en tableros, gestión de flujo continuo.  
- Scrumban, LeSS, SAFe, XP, Lean, DSDM, FDD: enfoques que amplían Agile a distintos contextos y escalas.  

**Datos de adopción:**  
Según el 17.º Informe de Agile de Digital.ai, 71 % de las empresas utilizan Agile. Además, estudios muestran que los proyectos ágiles tienen 3 veces más probabilidad de éxito frente a Waterfall.  

**Ventajas y Desventajas:**  

| Ventajas | Desventajas |
|----------|-------------|
| Flexibilidad | Documentación reducida |
| Entregas frecuentes | Difícil estimación de plazos |
| Mayor satisfacción del cliente | Requiere alta disciplina |

---

## 3. Criterios para elegir una metodología  

Para encontrar el enfoque más adecuado, las empresas deben considerar diversos criterios, así como las ventajas y desventajas de cada metodología. Buscar la orientación de asesores expertos que conozcan a fondo las fortalezas y debilidades de cada metodología es otra opción que puede ayudar a las organizaciones a establecer un proceso de desarrollo de software fluido.  

---

## 4. Tendencias recientes y observaciones clave  

- Enfoques híbridos: Combinación de Agile + DevOps, muy usada en empresas grandes (42 % de los equipos reportan uso de modelos mixtos).  
- Adopción de DevOps: Mercado de $10,74 mil millones (2023), proyectado a $29,43 mil millones en 2029.  
- Industrias reguladas: Aún dependen de modelos secuenciales por su rigidez y trazabilidad.  
- Avances tecnológicos: IA, gemelos digitales y simulaciones permiten aplicar Agile en sectores antes dominados por cascada.  

---

## 5. Cuadro comparativo  

| Aspecto | Secuencial | Ágil |
|---------|------------|------|
| Objetivos | Valor para el cliente al final del proyecto | Valor rápido para el cliente |
| Ciclo de vida del desarrollo | Lineal | Cíclico |
| Organización del trabajo | En fases largas | En iteraciones cortas |
| Planificación | Al inicio del proyecto | A lo largo del ciclo de vida del proyecto |
| Atributos del equipo | Asignación estricta de roles | Conocimiento y colaboración |
| Participación del cliente | Al inicio del proyecto para la obtención de requisitos | A lo largo del proyecto |
| Requisitos | Determinado al principio | Evolutivo y cambiante |
| Documentación | Detallada para cada paso | Mínima, solo lo necesario |
| Comunicación | Planes detallados e informes de progreso | Interacciones frecuentes |

---

## 6. Opinión breve personal  

Después de leer un poco acerca de las metodologías, considero que si es para una aplicación, una metodología agile (Scrum o Kanban) sería lo más adecuado, porque se pueden ajustar cambios rápidamente, del usuario y hacer versiones en plazos más cortos, ya que permite responder rápido a cambios de los usuarios y lanzar versiones frecuentes. Luego, si es para un banco, un modelo híbrido podría ser mejor para combinar seguridad, calidad y entregas rápidas y confiables. Por último, para el software educativo podría usarse un enfoque incremental para trabajar poco a poco con estudiantes o profesores según sea el caso. Entonces pienso que depende de la situación se debe analizar cuál método se ajusta mejor a las necesidades del cliente.  
