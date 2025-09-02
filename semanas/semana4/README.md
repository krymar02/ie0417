# Semana 4 - Clase 1  
**Fecha:** 1 de septiembre  

## Apuntes de la clase parte 2 

### Proceso de desarrollo de Software - Sistemas de control de versiones  

**Objetivos**  
1. Comprender qué es un sistema de control de versiones (VCS) y su importancia en el desarrollo de software.  
2. Distinguir entre control de versiones centralizado y distribuido.  
3. Introducir Git como VCS distribuido y GitHub como plataforma colaborativa.

**Preguntas clave**  
- ¿Qué pasa cuando varias personas editan el mismo archivo?  
- ¿Cómo saber qué versión es la correcta?  
- ¿Cómo recuperar una versión anterior si algo sale mal?  
- ¿Cómo colaborar sin sobrescribir el trabajo de otros?

Ejemplo de caos sin VCS:  
- proyecto_final.docx
- proyecto_final_v2.docx
- proyecto_final_v2_borrador_Juan.docx
- proyecto_final_final_maria_OK.docx

---
### Notas
- Cuando hay un sistema de control de versiones, se evita la mala practica de poner un .pdf (Solo si es extrictamente necesario, por ejemplo que se agregara en SLA service level agreement)
- "Rollback"---> devolverse a una versión mas estable. O para corregir un error.
- En un proyecto grande no se puede hacer git push.
---
### ¿Qué es un sistema de control de versiones?  

Un VCS es una herramienta que permite **registrar, organizar y gestionar los cambios** realizados sobre el código fuente (u otros archivos) a lo largo del tiempo.  

**Beneficios principales:**  
- Historial de cambios: qué, cuándo y quién modificó.  
- Recuperación de versiones anteriores.  
- Trabajo en equipo sin conflictos.  
- Seguimiento del progreso.  
- Pruebas seguras para nuevas ideas.  

---
### Notas
- Staging ---> es una fase del desarrollo web en la que se crea una copia exacta de tu sitio para hacer pruebas antes de aplicar cambios en el sitio real. 
- "dummy" ---> commit sirven como para rellenar.
---

### Tipos de sistemas de control de versiones  

**Control de versiones centralizado (CVCS):**  
- Servidor central con el historial completo.  
- Los usuarios descargan/copias desde ese servidor.  
- Requiere conexión para la mayoría de operaciones.  
- Ejemplo: **Subversion (SVN)**.  

**Control de versiones distribuido (DVCS):**  
- Cada desarrollador tiene una copia completa del repositorio.  
- Se puede trabajar sin conexión.  
- Más robusto ante fallos.  
- Ejemplo: **Git**.  

---
### Notas
- Todo vive en un servidor central, para modificarlo hay que descargar todo.
- Por ejemplo si git se cae no se pueden subir cambios.
- Centralizado seria clonar un repo pero no se hacen cambios, solo el servidor puede. No existe lo de hacer cambios locales.
---
### Git  

**¿Qué es Git?**  
- Sistema de control de versiones distribuido.  
- Creado por Linus Torvalds en 2005.  
- Maneja proyectos grandes con eficiencia, seguridad y velocidad.  

**¿Por qué es popular?**  
- Rápido y eficiente.  
- Distribuido.  
- Flexible para distintos flujos de trabajo.  
- Seguro (SHA-1).  
- Gran comunidad y ecosistema (GitHub, GitLab, Bitbucket).  
---
### Notas
- Cuando se realiza un commit se genera un código alfa numerico, si por ejemplo tengo c1----> c2, se genera una reaccion en cadena.
- "Hash"---> es un identificador de cada commit.
- Git usa 40 caracteres para crear su SHA-1. SHA es un identificador.
- Por ejemplo Kryssia Martinez 0646bf4d6b0662fba5b174cac05997e1, Kryssia Martinez. 1d62c24a0bdc2c29149ddfb5a6290dbc
  
---

### GitHub  

**¿Qué es?**  
Plataforma web para alojar repositorios Git y colaborar de forma remota.  

**Funciones principales:**  
- Almacenar y compartir código.  
- Pull requests, issues, branches, reviews.  
- Control de acceso y permisos.  
- CI/CD con GitHub Actions.  

**Ejemplos de uso:**  
- Proyectos open source.  
- Equipos de desarrollo.  
- Portafolios de estudiantes.  

---
### Notas
- Git es un programa de sistema de control de versiones (ejemplos git commit, git bash) Github es la plataforma que uno abre en google.
- CLI ---> Command line interface.
- Workspace ---> Espacio de trabajo
- Git log Muestra el historial de cambios en la compu, cuando se hace commit se sube a local pero nadie lo ha visto en remoto.
- Si se hizo un git add sin querer al staging me puedo devolver con git reset.
- Para branches se recomiendan el git push y git fetch.
  *Revisar la imagen de los conceptos*  
---

### Documentación en proyectos de software  

**Problemas comunes sin documentación:**  
- No se entiende el código.  
- Dificultad para configurar.  
- Complejidad para modificar.  

**Motivaciones para documentar:**  
- Facilita mantenimiento y evolución.  
- Mejora la comunicación en el equipo.  
- Acelera incorporación de nuevos devs.  
- Ayuda a usuarios/clientes.  

*"Un software sin documentación es un rompecabezas sin imagen de referencia."*  

---

### Tipos de documentación  

- **Para desarrolladores:** comentarios, arquitectura, guías de estilo, API docs.  
- **Para usuarios finales:** manuales, guías de instalación, tutoriales.  
- **Para operadores/soporte:** despliegue, respaldo, monitoreo.  
- **De gestión:** requisitos, especificaciones, plan de pruebas.  

---
### Notas
- "Hook" ---> El hook useState es el que nos permite agregarle un estado local a un componente funcional y cambiar ese estado.
- La documentacion no es opcional.
---

### Buenas prácticas al documentar  

- Documentar mientras se desarrolla.  
- Ser claro, conciso y consistente.  
- Mantener actualizado.  
- Usar herramientas automatizadas.  
- Organizar según audiencia y tipo.  

 *"La documentación no es opcional, es parte del software."*  

---

### Herramientas de documentación automática  

**Características:**  
- Generan docs desde el código.  
- Reducen trabajo manual.  
- Aumentan consistencia.  
- Formatos: HTML, PDF, etc.  

**Herramientas populares:**  
- **Doxygen** (C, C++, Java, Python).  
- **Sphinx** (Python, extensible).  

---
### Notas
- Doxyfile ---> como parte de Doxygen
---
### Doxygen  

- Extrae información de comentarios en el código.  
- Soporta HTML, LaTeX, man pages.  
- Diagramas de clases (Graphviz).  
- Ideal para proyectos grandes.  

---

### Sphinx  

- Creado para Python.  
- Usa reStructuredText o Markdown.  
- Genera HTML, PDF, EPUB.  
- Compatible con *Read the Docs* y GitHub Pages.  

---

### Conclusiones  

- La documentación es esencial para la mantenibilidad y colaboración.  
- Existen distintos tipos de documentación según el público.  
- Herramientas como Doxygen y Sphinx ayudan a mantener docs técnicas actualizadas.  
- Lo recomendable: documentar desde el inicio, usar buenas prácticas y publicar online.  
