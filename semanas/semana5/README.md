# Apuntes Semana 5 Clase 1  
 Lunes 8 de Septiembre  

## Tema: Casos de uso y requerimientos de software  


## ¿Por qué necesitamos modelar requerimientos?

Situación común:
- Se construye un sistema funcional... pero no es lo que el cliente esperaba.
- El equipo de desarrollo malinterpretó o ignoró una necesidad clave.
- Se gastan recursos en funcionalidades que no aportan valor.

Problemas típicos cuando no se modelan bien los requerimientos:
- **Ambigüedad**: diferentes interpretaciones para una misma frase.
- **Omisión**: se asume que algo es “obvio”.
- **Inconsistencia**: requisitos que se contradicen entre sí.
- **Cambios descontrolados**: requisitos que se modifican sin seguimiento.

 *“¿Diseñarías un edificio sin planos? El software también necesita una base sólida antes de escribir una sola línea de código.”*  
---
## Notas 
- Modelar equerimientos es necesario por si el proyecto rota a alguien más, ya que hay varios programadores. 
- si no hay una guia definida de lo que se quiere lograr habrá errores.
- Gap Analysis (Analisis de brecha) ----> Comparo, se saca la brecha y se compara.
- Hay personas que solo se dedican a eso, a realizar modelar requerimientos (tratar con el cliente).
---

## Tipos de requerimientos de software

### Requerimientos funcionales
Describen lo que el sistema debe hacer.  
Ejemplos:
- Permitir al usuario autenticarse con usuario/contraseña.
- Generar reportes mensuales en PDF.

### Requerimientos no funcionales
Describen **cómo** debe comportarse el sistema.  
Ejemplos:
- El sistema debe estar disponible el **99.9% del tiempo**.
- Seguridad, rendimiento, usabilidad, mantenibilidad.

---
## Notas 
- En los funcionales y no funcionales se trata de que se hace y como se hace.
- Funcional por ejemplo un boton que queremos siempre a la izquierda en cualquier página y que diga x cosa.
- Uno no funcional el tiempo de respuesta de ese botón.
---

### Requerimientos técnicos
- Restricciones sobre arquitectura o tecnologías.
- Ejemplo: “Debe desarrollarse usando Django y PostgreSQL.”

### Requerimientos de interfaz
- Cómo interactúan sistemas entre sí (APIs, protocolos, estándares).
- Ejemplo: “El sistema debe ofrecer una API REST.”

### Requerimientos del dominio
- Propios de la industria o entorno específico.
- Ejemplo: “Los intereses se deben calcular según el reglamento financiero X.”

---
## Notas 
- Ejemplo tecnico, quiero que la app me pida usuario y contraseña.
- Netfix usa micro servicios.
  
---

## Ciclo de vida de los requerimientos

1. **Elicitación**  
   - Descubrir qué se necesita realmente.  
   - Técnicas: entrevistas, cuestionarios, prototipos, historias de usuario, shadowing.  

2. **Análisis**  
   - Identificar ambigüedades, redundancias, conflictos.  
   - Clasificar y priorizar.  

3. **Especificación**  
   - Redacción clara, completa y verificable.  
   - Formatos: texto estructurado, tablas, casos de uso, historias de usuario.  

4. **Validación**  
   - Asegurar que representan lo que el cliente quiere.  
   - Técnicas: revisiones, walkthroughs, prototipos.  

5. **Gestión de cambios**  
   - Control del impacto de requisitos nuevos o modificados.  
   - Herramientas: Git, JIRA, Trello, Azure DevOps.
     
---
## Notas 
- "Stake holder" ---> interesados en el proyecto
- Elicitacion ---> se emtrevista a la persona para saber que necesita o que ocupa que se cubra en el requerimiento.
- certificacion basada en testing ---> ISTQB ---->  quie es verificar, probar, testear, error inminente.
- MVP ---> producto minimo viable.
- Huli ----> app para buscar especialistas medicos.
---


## Técnicas de elicitud de requerimientos

- **Entrevistas** (estructuradas o libres).  
- **Talleres colaborativos** (workshops).  
- **Observación directa** (ver al usuario en acción).  
- **Cuestionarios o encuestas**.  
- **Prototipos o mockups**.  
- **Análisis de documentos existentes**.  

Lo mejor es usar **múltiples técnicas en combinación**.  


## Redacción efectiva de requerimientos

Un buen requerimiento debe ser:  
✔ Correcto: refleja una necesidad real.
✔ Claro: sin ambigüedades ni interpretaciones múltiples.
✔ Completo: contiene toda la información necesaria.
✔ Consistente: no entra en conflicto con otros requisitos.
✔ Verificable: se puede probar o demostrar su cumplimiento.
✔ Rastreable: puede relacionarse con objetivos, código o pruebas.


 Mal redactado: *“El sistema debe ser rápido.”*  
 Bien redactado: *“El sistema debe responder a las consultas en menos de 2 segundos en el 95% de los casos.”*  

Consejos:
- Usar verbos claros: *debe permitir, debe procesar, debe mostrar*.  
- Evitar palabras vagas: *rápido, fácil, intuitivo*.  
- Separar requerimientos individuales.  
- Incluir criterios de aceptación.  

---

## Casos de uso

### Definición
- Técnica para describir cómo los usuarios interactúan con el sistema para lograr un objetivo.  

### Elementos
- Actor  
- Caso de uso  
- Escenario principal  
- Flujos alternativos  
- Precondiciones y postcondiciones
---
## Notas 
- Use cases Una técnica para describir cómo los usuarios interactúan con el sistema para lograr un **objetivo específico**. En funcionales.
---


### Ejemplo: Registrar nuevo usuario
**Actor:** Usuario  
**Precondiciones:** No tener cuenta activa  
**Postcondiciones:** Usuario registrado, correo de verificación enviado  

**Flujo principal:**  
1. Usuario accede al formulario  
2. Ingresa nombre, correo y contraseña  
3. Presiona "Registrarse"  
4. El sistema valida y guarda datos  
5. Se envía correo de verificación  

**Flujos alternativos:**  
- Correo ya registrado → Mensaje de error  
- Contraseña débil → Sistema informa y usuario corrige  

---

## Relaciones entre casos de uso

1. **Include** → Comportamiento común obligatorio.  
   Ejemplo: "Autenticar usuario".  

2. **Extend** → Comportamiento opcional.  
   Ejemplo: "Aplicar cupón de descuento".  

3. **Generalización** → Herencia entre actores o casos.  
   Ejemplo: "Usuario" → "Cliente" y "Administrador".  

---

## Ejemplo: Diagrama de biblioteca
**Actores**: Usuario, Bibliotecario  
**Casos de uso**:  
- Buscar libro  
- Prestar libro  
- Devolver libro  
- Autenticar usuario (include)  
- Renovar préstamo (extend)  

---

## Actividad práctica en grupos

- grupos de 3 Labratorio 5.2

**Escenarios posibles:**
- Sistema de inscripción a cursos  
- Plataforma de pedidos de restaurante  
- App de hábitos saludables  
- Sistema de reservas médicas  

**Entregables:**
- Lista de requerimientos  
- 2 casos de uso detallados  
- Diagrama UML con include, extend y generalización  

