# Semana 7 - Clase 2 | 25 de septiembre  
## Laboratorio 7.2  
### Grupo 1  
### Tema: Desarrollo Web

---
## ¿Qué es el desarrollo web?

El desarrollo web es el proceso de crear sitios web o aplicaciones web que se ejecutan en internet. Abarca tanto el diseño de la interfaz visual (frontend) como la lógica del servidor y la gestión de datos (backend).

---

## Evolución del desarrollo web

- Web 1.0: Páginas estáticas, solo lectura.
- Web 2.0: Contenido dinámico e interacción con el usuario.
- Web 3.0: Web semántica, descentralización, inteligencia artificial.

---

## Roles principales en desarrollo web

- Frontend Developer  
- Backend Developer  
- Full Stack Developer

---

## Frontend

El frontend es la parte del sitio web que el usuario ve e interactúa directamente.

### Tecnologías principales:

- HTML – estructura del contenido
- CSS – diseño visual
- JavaScript – interactividad

### Ejemplos mostrados en clase:

Se visualizaron imágenes comparativas de páginas web para observar cómo influyen los estilos y estructuras en la presentación visual.

---

## Backend

El backend es el "cerebro" de la aplicación, donde ocurre la lógica, procesamiento de datos y comunicación con bases de datos.

### Conceptos clave:

- Seguridad en la gestión de datos del usuario
- Comunicación entre el servidor y el cliente
- Lógica de negocio y reglas de aplicación

### Lenguajes y Frameworks comunes:

- JavaScript  
  - Frameworks: Fastify, Express  
- Python  
  - Frameworks: Django, Flask  
- Java  
  - Frameworks: Spring, Jakarta EE  
- C#  
  - Frameworks: .NET Core, ASP.NET  
- PHP  
  - Frameworks: Laravel, Symfony  

---

## Casos de uso

### Ejemplo 1: E-commerce (Amazon.com)
- Compra y venta de servicios y bienes.
**Frontend:**

- Interfaz visual: catálogo de productos, buscador, filtros, reseñas, carrito de compras, formularios de pago.
- Tecnologías usadas: HTML, CSS, JavaScript, y frameworks modernos como React o Vue.
- Objetivo: brindar una experiencia rápida, intuitiva y adaptable (responsive design).

**Backend:**

- Gestión de inventarios, usuarios, pagos y pedidos.
- Conexión a bases de datos y servidores de pago.
- Seguridad: cifrado, autenticación, validación.

---

### Ejemplo 2: Redes Sociales (Facebook)

**Definición:**

Plataformas que permiten a los usuarios conectarse, compartir contenido y comunicarse en línea.

**Frontend:**

- Interfaz: timeline, notificaciones, formularios, perfiles.
- Elementos visuales y dinámicos que mejoran la interacción del usuario.

**Backend:**

- Gestión de usuarios, publicaciones, comentarios, mensajes.
- Almacenamiento y recuperación de datos.
- Seguridad de la información personal.

---

## Retos en el desarrollo web

- Escalabilidad: Preparar la aplicación para que funcione bien a medida que crecen los usuarios o los datos.
- Seguridad: Proteger los datos y las comunicaciones.
- Experiencia de Usuario (UX): Crear una experiencia intuitiva y agradable.
- Mantenimiento y evolución: Una app es un servicio de constante cambio. Actualizaciones sin afectar la escalabilidad, buenas prácticas de versiones y pruebas.
- Integracion de servicios externos: Pagos, autenticacion, seguiridad.
  
---

## Areas Laborales 
- Front-End:
  - Se encargan de generar UI/UX retencion de usuarios.
  - Contratados en empresas gramndes, en donde hay una distrinción de roles.
- Back-End:
  - Se encarga de desarollar y mantener sistemas que integran la funcionalidad web.
  - Se asegura que la transmisión de información se ejecute correctamente.
- Full Stack:
    -Se encarga de realizar las labores tanto de front end como back end.
    - Se asegura que cambios generados en la interfaz se integren correctamente.

## Código y demostraciones en clase

- Se mostraron distintos fragmentos de código para ilustrar cómo funciona la integración entre frontend y backend.
- Se utilizaron ejemplos como el carrito de compras para entender el flujo de datos.
- Se mostró una base de datos relacional y cómo se conecta con la aplicación web.
- Se ejemplificó cómo una API de pruebas permite simular datos, aunque se mencionó que fue un error en el ejemplo (según lo señalado por un compañero).

---

## Integración Frontend ↔ Backend

- Se explicó cómo se conectan ambos lados para calcular el total de una compra.
- Se analizó el proceso de envío de datos desde el cliente al servidor y la respuesta con el cálculo.
- Se destacó cómo todo esto se hace mediante APIs REST.

---

## Revisión y cierre

- Se realizó un Kahoot para reafirmar los conceptos presentados en la exposición.

---

### Grupo 2  
### Tema: Protocolos en el Desarrollo Web

