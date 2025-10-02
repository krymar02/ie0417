# Curso: Diseño de Software para Ingeniería  
## Tema: Ingeniería de Software para Sistemas Embebidos e IoT  
### Grupo 6  

---

## Estudiantes
- Daylan Pereira Arroyo 
- Kryssia Martínez Martínez B84636
- María José Guevara Matarrita C13476 
---

## Índice
1. [Introducción a los sistemas embebidos](#i-introducción-a-los-sistemas-embebidos)  
2. [Ejemplos de sistemas embebidos](#ii-ejemplos-de-sistemas-embebidos)  
3. [Internet de las Cosas (IoT)](#iii-internet-de-las-cosas-iot)  
4. [Tecnologías clave](#iv-tecnologías-clave)  
5. [Caso práctico](#v-caso-práctico)  
6. [Áreas laborales](#vi-áreas-laborales)  
7. [Conclusiones](#vii-conclusiones)  
8. [Bibliografía](#viii-bibliografía-en-formato-ieee)  

---

## I. Introducción a los sistemas embebidos

Un sistema embebido se define como un conjunto de hardware y software diseñado para cumplir funciones específicas dentro de un dispositivo, a diferencia de un computador personal que está orientado a tareas de propósito general. Estos sistemas suelen estar integrados en equipos cotidianos como automóviles, electrodomésticos, dispositivos médicos o relojes inteligentes, y operan de manera automática y casi invisible para el usuario. Su presencia en la vida diaria es fundamental, pues permiten optimizar procesos, mejorar la seguridad, facilitar la conectividad y brindar comodidad en múltiples ámbitos.  
A diferencia del software tradicional que corre en un PC con abundantes recursos de memoria, procesadores potentes y sistemas operativos complejos, los sistemas embebidos deben trabajar con capacidades mucho más limitadas y con un nivel de programación cercano al hardware. Esto implica que el software se desarrolla en lenguajes de bajo nivel como C o ensamblador, que permiten controlar directamente registros, temporizadores y periféricos. Además, muchos sistemas embebidos deben garantizar respuestas en tiempo real, lo cual significa que no basta con que funcionen correctamente, sino que deben hacerlo en un tiempo preciso para cumplir su objetivo, como ocurre con los frenos ABS de un automóvil o con un marcapasos [1].  
Los sistemas embebidos siempre funcionan como parte de un dispositivo completo. Son computadoras pequeñas, de bajo costo y bajo consumo, que se integran en otros sistemas mecánicos o eléctricos. Generalmente, constan de un procesador, una fuente de alimentación, memoria y puertos de comunicación. Los sistemas embebidos utilizan los puertos de comunicación para transmitir datos entre el procesador y los dispositivos periféricos (a menudo, otros sistemas embebidos) mediante un protocolo de comunicación. El procesador interpreta estos datos con la ayuda de un software mínimo almacenado en la memoria. El software suele ser muy específico para la función del sistema embebido [1].

Por estas razones, la programación en sistemas embebidos no puede ser tratada de la misma manera que en un PC. El programador debe tener en cuenta que los recursos disponibles son limitados y que la eficiencia del código es crítica para lograr un desempeño adecuado. Aquí es donde entran en juego las principales restricciones de este tipo de sistemas: la memoria suele ser muy reducida, el consumo de energía debe ser mínimo —especialmente en dispositivos portátiles o que funcionan con baterías—, y la capacidad de procesamiento es baja en comparación con un computador convencional. Estas limitaciones representan un reto, ya que obligan a los ingenieros a diseñar soluciones optimizadas, confiables y seguras que permitan que el dispositivo cumpla con su función sin desperdiciar recursos ni comprometer su operación [1].  

### Características de los sistemas embebidos

Las principales características de los sistemas embebidos son [1]:

- Están diseñados para realizar **una tarea específica** dentro de un sistema mayor.  
- Constan de **hardware, software y firmware** que trabajan de forma conjunta.  
- Se integran en un sistema más grande para cumplir una **función especializada**, no múltiples tareas.  
- Utilizan **microprocesadores o microcontroladores** como unidad de cómputo.  
- En aplicaciones más complejas, pueden emplear **SoC, ASIC o FPGA**.  
- Se aplican en **dispositivos IoT**, donde realizan detección y procesamiento en tiempo real sin intervención del usuario.  
- Pueden variar en **complejidad y funciones**, lo que determina el tipo de hardware y software necesarios.  
- Deben cumplir su función bajo **restricciones de tiempo**, asegurando el correcto desempeño del sistema completo.  

### Tipos de sistemas embebidos

Los sistemas embebidos pueden clasificarse según sus requisitos funcionales en las siguientes categorías [1]:

- **Sistemas móviles integrados**: Son pequeños y portátiles, diseñados para acompañar al usuario en diferentes contextos. Ejemplos: cámaras digitales, teléfonos inteligentes y computadoras portátiles.  

- **Sistemas integrados en red**: Se conectan a una red para enviar información o interactuar con otros sistemas. Ejemplos: sistemas de seguridad para el hogar y sistemas de punto de venta.  

- **Sistemas embebidos autónomos**: Funcionan de manera independiente sin necesidad de un sistema anfitrión. Realizan una tarea específica por sí mismos. Ejemplos: calculadoras y reproductores de MP3.  

- **Sistemas embebidos en tiempo real**: Proporcionan respuestas dentro de un intervalo de tiempo definido, siendo críticos en tareas urgentes. Se utilizan en sectores como el médico, industrial y militar. Ejemplo: un sistema de control de tráfico.  

---

### II. Ejemplos de sistemas embebidos
  
Los sistemas embebidos están presentes en una gran cantidad de aplicaciones de la vida diaria y de la industria. A continuación, se presentan diez ejemplos reales resumidos, según [2]:

- **Automóviles**: Los automóviles modernos utilizan sistemas embebidos para controlar funciones como los frenos ABS, la gestión del motor, los sistemas de navegación y el entretenimiento a bordo. Estos sistemas permiten mayor seguridad, eficiencia y confort en la conducción.

- **Dispositivos médicos**: En la medicina, los sistemas embebidos son vitales en equipos como marcapasos, bombas de insulina y monitores cardíacos. Su confiabilidad y precisión resultan esenciales al estar directamente relacionados con la salud de los pacientes.

- **Electrodomésticos inteligentes**: Lavadoras, refrigeradores y hornos modernos incorporan sistemas embebidos que permiten automatizar ciclos, regular temperaturas, optimizar el consumo de energía y ofrecer control remoto a través de internet.

- **Maquinaria industrial**: En la industria, se utilizan en robots, control de procesos y maquinaria automatizada. Estos sistemas embebidos incrementan la productividad, reducen errores humanos y mejoran la seguridad en el entorno laboral.

- **Telecomunicaciones**: Routers, antenas y equipos de red contienen sistemas embebidos que gestionan el tráfico de datos, mantienen la conectividad estable y facilitan la comunicación global.

- **Sistemas de seguridad**: Cámaras inteligentes, sensores de movimiento y alarmas utilizan sistemas embebidos para procesar información en tiempo real y responder de manera inmediata ante posibles riesgos.

- **Wearables**: Relojes inteligentes y pulseras de actividad recopilan datos de salud como frecuencia cardíaca, pasos o calidad del sueño. Estos dispositivos procesan la información en tiempo real y ofrecen retroalimentación inmediata al usuario.

- **Aviación y transporte**: Los aviones dependen de sistemas embebidos para la gestión de vuelo y control de instrumentos, mientras que en el transporte público se utilizan en sistemas de semáforos, peajes electrónicos y control de rutas.

- **Agricultura**: La agricultura moderna integra sistemas embebidos en sensores y sistemas de riego automático, lo que permite optimizar el uso del agua, mejorar la producción y supervisar cultivos en tiempo real.

- **Dispositivos IoT**:Asistentes de voz, casas inteligentes y dispositivos conectados dependen de sistemas embebidos que se comunican entre sí, creando entornos inteligentes donde la automatización y la conectividad son clave.

## III. Internet de las Cosas (IoT)
El Internet de las Cosas (IoT) es una infraestructura socio-técnica que interconecta tanto cosas físicas (sensores, actuadores, dispositivos industriales) como cosas virtuales (servicios, plataformas, gemelos digitales). Esta infraestructura, basada en redes de comunicaciones y plataformas de servicios, permite capturar, transportar, procesar y transformar datos en acciones, en muchos casos de forma autónoma y segura.
De acuerdo con la ITU-T Y.2060/Y.4000, el IoT constituye una “infraestructura global para la sociedad de la información” sustentada en la interconexión de cosas [3]. Por su parte, el NIST lo define como dispositivos y productos conectados a Internet que generan, intercambian y procesan datos, incluyendo hardware, software y firmware [4]. La IEEE IoT Initiative resalta que el IoT integra objetos físicos con sus representaciones virtuales, extendiendo su identidad digital en una red de servicios inteligentes [9].
### Arquitectura y flujo de datos (visión por capas)
El ecosistema IoT suele representarse mediante una arquitectura por capas, que facilita entender el flujo de datos y la interacción entre dispositivos y servicios.
#### 1. Capa de percepción
Conformada por las “cosas” mismas: sensores que capturan datos del entorno (temperatura, humedad, vibración, pH, presión, etc.) y actuadores que ejecutan acciones físicas (abrir una válvula, mover un motor, encender un dispositivo).  
Ejemplo: sensores de humedad en agricultura de precisión o termostatos en hogares inteligentes [10].
Estos dispositivos son la puerta de entrada del mundo físico al mundo digital, y su correcto diseño determina la calidad y confiabilidad de los datos.
#### 2. Capa de conectividad/red
Encargada de transportar los datos hacia servicios de mayor nivel. Utiliza redes IP, gateways y protocolos de comunicación.  
Entre los protocolos destacan:
- **MQTT (Message Queuing Telemetry Transport):** ligero, basado en publish/subscribe, soporta niveles de QoS 0/1/2, ideal para redes de baja potencia o alta latencia [5].  
- **CoAP (Constrained Application Protocol):** basado en REST, diseñado para dispositivos con recursos muy limitados, optimizado sobre UDP [RFC 7252].  
- **AMQP (Advanced Message Queuing Protocol):** más robusto, orientado a entornos industriales y financieros donde la confiabilidad es crítica.
El protocolo elegido depende del balance entre consumo energético, latencia y confiabilidad.
#### 3. Capa de servicios/compute
Aquí ocurre el procesamiento de datos en infraestructura de edge, fog y cloud computing. Se siguen etapas de **ingesta → almacenamiento → análisis (ML/AI) → orquestación**, que permiten desde emitir alertas hasta ejecutar acciones automáticas.
- **Azure IoT Hub (Microsoft):** incluye Device Provisioning Service para registrar millones de dispositivos, device twins (representaciones digitales sincronizadas) y compatibilidad multi-protocolo [7].  
- **AWS IoT Core (Amazon):** ofrece autenticación con certificados X.509, motor de reglas para enrutar mensajes y device shadows para mantener estados sincronizados incluso cuando los dispositivos están desconectados [6].
Estos servicios demuestran cómo la nube se convierte en un centro de control, pero también muestran la necesidad de procesar datos cerca de la fuente (**edge computing**) para reducir latencia y preservar privacidad.
#### 4. Capa de aplicación
Es donde los datos se convierten en valor de negocio: dashboards de monitoreo, APIs que se integran con procesos, automatización de operaciones, eficiencia energética y trazabilidad en la cadena de suministro.  
Ejemplo: en una empresa de logística, un dashboard IoT puede mostrar en tiempo real la ubicación y condiciones de temperatura de la carga.
### Capacidades nucleares del IoT
- **Identidad y direccionamiento:** cada dispositivo posee credenciales únicas (certificados, claves, direcciones IPv6). Protocolos seguros como TLS garantizan autenticación mutua [11].  
- **Interoperabilidad y gobierno de datos:** los estándares (MQTT, OMA LwM2M, OASIS) definen esquemas comunes de tópicos y mensajes para evitar fragmentación [5].  
- **Gestión del ciclo de vida:** incluye provisioning, actualizaciones OTA (over-the-air) y desmantelamiento seguro del dispositivo [7].  
- **Seguridad desde el diseño (security by design):** cifrado extremo a extremo, control de acceso de mínimo privilegio, segmentación de redes y monitoreo continuo [11].
### Modos de interacción
- **M2M (machine-to-machine):** comunicación directa entre dispositivos o con gateways, fundamental en entornos industriales.  
- **Device-to-Cloud:** los sensores envían telemetría a la nube (ej. AWS IoT Core).  
- **Cloud-to-Device:** comandos o actualizaciones OTA desde la nube hacia el dispositivo.  
El protocolo **MQTT** suele ser preferido por su eficiencia en enlaces inestables y su soporte de confiabilidad flexible [5].
### Ejemplos de aplicación por dominio
- **Casas inteligentes:** automatización de iluminación, climatización y seguridad. La iniciativa Matter busca garantizar interoperabilidad entre Apple, Google y Amazon [8].  
- **Monitoreo de salud (IoMT):** wearables y sensores biomédicos transmiten signos vitales a plataformas seguras para análisis en tiempo real [6].  
- **Agricultura de precisión:** sensores de humedad y nutrientes, estaciones meteorológicas y análisis predictivo optimizan riego y fertilización, logrando mayor eficiencia hídrica y reducción de costes [7].  
- **Industria 4.0:** integración de sistemas SCADA con plataformas cloud, mantenimiento predictivo y robots colaborativos, con IoT como núcleo de la digitalización industrial.

### Dashboards en Internet de las Cosas (IoT)
Un **dashboard IoT** (panel de control IoT) es una **interfaz gráfica** que permite **visualizar, analizar y gestionar los datos** provenientes de dispositivos conectados. Su función principal es **transformar los datos en información comprensible y útil** para la toma de decisiones, tanto en tiempo real como en forma histórica.
#### Características principales
- **Visualización en tiempo real:**  
  Gráficas dinámicas que muestran valores de sensores y actuadores (ej. temperatura, nivel de agua, consumo eléctrico).
- **Alertas y notificaciones:**  
  Configuración de umbrales que disparan avisos cuando una variable excede un valor crítico (ej. temperatura > 30 °C).
- **Interacción con dispositivos:**  
  Algunos dashboards permiten enviar órdenes de control (ej. encender un motor o abrir una válvula).
- **Análisis histórico y predicciones:**  
  Los datos se almacenan para identificar patrones, tendencias y aplicar analítica avanzada (ej. mantenimiento predictivo).
#### Ejemplos de plataformas con dashboards IoT
- **Microsoft Azure IoT Central**: proporciona dashboards integrados con visualizaciones y reglas para alertas en tiempo real.
- **AWS IoT Core + Amazon QuickSight**: permite construir dashboards interactivos sobre datos provenientes de dispositivos IoT..  
- **ThingsBoard (open source)**: ofrece dashboards personalizables para múltiples dispositivos y protocolos.  
- **Grafana**: ampliamente utilizado para monitoreo en tiempo real de datos IoT y métricas de sistemas.
  
## IV. Tecnologías clave
### Lenguajes
Los lenguajes de programación proporcionan instrucciones al microprocesador, permitiendo que el dispositivo realice operaciones. El compilador actúa como puente entre las instrucciones y el microcontrolador que las ejecuta. Seleccionar un lenguaje apropiado es fundamental para definir las capacidades y funcionalidades del producto final en sistemas embebidos. [15] 
### Lenguajes comunes en sistemas embebidos
- C 
- C++
- Assembly
- BASIC
- Java
- JavaScript [15]

#### C
- Lenguaje compilado utilizado para crear aplicaciones de bajo nivel en microcontroladores.
- Amplio uso en aplicaciones industriales.
- Requiere conocimientos avanzados de codificación.
- Destaca por eficiencia y control sobre recursos del sistema. [15]

#### C++
- Lenguaje eficiente con biblioteca estándar rica.
- Facilita codificación modular y rápida gracias a la programación orientada a objetos. [15]

### Ventajas y Desventajas de C++ en Sistemas Embebidos

| Aspecto | Ventajas | Desventajas |
|---------|----------|-------------|
| Facilidad de uso y escalabilidad | Diseño modular, plantillas y herencia que facilitan reutilización y escalabilidad | Difícil de aprender; muchas construcciones aumentan la curva de aprendizaje |
| Portabilidad | Código reutilizable entre dispositivos | Plantillas complejas pueden causar incompatibilidades |
| Biblioteca estándar | Herramientas optimizadas listas para usar | Uso inadecuado puede afectar rendimiento |
| Estabilidad y soporte | Programas confiables, comunidad amplia, lenguaje maduro | Mantener bases de código grandes es desafiante |
| Interoperabilidad y aprendizaje | Facilita aprender otros lenguajes modernos | Gestión manual de memoria; no hay recolector de basura automático |
| Interfaces gráficas (GUI) | Facilita implementación de GUI | Consumo de recursos mayor que C puro |
| Rendimiento | Compiladores modernos optimizan velocidad y memoria | Excepciones o RTTI pueden reducir eficiencia; plantillas complejas afectan rendimiento |
| Mantenimiento y base de código | Diseño modular facilita extensión | Complejidad del lenguaje dificulta mantenimiento; riesgo de inconsistencias | [16]
---

#### Python
- Lenguaje de programación accesible, fácil de aprender y con sintaxis clara.
- Popular para prototipos rápidos, automatización y scripting.
- MicroPython adapta Python a tareas de hardware y sistemas integrados.
- Ideal para desarrollo ágil, aunque no tan eficiente como C/C++ en tiempo real. [17] 

### Ventajas y Desventajas de Python en Sistemas Embebidos

| Aspecto | Ventajas | Desventajas |
|---------|----------|-------------|
| Sintaxis y facilidad de uso | Lenguaje accesible, sintaxis clara, rápido desarrollo | No eficiente para tareas críticas de tiempo real |
| Prototipado rápido | Creación de prototipos ágil, MicroPython para hardware | Limitado al hardware compatible; no ideal para sistemas muy restringidos |
| Flexibilidad y adaptabilidad | Uso en scripting, automatización y pruebas rápidas; compatible con varias plataformas | Gestión de memoria menos eficiente; velocidad de ejecución más lenta |
| Comunidad y soporte | Amplia comunidad y gran cantidad de librerías | Algunas librerías estándar no optimizadas para sistemas embebidos |
| Aplicaciones recomendadas | Prototipos IoT, sistemas educativos, secuencias de comandos | No recomendable para aplicaciones críticas de alto rendimiento o tiempo real | [15] 

---

### Cómo elegir el lenguaje adecuado
La elección depende de la familiaridad del programador, el tipo de proyecto, la industria y los requisitos del sistema. Los sistemas embebidos requieren equilibrar necesidades técnicas con capacidades y limitaciones del lenguaje. [15] 

--- 

### Plataformas

#### Arduino
Arduino es una plataforma de hardware y software de código abierto que permite a los usuarios crear proyectos electrónicos interactivos. Consiste en placas con microcontroladores y un entorno de desarrollo que facilita programarlas para controlar sensores, actuadores y otros dispositivos electrónicos. [18]

- Las placas Arduino pueden leer entradas: luz en un sensor, un dedo en un botón o un mensaje de Twitter, y convertirlas en una salida: activar un motor, encender un LED, publicar algo en línea. 
- Puede indicarle a su placa qué hacer enviando un conjunto de instrucciones al microcontrolador de la placa.
- Se utiliza el lenguaje de programación Arduino (basado en Wiring), y el Software Arduino (IDE), basado en Processing.
- Se adaptó a nuevas necesidades y desafíos, diferenciando su oferta desde simples placas de 8 bits hasta productos para aplicaciones de IoT, dispositivos portátiles, impresión 3D y entornos integrados. [18]

#### 2. Entorno de Desarrollo Integrado (IDE)
El IDE de Arduino permite:
- Escribir, verificar y cargar código en las placas Arduino.
- Utilizar bibliotecas que agregan funcionalidades, como controlar sensores, pantallas o módulos adicionales.
- Trabajar tanto en escritorio (Arduino Software IDE) como en línea (Arduino Cloud Editor). [18]

Tipos de IDE:
1. **IDE de escritorio**: Para trabajar sin conexión y con control completo de las bibliotecas.
2. **Arduino Cloud Editor**: IDE en línea que guarda los bocetos en la nube y permite acceder a los proyectos desde cualquier dispositivo.
3. **Arduino Cloud**: Plataforma para proyectos IoT; permite monitorear, controlar y rastrear dispositivos de manera remota. [18]
---

##### Uso del IDE: 
- Conectar la placa Arduino al computador, el IDE la reconoce automáticamente.
- Cargar **bocetos** (programas) directamente a la placa.
- Ejemplo básico: el programa “Blink” hace parpadear un LED integrado en la placa.
- El IDE permite modificar la velocidad del parpadeo ajustando parámetros en el código. [18]

### 4. Bibliotecas
- Proporcionan funcionalidades adicionales para manejar hardware y datos.
- Pueden instalarse desde el IDE de escritorio o Arduino Cloud Editor.
- Permiten reutilizar código y acceder a ejemplos preconfigurados. [18]

### 5. Arduino Cloud
Arduino Cloud permite:
- Conectar, monitorear y controlar dispositivos desde cualquier lugar.
- Crear automáticamente código para los dispositivos.
- Configurar variables y tipos de datos.
- Conectar dispositivos a Wi-Fi y generar funciones que responden a eventos desde la nube.
- Crear **paneles de control (dashboards)** para visualizar y controlar los dispositivos de forma gráfica usando **widgets**.
- Compatible con placas oficiales Arduino (algunas requieren tarjetas SIM o gateways según el modelo). [18]

### 6. Configuración de red
Para conectar dispositivos a Arduino Cloud, se deben permitir ciertos dominios y puertos en firewalls de red:
- mqtts-up.iot.arduino.cc → 8884
- mqtts-sa.iot.arduino.cc → 8883
- wss.iot.arduino.cc → 8443
- NTP → puerto 123 UDP [18]

### 7. Aplicaciones prácticas
- Educación y prototipado rápido.
- Proyectos IoT con control remoto de sensores y actuadores.
- Automatización y monitoreo de dispositivos electrónicos.
- Interacción visual mediante dashboards personalizados en la nube. [18]

---

## Raspberry Pi

### ¿Qué es?
La Raspberry Pi es una computadora de bajo costo y tamaño compacto, capaz de ejecutar Linux y conectarse a monitores, teclados y mouse. Permite aprender programación y realizar proyectos de computación y electrónica, desde navegación en internet y multimedia, hasta proyectos de IoT y automatización. [19]

## Hardware
- Tamaño compacto (tarjeta de crédito)
- Puertos USB, HDMI, Ethernet, Wi-Fi y Bluetooth
- Pines GPIO para interactuar con sensores y actuadores [19]

## Sistemas operativos
- **Raspbian**: Sistema oficial basado en Linux, optimizado para Raspberry Pi.
- **NOOBS**: Instalador que permite elegir y configurar diferentes sistemas operativos fácilmente.
- Soporta software para ofimática, programación, multimedia y proyectos IoT. [19]

## Usos comunes
1. **Mini PC**: navegación, edición de documentos y multimedia.
2. **Servidor de impresión Wi-Fi**: conectar impresoras antiguas a la red.
3. **Máquina Arcade**: emulación de consolas clásicas con Recalbox o Retropie.
4. **Servidor web**: Apache, WordPress, MySQL.
5. **Reproductor multimedia**: con KODI.
6. **Sistema NAS**: almacenamiento centralizado con OpenMediaVault.
7. **Domótica**: control de luces, temperatura, seguridad, y más con Domoticz. [20]

---

## Comparativa Raspberry Pi 4 vs Arduino UNO

| Característica | Arduino UNO | Raspberry Pi 4 |
|----------------|------------|----------------|
| Tipo | Microcontrolador | Mini PC |
| Sistema operativo | Ninguno | Linux (Raspbian) |
| Pines digitales | 14 | 40 |
| Pines analógicos | 6 | 0 (requiere ADC externo) |
| Lenguaje | C/C++ | Python |
| Multitarea | No | Sí |
| Uso ideal | Control directo de sensores y actuadores | Procesamiento de datos, multimedia, IoT |
| Ventaja principal | Respuesta inmediata y control preciso | Potencia de cálculo, multitarea y conectividad | [21] 
**Resumen:**  
- **Raspberry Pi**: ideal para proyectos que requieren potencia de cálculo, multitarea o conectividad.  
- **Arduino**: indicado para control inmediato de sensores y actuadores.  
- Pueden combinarse para aprovechar lo mejor de cada uno: Arduino recoge datos y controla actuadores; Raspberry Pi procesa información y maneja aplicaciones complejas.

---

# ESP32

## ¿Qué es ESP32?
El ESP32 es un microcontrolador y SoC (System on Chip) con Wi-Fi y Bluetooth integrados, diseñado por Espressif Systems. Es versátil, compacto y de bajo costo, ideal para proyectos IoT, domótica, robótica, dispositivos portátiles y automatización industrial. [22]
### Características principales
- **Diseño robusto**: -40°C a +125°C, confiable en entornos industriales.
- **Consumo ultrabajo**: ideal para dispositivos móviles y IoT.
- **Alta integración**: antena, amplificadores, filtros y gestión de energía integrados.
- **Conectividad**: Wi-Fi, Bluetooth clásico y BLE; soporte para Zigbee, ESP-NOW y Matter.
- **Memoria**: 4MB Flash y ~500KB RAM (PSRAM opcional en versiones avanzadas).
- **Flexibilidad**: puede funcionar de manera independiente o como periférico de otro microcontrolador. [23] 

### Sistemas operativos y lenguajes
Compatible con múltiples frameworks y lenguajes:
- Arduino (C/C++)
- MicroPython (Python)
- Mongoose OS (JavaScript/C)
- Espruino (JavaScript)
- SDK especializados: ESP-IDF, audio ADF, ESP-Mesh, ESP-Matter [22] 
### Aplicaciones
1. **IoT**Sensores y dispositivos domésticos inteligentes.
2. **Domótica**Control de luces, termostatos y electrodomésticos.
3. **Robótica**: control inalámbrico de robots.
4. **Dispositivos portátiles**: relojes, rastreadores de actividad, monitores de salud.
5. **Automatización industrial**Monitorización y control remoto de procesos.
6. **Monitoreo ambiental**Calidad del aire, clima y contaminación.
7. **Seguridad y salud**: sistemas de alarma, cámaras, telemedicina.
8. **Educación y prototipos**: enseñanza de electrónica y programación.  [22] 

---

## Ventajas del ESP32
- Bajo costo y alto rendimiento.
- Consumo energético optimizado.
- Amplia compatibilidad con SDK y lenguajes de programación.
- Ideal para proyectos que requieren conectividad y procesamiento en tiempo real.  [22]

### Actividad sugerida
- **Demostración:** Sistema de monitoreo de temperatura con dos Arduinos.
  - El **emisor** mide la temperatura con un sensor DHT y la muestra en una pantalla LCD.
  - La temperatura se envía al **receptor** vía UART.
  - El receptor compara la temperatura con un umbral y responde:
    - "ALERTA" si supera el límite.
    - "OK" si está dentro del rango seguro.
  - Cuando el emisor recibe "ALERTA", activa un **buzzer** como señal de advertencia.
  - Permite detectar temperaturas elevadas de forma simple y efectiva.  
  - [Video demostrativo](https://youtu.be/tpthok0nboE) del funcionamiento del sistema.


## V. Caso práctico

## VI. Áreas laborales

### Firmware Developer
- **Qué hace:**  
  Desarrolla software cercano al hardware de dispositivos electrónicos, optimizando la comunicación entre microcontroladores, sensores y actuadores. Crea drivers, protocolos de comunicación y algoritmos de control, asegurando eficiencia y bajo consumo energético.

- **Ejemplo de empresas:**  
  - **Avient:** materiales avanzados y soluciones tecnológicas.  
  - **KLA Tencor:** Control de calidad y automatización para semiconductores.

### IoT Developer
- **Qué hace:**  
  Diseña soluciones que integran dispositivos conectados a internet, permitiendo automatización, monitoreo y análisis de datos en tiempo real. Implementa protocolos como MQTT, HTTP y WebSocket.

- **Ejemplo de empresas:**  
  - **Rootstack:** desarrollo de software y soluciones IoT.  
  - **Intel Costa Rica:** soluciones de conectividad para IoT.

### Ingeniero embebido
- **Qué hace:**  
  Diseña y programa sistemas con recursos limitados como microcontroladores y FPGA. Optimiza memoria, procesador y energía, desarrollando aplicaciones en robótica, control industrial y dispositivos médicos.

- **Ejemplo de empresas:**  
  - **Fiserv:** soluciones tecnológicas financieras y sistemas embebidos.  
  - **HP Costa Rica:** Desarrollo de hardware y software integrado.

### Sectores con creciente demanda
- **Qué se hace:**  
  Integración de sensores y actuadores, automatización de procesos, análisis de datos, desarrollo de productos inteligentes y monitoreo remoto.

- **Ejemplo de empresas por sector:**  
  - **Automotriz:** BMW Group Costa Rica, Continental Automotive.  
  - **Salud:** InnovaTec, Hospital Clínica Bíblica.  
  - **Domótica:** Smart Home Costa Rica, Tecnosoluciones CR.  
  - **Industria 4.0:** Boston Scientific, Abbott.

---

## VII. Conclusiones
1. **Importancia de los sistemas embebidos:**  
   Los sistemas embebidos constituyen el núcleo de numerosos dispositivos actuales, desde electrodomésticos hasta sistemas críticos médicos e industriales. Su capacidad para realizar funciones específicas de manera eficiente, confiable y con recursos limitados los hace indispensables en la vida cotidiana y en procesos industriales.

2. **Integración con IoT:**  
   La combinación de sistemas embebidos con el Internet de las Cosas potencia la automatización, el monitoreo remoto y la toma de decisiones basada en datos en tiempo real. Las arquitecturas por capas y los protocolos de comunicación estandarizados permiten una interoperabilidad efectiva entre dispositivos, plataformas de edge y cloud, así como aplicaciones de alto valor.

3. **Selección de tecnologías y lenguajes:**  
   La elección de lenguajes de programación, plataformas y microcontroladores depende de los requisitos del proyecto. Mientras C y C++ ofrecen control y eficiencia en tiempo real, Python facilita prototipado rápido y manejo de datos. Plataformas como Arduino, Raspberry Pi y ESP32 permiten implementar soluciones desde simples experimentos hasta proyectos de IoT avanzados.

4. **Aplicaciones prácticas y educativas:**  
   La utilización de estas tecnologías en entornos educativos y de prototipado demuestra que los sistemas embebidos y el IoT son herramientas accesibles para aprender programación, electrónica y automatización, promoviendo el desarrollo de habilidades técnicas aplicables a la industria moderna.

5. **Perspectiva laboral y profesional:**  
   La creciente demanda de profesionales en firmware, IoT y sistemas embebidos refleja la relevancia de estos conocimientos en sectores como la automoción, salud, domótica e industria 4.0. Las oportunidades laborales se centran en el diseño, programación y optimización de dispositivos inteligentes y conectados.


---
## VIII. Bibliografía en formato IEEE
[1] A. S. Gillis and B. Lutkevich, "What is an embedded system?," TechTarget, Aug. 13, 2024. [En línea]. Disponible en: https://www-techtarget-com.translate.goog/iotagenda/definition/embedded-system?_x_tr_sl=en&_x_tr_tl=es&_x_tr_hl=es&_x_tr_pto=tc [Accedido: Sep. 30, 2025].
[2] Digi International, "10 ejemplos reales de sistemas integrados," Digi Blog, Jun. 4, 2021. [En línea]. Disponible en: https://es.digi.com/blog/post/examples-of-embedded-systems [Accedido: Sep. 30, 2025].
[3] ITU-T, Overview of the Internet of Things (Y.2060/Y.4000), ITU, 2012. [En línea]. Disponible en: https://www.itu.int/rec/dologin_pub.asp?id=T-REC-Y.2060-201206-I%21%21PDF-E&lang=e&type=items [Accedido: Sep. 30, 2025].
[4] NIST, "Internet of Things – Glossary," Computer Security Resource Center. [En línea]. Disponible en: https://csrc.nist.gov/glossary/term/internet_of_things [Accedido: Sep. 30, 2025].
[5] OASIS, MQTT Version 3.1.1, OASIS Standard, Oct. 2014. [En línea]. Disponible en: https://docs.oasis-open.org/mqtt/mqtt/v3.1.1/os/mqtt-v3.1.1-os.pdf [Accedido: Sep. 30, 2025].
[6] H. S. Awan et al., "An IoT-Based Smart Home Automation System," Sensors, vol. 21, no. 14, Jul. 2021. [En línea]. Disponible en: https://pmc.ncbi.nlm.nih.gov/articles/PMC8198920/ [Accedido: Sep. 30, 2025].
[7] S. Sharma et al., "The IoT and AI in Agriculture: The Time Is Now," Agronomy, vol. 14, no. 3, 2024. [En línea]. Disponible en: https://pmc.ncbi.nlm.nih.gov/articles/PMC12196926/ [Accedido: Sep. 30, 2025].
[8] A. McCracken, "‘Matter’ could solve smart homes' biggest problem," Axios, Nov. 4, 2022. [En línea]. Disponible en: https://www.axios.com/2022/11/04/matter-smart-home-iot-amazon-google-apple-devices [Accedido: Sep. 30, 2025].
[9] Amazon Web Services, What is AWS IoT? AWS Documentation, 2023. [En línea]. Disponible en: https://docs.aws.amazon.com/iot/latest/developerguide/what-is-aws-iot.html [Accedido: Sep. 30, 2025].
[10] Microsoft, Azure IoT Hub Documentation, Microsoft Learn, 2023. [En línea]. Disponible en: https://learn.microsoft.com/en-us/azure/iot-hub/ [Accedido: Sep. 30, 2025].
[11] OASIS, MQTT Version 3.1.1 Committee Specification Draft 02, OASIS, 2013. [En línea]. Disponible en: https://docs.oasis-open.org/mqtt/mqtt/v3.1.1/csprd02/mqtt-v3.1.1-csprd02.pdf [Accedido: Sep. 30, 2025].
[12] Amazon Web Services, AWS IoT Core Documentation, AWS Docs, 2023. [En línea]. Disponible en: https://docs.aws.amazon.com/iot/ [Accedido: Sep. 30, 2025].
[13] NIST, Definitions of IoT, NIST, 2020. [En línea]. Disponible en: https://www.nist.gov/document/definitions-iot [Accedido: Sep. 30, 2025].
[14] D. Newman, "Google Home’s data leak proves the IoT is still deeply flawed," WIRED, Jul. 2018. [En línea]. Disponible en: https://www.wired.com/story/google-home-chromecast-location-security-data-privacy-leak [Accedido: Sep. 30, 2025].
[15] SMH Tech, "Embedded Systems: What Programming Languages Are Used in the Industry," SMH Tech Blog, 2023. [En línea]. Disponible en: https://smh-tech.com/corporate-blog/embedded-systems-what-programming-languages-are-used-in-the-industry/ [Accedido: Sep. 30, 2025].
[16] Qt Blog, "C for Embedded: Advantages, Disadvantages, and Myths," Qt Blog, 2023. [En línea]. Disponible en: https://www.qt.io/blog/c-for-embedded-advantages-disadvantages-and-myths [Accedido: Sep. 30, 2025].
[17] KO2, "Best Language for Embedded Systems," KO2 Blog, 2023. [En línea]. Disponible en: https://www.ko2.co.uk/best-language-for-embedded-systems/ [Accedido: Sep. 30, 2025].
[18] Arduino, "Getting Started with Arduino," Arduino Docs, 2023. [En línea]. Disponible en: https://docs.arduino.cc/learn/starting-guide/arduino-comic/ [Accedido: Sep. 30, 2025].
[19] Raspberry Pi, "¿Qué es Raspberry Pi?," Raspberry Pi Blog, 2023. [En línea]. Disponible en: https://raspberrypi.cl/que-es-raspberry/ [Accedido: Sep. 30, 2025].
[20] Raspberry Pi, "Software de Raspberry Pi," Raspberry Pi Blog, 2025. [En línea]. Disponible en: https://raspberrypi.cl/software-de-raspberry/ [Accedido: Sep. 30, 2025].
[21] Raspberry Pi, "Arduino vs Raspberry Pi," Raspberry Pi Blog, 2023. [En línea]. Disponible en: https://raspberrypi.cl/arduino-vs-raspberry/ [Accedido: Sep. 30, 2025].
[22] DeepSeaDev, "ESP32 Chip Explained and Advantages," DeepSeaDev Blog, 2023. [En línea]. Disponible en: https://www.deepseadev.com/en/blog/esp32-chip-explained-and-advantages/ [Accedido: Sep. 30, 2025].
[23] Espressif, "ESP32 SoC," Espressif Documentation, 2023. [En línea]. Disponible en: https://www.espressif.com/en/products/socs/esp32 [Accedido: Sep. 30, 2025].

