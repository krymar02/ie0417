# Semana 2 Clase 2, 21 de agosto  
## Grupo 2 – Empresa: Apple  

---

## 1. Metodologías de desarrollo y diseño  

A diferencia de otras Big Tech, Apple combina métodos tradicionales de planificación estricta con prácticas modernas como DevOps y Agile, adaptándose a su cultura de control, excelencia y calidad.  

### a) ¿Usan Agile, Scrum, Kanban, DevOps, o enfoques propios?  

- **Stage-Gate (propio):**  
  Modelo muy planificado en etapas, con decisiones centralizadas, ideal para mantener calidad y confidencialidad.  
  A diferencia de Agile/Scrum (iterativo), Apple prioriza ejecución casi sin margen de error antes del lanzamiento.  

- **DevOps (CI/CD):**  
  Uso de integración y entrega continua para probar y desplegar software a gran escala.  
  Ejemplos:  
  - Compra de **BuddyBuild** e integración en Xcode.  
  - Uso de **TestFlight** para despliegue beta.  
  - Automatización de pruebas y CI/CD para mantener calidad.  

- **Agile parcial:**  
  En algunos equipos (ej. Apple Online Store) aplican **Scrum y Jira** para proyectos grandes.  

- **Híbrido:**  
  Combinan lo mejor de **Waterfall** (fechas de lanzamiento fijo) con **iteraciones internas** de prueba y mejora.  

---

### b) ¿Cómo escalan estas metodologías en proyectos con miles de desarrolladores?  

- **Control centralizado y artefactos compartidos:**  
  El Stage-Gate permite escalar gracias al control ejecutivo, planificación adelantada y documentos compartidos.  

- **CI/CD y automatización robusta:**  
  Herramientas internas como BuddyBuild permiten a muchos equipos integrarse, probar y desplegar sin cuellos de botella.  

- **Estructuras Agile en áreas específicas:**  
  Equipos como Apple Online Store usan Scrum y Jira a gran escala.  
  Existen cargos como *Agile Engineering Program Manager* para coordinar múltiples equipos.  

- **Cultura híbrida y flexibilidad:**  
  Se combinan fechas fijas con iteraciones internas, adaptándose a cambios en grandes estructuras.  

---

## 2. Principios de diseño de software  

### 2.1 Principios de Arquitectura  

1. **Modularidad:** software dividido en módulos independientes para cambios sin afectar al resto.  
2. **Control de interfaces (APIs):** Apple decide qué funciones se exponen a terceros, protegiendo seguridad y rendimiento.  
3. **Integración con el hardware:** desarrollo de hardware y software propio, optimización máxima en su ecosistema.  
4. **Simplicidad para el usuario:** diseño uniforme, intuitivo y simple para el usuario final.  

### 2.2 Ejemplos de impacto en productos clave  

- **iOS en iPhone:** modularidad permite actualizar partes como cámara sin afectar otros módulos; integración con chips propios mejora rendimiento.  
- **macOS en Mac:** hardware + software propios optimizan el desempeño frente a fabricantes externos.  
- **App Store y seguridad:** control estricto de APIs y revisión de apps evita malware y protege al usuario.  

---

## 3. Herramientas y ecosistemas internos  

### a) Frameworks o herramientas que se volvieron estándar  

- **WebKit:** motor de navegador usado en Safari y apps en iOS.  
- **LLVM/Clang:** compilador moderno usado globalmente en C/C++/Obj-C.  
- **Swift:** lenguaje creado por Apple, open source desde 2015, hoy usado en múltiples plataformas.  
- **OpenCL:** lenguaje abierto para programación paralela.  
- **Multipath TCP:** permite usar varias conexiones de red a la vez en un dispositivo.  
- **HTTP Live Streaming (HLS):** protocolo de streaming adaptativo, usado globalmente.  

### b) ¿Cómo diseñan software para millones de usuarios concurrentes?  

- **Integración vertical y almacenamiento distribuido.**  
- **SwiftNIO y HLS:** optimizan latencia y rendimiento en servicios globales.  
- **FoundationDB + Record Layer:** almacenamiento de datos a gran escala.  
- **CloudKit:** sincronización de iCloud.  
- **Privacidad:** iCloud Private Relay garantiza seguridad con baja latencia.  
- **Protocolos modernos:** APNs con HTTP/2, HTTP/3/QUIC para notificaciones y streaming eficiente.  
- **Metal:** framework de gráficas y cómputo optimizado para GPU.  

---

## 4. Cultura de ingeniería  

### a) Organización del trabajo de los ingenieros  

- Modelo **funcional**, organizado por especialización (software, hardware, diseño) y no por producto.  
- Equipos pequeños, especializados y con roles bien definidos.  
- **Cultura de secreto:** cada equipo conoce solo su parte del proyecto (*need-to-know*).  
- Decisiones revisadas centralmente para asegurar consistencia.  

### b) Valores en el diseño de software  

- **Simplicidad:** ocultar complejidad al usuario.  
- **Rendimiento:** optimización para hardware propio (chips Apple Silicon).  
- **Seguridad y privacidad:** sandboxing, cifrado, control estricto en App Store.  
- **Escalabilidad y consistencia:** APIs y frameworks diseñados para integrarse en todo el ecosistema.  

---

## 5. Impacto en la industria  

### a) Prácticas o herramientas originadas en Apple y usadas globalmente  

- **Ecosistemas integrados:** integración de dispositivos y servicios (ej. iPod + iTunes en 2001) inspiró el modelo de servicios digitales actual.  
- **Swift:** lenguaje moderno, open source, usado incluso en servidores y educación (Swift Playgrounds).  
- **App Store:** modelo de tienda digital que inspiró a Google Play, Xbox Store, Microsoft Store, etc.  

---