---

## Importancia de los protocolos en la web

Los protocolos permiten la **comunicación ordenada y estandarizada entre clientes y servidores**. Son fundamentales para que los dispositivos intercambien información de forma segura y eficiente en la red.

---

## ¿Qué es un protocolo?

Un protocolo es un **conjunto de reglas** que define:

- Cómo inicia la comunicación
- El formato de los mensajes
- Qué hacer ante errores
- El orden de transmisión de los datos

---

## Ejemplo práctico: Acceder a una página web

Cuando se escribe `https://openai.com` en el navegador:

1. El cliente consulta DNS para obtener la dirección IP del servidor.
2. Se establece una conexión TCP con el servidor.
3. Sobre TCP, se utiliza el protocolo HTTP o HTTPS para solicitar la página.
4. El servidor responde con el contenido.
5. El navegador interpreta el código y renderiza la página para el usuario.

---

## Protocolos HTTP y HTTPS

### HTTP (Hypertext Transfer Protocol)

- Protocolo base de la web.
- La comunicación es en texto plano (no cifrada).

### HTTPS (HTTP Secure)

- Versión segura de HTTP.
- Utiliza el protocolo TLS (Transport Layer Security).
- Garantiza:
  - Confidencialidad
  - Integridad
  - Autenticidad

---

## Seguridad visual en los navegadores

- Se mostraron ejemplos de páginas cifradas (con conexión privada y segura).
- También se mostraron páginas con conexión insegura (sin HTTPS), para comparar.

---

## Modelo Request/Response en HTTP/HTTPS

### Request (Petición)

El cliente envía un mensaje al servidor solicitando un recurso. Incluye:

- Método HTTP (GET, POST, etc.)
- URL
- Headers
- Body (en algunos métodos)

### Response (Respuesta)

El servidor procesa la petición y responde con:

- Código de estado (200, 404, etc.)
- Headers
- Body (HTML, JSON, etc.)

---

## Métodos HTTP más comunes

- `GET`: Obtener un recurso
- `POST`: Enviar datos al servidor
- `PUT`: Actualizar un recurso
- `DELETE`: Eliminar un recurso
- `PATCH`: Actualización parcial

---

## Cabeceras HTTP comunes (Request Headers)

- `Host`
- `User-Agent`
- `Accept`
- `Authorization`
- `Content-Type`

---

## Códigos de estado HTTP más comunes

Errores del servidor:

- `500`: Internal Server Error
- `503`: Service Unavailable
- `504`: Gateway Timeout

---

## ¿Qué es una API en la web?

Una API (Application Programming Interface) es un conjunto de reglas y definiciones que permite que diferentes aplicaciones se comuniquen entre sí.

En la web, una API actúa como intermediario entre el cliente y el servidor.

### Ejemplo:

Una app del clima solicita los datos a una API.  
La API responde con la temperatura en formato JSON.  
El cliente no accede directamente a la base de datos, sino a través de la API.

Se mostró una imagen de una API del clima, destacando cómo se almacenan y devuelven los datos.

---

## Tipos de APIs y protocolos de comunicación

### REST (Representational State Transfer)

- Estilo más usado en la web
- Basado en HTTP
- Los recursos se representan mediante URLs
- Formato común: JSON

**Ventajas:**

- Simplicidad
- Basado en estándares web

**Desventajas:**

- Puede ser redundante al manejar múltiples llamadas

---

### GraphQL

- Lenguaje de consultas creado por Facebook para APIs.
- El cliente solicita exactamente los datos que necesita.
- Respuestas en formato JSON.

**Ventajas:**

- Eficiencia en la cantidad de datos
- Menor número de peticiones

**Desventajas:**

- Mayor complejidad en el servidor
- Curva de aprendizaje

---

### SOAP (Simple Object Access Protocol)

- Protocolo más antiguo y estricto
- Basado en XML
- Fuerte en estándares de seguridad

**Ventajas:**

- Formalidad y validación estricta

**Desventajas:**

- Verbosidad
- Complejidad

---

### gRPC (Google Remote Procedure Call)

- Framework desarrollado por Google, basado en RPC.
- Utiliza Protobuf en lugar de JSON o XML.

**Ventajas:**

- Rendimiento
- Compactación de datos

**Desventajas:**

- No legible fácilmente por humanos
- Requiere herramientas específicas

---

## Comunicación en tiempo real

### WebSockets

- Comunicación bidireccional entre cliente y servidor.
- Usos: chats, notificaciones, juegos en tiempo real.

**Ventajas:**

- Comunicación continua y rápida

**Desventajas:**

- Mayor complejidad de implementación

---

### Server-Sent Events (SSE)

- Comunicación unidireccional: del servidor al cliente.

**Ventajas:**

- Más simple que WebSockets para ciertas tareas

**Usos comunes:**

- Notificaciones, actualizaciones de datos

---

## Principios de seguridad

Toda arquitectura web debe contemplar los siguientes aspectos:

