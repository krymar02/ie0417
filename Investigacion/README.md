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
### Caso Práctico 5: Sensor Inteligente Conectado a la Nube

### Descripción General

Para este caso práctico se simuló el funcionamiento de un sistema IoT utilizando la plataforma Wokwi (simulador online de microcontroladores) junto con el servicio en la nube ThingSpeak.

El flujo de datos se desarrolla de la siguiente forma:

1. *Sensor (DHT22):* mide valores de temperatura y humedad. En este caso, el sensor es virtual y se encuentra dentro del simulador.  
2. *Microcontrolador (ESP32):* recibe los datos del sensor, los procesa y los prepara en formato adecuado (valores numéricos). Gracias a la conexión Wi-Fi, el ESP32 envía periódicamente esta información hacia la nube.  
3. *Plataforma en la nube (ThingSpeak):* recibe los datos enviados por el ESP32, los almacena y genera gráficas en tiempo real.  
4. *Dashboard web:* muestra los resultados de forma visual. De esta manera se pueden observar tendencias de temperatura y humedad en un panel accesible desde cualquier dispositivo conectado a internet.

---

### Explicación Técnica

Se utilizó un proyecto en Wokwi con un ESP32 virtual conectado a un sensor DHT22.

El código del microcontrolador se programó para:

- Conectarse a una red Wi-Fi.  
- Realizar peticiones HTTP hacia el servicio ThingSpeak.  
- Enviar los datos cada 15 segundos.

ThingSpeak recibió los valores y los representó automáticamente en gráficas dentro de un canal configurado con dos campos:

- Temperatura  
- Humedad

### Resultados

Este ejercicio demuestra de manera sencilla el ciclo de vida de un dato en un sistema IoT:

| Etapa | Descripción |
|-------|--------------|
| Captura | Sensor DHT22 mide temperatura y humedad. |
| Procesamiento y Transmisión | ESP32 procesa los datos y los envía por Wi-Fi. |
| Almacenamiento en la nube | ThingSpeak guarda los valores recibidos. |
| Visualización | Dashboard web muestra las gráficas en tiempo real. |
## VI. Áreas laborales

### Firmware Developer
- **Qué hace:**  
  Desarrolla software cercano al hardware de dispositivos electrónicos, optimizando la comunicación entre microcontroladores, sensores y actuadores. Crea drivers, protocolos de comunicación y algoritmos de control, asegurando eficiencia, bajo consumo energético y confiabilidad en la ejecución en tiempo real.

- **Ejemplo de empresas:**  
  - **Avionix:** desarrolla y prueba firmware para sistemas de aviónica, control de vuelo y comunicación en aeronaves. Los ingenieros trabajan en programación en C/C++ para microcontroladores, validación de hardware y pruebas de cumplimiento de normas aeronáuticas.  
  - **Teradyne:** diseña y mantiene firmware para equipos de prueba automatizados (ATE) utilizados en la industria de semiconductores y electrónica. Se trabaja en controladores de instrumentos, comunicación con hardware y optimización de procesos de testeo.  
  - **KLA Tencor:** desarrolla sistemas de control y análisis en la fabricación de semiconductores, con firmware que gestiona sensores de precisión y sistemas ópticos.  
  - **Avient:** enfocado en materiales avanzados, también emplea desarrolladores de firmware para integrar sensores inteligentes en productos industriales y soluciones de manufactura avanzada.

---

### IoT Developer
- **Qué hace:**  
  Diseña soluciones que integran dispositivos conectados a internet, permitiendo automatización, monitoreo y análisis de datos en tiempo real. Implementa protocolos como MQTT, HTTP y WebSocket, y desarrolla dashboards o sistemas de control remoto.

- **Ejemplo de empresas:**  
  - **Intel Costa Rica:** desarrolla plataformas IoT para automatización industrial, monitoreo energético y optimización de procesos de manufactura mediante el análisis de datos en la nube.  
  - **Rootstack:** integra soluciones de IoT con aplicaciones web y móviles, conectando sensores, cámaras o dispositivos inteligentes con servicios en la nube.  
  - **Boston Scientific:** emplea desarrolladores IoT en el diseño de dispositivos médicos conectados, que recopilan y envían datos fisiológicos en tiempo real para diagnóstico o seguimiento clínico.  
  - **Teradyne:** implementa IoT para control y monitoreo de equipos de prueba, enviando datos a servidores o plataformas cloud para análisis de rendimiento.

---

### Ingeniero embebido
- **Qué hace:**  
  Diseña y programa sistemas con recursos limitados (microcontroladores, FPGA o SoC). Desarrolla controladores, firmware y software de bajo nivel que garantizan el funcionamiento de sistemas críticos en sectores como la industria médica, automotriz o de manufactura avanzada.

- **Ejemplo de empresas:**  
  - **Avionix:** desarrolla sistemas embebidos para aeronaves, incluyendo módulos de navegación, monitoreo y comunicación. Los ingenieros realizan validación de hardware, pruebas en simuladores y depuración de código en entornos de tiempo real.  
  - **HP Costa Rica:** diseña firmware embebido para impresoras y dispositivos inteligentes, incluyendo sensores de temperatura, tinta y movimiento.  
  - **Fiserv:** implementa sistemas embebidos y soluciones seguras en dispositivos de pago y terminales financieras, garantizando integridad de datos y comunicación cifrada.  
  - **Boston Scientific:** desarrolla firmware y software embebido para dispositivos médicos implantables y equipos de diagnóstico. Se trabaja con requisitos de precisión, seguridad y certificaciones FDA.  

---

### Sectores con creciente demanda
- **Qué se hace:**  
  Se integran sensores, actuadores y sistemas conectados para automatización, monitoreo y control de procesos. Las tareas incluyen diseño electrónico, programación embebida, comunicación inalámbrica y análisis de datos, aplicadas a sectores con innovación constante.

- **Ejemplo de empresas por sector:**  
  - **Automotriz:**  
    - *BMW Group Costa Rica:* desarrollo y mantenimiento de sistemas electrónicos de control vehicular.  
    - *Continental Automotive:* diseño de sistemas de asistencia al conductor y control de motores mediante software embebido.  
  - **Salud:**  
    - *Boston Scientific:* dispositivos médicos inteligentes conectados a la nube para monitoreo continuo de pacientes.  
    - *Abbott:* sensores biomédicos y sistemas de análisis embebidos para diagnóstico.  
  - **Domótica:**  
    - *Smart Home Costa Rica:* desarrollo de sistemas automatizados de iluminación, clima y seguridad.  
    - *Tecnosoluciones CR:* integración de sensores y controladores IoT para hogares y edificios inteligentes.  
  - **Industria 4.0:**  
    - *Teradyne:* automatización industrial mediante robótica colaborativa y sistemas de prueba conectados.  
    - *KLA Tencor:* control de procesos de fabricación de chips con sistemas embebidos de alta precisión.  


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