1. **Confidencialidad**
2. **Integridad**
3. **Disponibilidad**

### Mecanismos comunes:

- Autenticación
- Autorización
- Defensa en capas

---

## TLS / SSL

- TLS (Transport Layer Security) y su predecesor SSL garantizan comunicaciones seguras.
- Aplicaciones: HTTPS, VPN, correo cifrado

### Proceso:

1. Intercambio de claves
2. Establecimiento de sesión segura
3. Transmisión cifrada

---

## CORS (Cross-Origin Resource Sharing)

Mecanismo de seguridad del navegador que **controla cómo una página web accede a recursos desde otro dominio**.

### Proceso:

1. Origen realiza petición
2. Preflight request (si es necesario)
3. Headers de respuesta del servidor
4. Validación por parte del navegador

### Headers importantes:

- `Access-Control-Allow-Origin`
- `Access-Control-Allow-Methods`
- `Access-Control-Allow-Headers`

### Aplicaciones:

- Controlar acceso entre dominios
- Seguridad en APIs públicas

---

## Ejemplo: actualización de datos en tiempo real

Se mostró que, en ejemplos estáticos, es necesario actualizar la página para ver nueva información.  
Con WebSockets, los datos se muestran automáticamente sin recargar.

Se compartió una demo interactiva en:
[https://araxus.ddns.net/tiemporeal/index.html](https://araxus.ddns.net/tiemporeal/index.html)

---

## Autenticación y Autorización

### Autenticación

Proceso de verificar la identidad del usuario.  
Ejemplo clásico: usuario y contraseña.

### Autorización

Proceso que define qué recursos puede acceder el usuario autenticado.

---

## Métodos clásicos de autenticación

- Usuario / Contraseña
- Aplicaciones: sistemas internos, formularios
- Limitaciones: vulnerables a ataques de fuerza bruta o robo de credenciales

---

## OAuth 2.0

Framework de autorización que permite acceso a recursos **sin compartir credenciales del usuario**.

### Flujo típico:

1. Authorization Request
2. User Authorization
3. Authorization Grant
4. Access Token Request
5. Resource Access

### Usos:

- APIs de terceros
- Microservicios
- Apps móviles que consumen APIs

---

## OpenID Connect (OIDC)

Capa de identidad construida sobre OAuth 2.0  
Proporciona información del usuario autenticado.

### Diferencias clave:

- OAuth: qué puede hacer el usuario
- OIDC: quién es el usuario

### Aplicaciones:

- Single Sign-On (SSO)
- Sistemas de identidad federados
- Aplicaciones que requieren perfil del usuario

---

## JWT (JSON Web Token)

Estándar para transmitir información de forma segura entre dos partes.

### Estructura:

- Header
- Payload
- Signature

### Tipos de claims:

- Registered
- Public
- Private

### Usos comunes:

- Autenticación
- Autorización basada en roles

---

## Autenticación multifactor (MFA)

Sistema que requiere **dos o más factores** para verificar identidad.

### Factores posibles:

1. Algo que sabes: contraseña, PIN
2. Algo que tienes: teléfono, token físico
3. Algo que eres: huella, rostro, voz

### Métodos comunes:

- SMS, llamada, códigos TOTP
- Push notifications
- Hardware tokens (Yubikey)
- Biométricos

### Aplicaciones:

- Servicios financieros
- Sistemas críticos
- Cuentas administrativas

---

## Single Sign-On (SSO)

Sistema de autenticación que permite **iniciar sesión una sola vez para acceder a múltiples aplicaciones**.

### Funcionamiento:

- El usuario se autentica una vez con un proveedor de identidad.
- Se utilizan tokens para acceder a otras aplicaciones sin volver a ingresar credenciales.

### Protocolos y arquitectura:

- Utiliza estándares como OAuth, OIDC, SAML.

### Beneficios:

- Mejor experiencia de usuario
- Centralización de credenciales
- Reducción de riesgos

### Consideraciones:

- Mayor complejidad técnica
- Requiere integración entre sistemas

### Aplicaciones:

- Entornos empresariales con múltiples aplicaciones
- Suites de productos (Google Workspace, Microsoft 365)

---

## Caso práctico: Emisión de certificados con Let's Encrypt

### Escenario:

- Configuración de acceso seguro a una red empresarial.
- Se utiliza un servidor proxy que genera certificados SSL para una página web interna.

### Infraestructura:

- Servidor de VPN: Zentyal
- Cliente: equipo Linux conectado remotamente mediante OpenVPN
- Servidor proxy: equipo Ubuntu que ejecuta el proxy web

### Objetivos de aprendizaje:

- Establecer conexión mediante VPN
- Configurar OpenVPN
- Aplicar protocolos de seguridad
- Validar conexión segura extremo a extremo (end-to-end)

---

## Áreas laborales relacionadas

- Desarrolladores de APIs
- Ingenieros de integración
- Arquitectos de software
