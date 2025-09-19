# Laboratorio Semana 6 — Jueves 18 de Septiembre  

**Estudiante:** Kryssia Martínez  

## Repaso de Programación Orientada a Objetos  

### Primera Parte: Programación orientada a objetos con C++ (Clases y objetos)  

**Link del video:**  
[Programación orientada a objetos con C++](https://www.youtube.com/watch?v=fqvlklYvhJc&list=PLYVKm6dCj8SstdJHy0h7SRPF0L1coOZob)  

---

## Notas  

La **programación orientada a objetos (OOP)** es un paradigma de programación que se utiliza para resolver algunos de los problemas comunes en la programación de computadoras, como:  

- **Complejidad del software:**  
  En los programas grandes, la complejidad puede ser abrumadora. OOP ayuda a organizar el código en piezas pequeñas y manejables, los objetos, que se relacionan entre sí para formar un sistema complejo.  

- **Mantenimiento del software:**  
  Los programas cambian con el tiempo, y el mantenimiento del código puede ser costoso y propenso a errores. OOP ayuda a hacer cambios en el código más fáciles, ya que los objetos pueden ser modificados sin afectar a todo el sistema.  

- **Reutilización del código:**  
  En lugar de escribir código desde cero para cada nuevo programa, OOP permite reutilizar código existente. Los objetos pueden ser creados y reutilizados en diferentes programas, lo que ahorra tiempo y esfuerzo.  

- **Seguridad del software:**  
  OOP ayuda a aumentar la seguridad del software, ya que los objetos se aíslan entre sí y se controla el acceso a sus atributos y métodos.  

- **Abstracción y encapsulamiento:**  
  OOP permite la creación de abstracciones. No importa la implementación interna, sino su utilización.  

---

## Definiciones iniciales  

- **Clase:** Plantilla donde se definen atributos y métodos predeterminados de un objeto. Permite crear instancias fácilmente.  
  - **Atributos:** Peso, altura, edad, etc.  
  - **Métodos:** Acciones que el objeto puede realizar, por ejemplo, `ladrar`, `correr`, `caminar`.  

- **Objeto:** Instancia de una clase, con atributos y métodos que reaccionan a eventos.  

- **Método:** Algoritmo asociado a un objeto; ejecuta acciones o genera eventos.  

- **Propiedad o atributo:** Contenedor de datos asociado a un objeto o clase, visible según su nivel de acceso.  

---

## Definiciones adicionales  

- **Boilerplate:** Conjunto de líneas de código repetitivas que se usan como base.  
- **Instanciar:** Crear un objeto a partir de una clase, con sus atributos y métodos definidos.  

---

# Ejemplos parte 1 C++

## Ejemplo 1 — `Class.cpp`  

### Código  
![Código Ejemplo 1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE1Class.png)  

### Salida  
![Salida Ejemplo 1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE1Class.png)  

## Ejemplo 2 — `Area y volumen`  
- Se realizó un ejercicio con la misma base del ejemplo anterior pero ejecutado diferente, para mostrar la base y altura, se cambio la parte de instancia y se le asignaron valores al objeto utilizado.

 ### Código  
![Código Ejemplo 2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE2Boilerplate.png)  

### Salida  
![Salida Ejemplo 2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE2Boilerplate.png)  

## Ejemplo 3 — `Relacionado a la explicacion de Constructor y Destructor`

- Se explica un ejemplo para ver como funciona el constructor y destructor, en el video se realiza primero una impresion en la parte del constructor y otra en la parte del destructor. El destructor importa porque sirve para limpiar todo, se encarga de cerrar las puertas que dejamos abiertas.

 ### Código  
![Código Ejemplo 3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE3ConstruDestru.png)  

### Salida  
![Salida Ejemplo 3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE3ConstruDestru.png)  

## Ejemplo 4 — `Relacionado a Tipos de acceso en clases`

Tipos de acceso en clases

- public: Todas las demás clases y funciones pueden acceder a los elementos.

- private: No se puede acceder a los elementos fuera de la clase en la que están
declarados, excepto por clases y funciones amigas.

- protected: Los elementos son como los privados, excepto que las clases
derivadas pueden acceder a ellos.

- En el ejemplo de Animal.cpp se explica lo siguiente:
  - Hay una clase llamada animal que contiene 2 metodos y son de tipo publicos, cualquiera puede accederlos, al contrario de los privados que no se pueden acceder. Respecto al protegido no puedo usarlos si se encuentran protegidos, es decir en esa parte puedo usar uno que sea publico. Dentro de la clase se puede acceder a todo.  

 ### Código  
![Código Ejemplo 4](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE4Animal.png)  

### Salida  
![Salida Ejemplo 4](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE4Animal.png)  

## Ejemplo 5 — `¿ Se pueden pasar objetos como párametros a funcioines ?`
- Si se puede hacer, se explica mediante el ejemplo, tambien se le pueden pasar objetos. La funcion calcular promedio recibe 2 parametros, en este caso el promedio. Los objetos son Student 1 y Student 2.

 ### Código  
![Código Ejemplo 5](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE5ObPara.png)  

### Salida  
![Salida Ejemplo 5](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE5ObPara.png)  

## Ejemplo 6 — `¿ Y retornar objetos ?`

- En este ejemplo se muestra que si se pueden retornar ejemplos, como una string, un entero o un flotante. 

 ### Código  
![Código Ejemplo 6](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE6RetornarO.png)  

### Salida  
![Salida Ejemplo 6](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE6RetornarO.png)  

## Ejemplo 7 — `Retorno de objetos con archivos separados.`

- Se realiza otro ejemplo para retornar objetos pero de manera bonita, con archivos separados, se tiene persona.hpp, persona.cpp y su main.cpp . En el .hpp esta el constructor y se muestran las declaraciones, los metodos publicos y los argumentos que se reciben. En el .cpp va la implementacion, el constructor con la clase. En main se llama lo que se va a ejecutar, los metodos se encuentran presentes. De esa manera se separan archivos. 

 ### Archivo de persona.cpp 
![Código de persona.cpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE7personacpp.png)  

 ### Archivo de persona.hpp  
![Código de persona.hpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE7personahpp.png)  

 ### Archivo de main.cpp 
![Código de main.cpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE7mainpersona.png)  

### Salida  
![Salida Ejemplo 7](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE7persona.png) 

## Ejemplo 8 — `Ejercicio convertir un archivo en una implementación con headers para funciones y clases.`

- En este ejemplo se explica lo mismo que en el ejercicio 7, se debe separar el ejemplo con su respectivo header y las funciones y clases. Primero se muestra el codigo inicial y su salida de ejecucion. Luego se muestra la solucion, para esto cree 5 archivos, uno llamado Student.h, otro Student.cpp, Functions.h, Functions.cpp, main.cpp y la salida de la ejecucion, de esa manera se puede resolver el ejercicio


 ### Archivo del ejemplo inicial codigo y salida 
![Código y Salida del ejercicio.hpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8ejercicio.png  

### Archivo de Student.h
![Código de student.h](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8Studenth.png)  

### Archivo de Student.cpp
![Código de student.cpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8Studencpp.png)  

### Archivo de Functions.h
![Código de functions.h](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8Functionsh.png)  


### Archivo de Functions.cpp 
![Código de Functions.cpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8Functionscpp.png)  

### Archivo de main.cpp 
![Código de main.cpp](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE8maincpp.png)  

### Salida  
![Salida Ejemplo 8](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE8ejerciciomain.png) 

## Ejemplo 9  — `Sobrecarga de operadores.`
- La sobrecarga de operadores en C++ es una característica de la programación orientada a objetos que permite a los desarrolladores definir el comportamiento de los operadores del lenguaje para trabajar con objetos de una clase personalizada. Esto significa que los operadores como +, -, *, /, entre otros, pueden ser utilizados con objetos de una clase personalizada, y los resultados de estas operaciones pueden ser definidos por quien programa.
- En este ejemplo se muestra como se sobrecargan los operadores, por ejemplo con las fracciones

 ### Código  
![Código Ejemplo 9](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE9Sobrecarga.png)  

### Salida  
![Salida Ejemplo 9](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE9Sobrecarga.png)  

## Ejemplo 10  — `Herencia`
- La herencia es una de las características clave de la programación orientada a objetos en C++. Nos permite crear una nueva clase (clase
derivada) a partir de una clase existente (clase base). La clase derivada hereda las características de la clase base y puede tener características adicionales propias.
- El ejemplo de esta parte corresponde a la herencia, tiene una clase animal y se hereda el contenido de la clase base.

 ### Código  
![Código Ejemplo 10](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE10Herencia.png)  

### Salida  
![Salida Ejemplo 10](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE10Herencia.png)  

## Ejemplo 11 — `Sobreescritura de funciones en la herencia`
- Este ejemplo habla sobre como sobreescribir funciones en la herencia, de la clase base.

 ### Código  
![Código Ejemplo 11](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE11Sobreescritura.png)  

### Salida  
![Salida Ejemplo 11](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE11Sobreescritura.png)  

## Ejemplo 12 — `Miembros protegidos`

 ### Código  
![Código Ejemplo 12](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE12Miembros.png)  

### Salida  
![Salida Ejemplo 12](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE12Miembros.png)  

## Ejemplo 13 — `Modos de acceso al realizar herencia en C++`

- La herencia pública hace que los miembros públicos de la clase base sean públicos en la clase derivada, y los miembros protegidos de la clase base permanecen protegidos en la clase derivada.

- La herencia protegida hace que los miembros públicos y protegidos de la clase base estén protegidos en la clase derivada.

- La herencia privada hace que los miembros públicos y protegidos de la clase base sean privados en la clase derivada.

- Los miembros privados de la clase base son inaccesibles para la clase derivada.

- Para ejemplificar esta parte se agregan 3 ejemplos.

### Código Ejemplo 1 Class A
![Código Ejemplo 13.1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE13ClassA.png)  

### Salida  
![Salida Ejemplo 13.1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE13ClassA.png)  

### Código Ejemplo 2 Class Mamma
![Código Ejemplo 13.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE13ClassMamma.png)  

### Salida  
![Salida Ejemplo 13.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE13ClassMamma.png)  

### Código Ejemplo 3 Class Animal
![Código Ejemplo 13.3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE13ClassAnimal.png)  

### Salida  
![Salida Ejemplo 13.3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE13ClassAnimal.png)  

## Ejemplo 14 — `Funciones y clases amigas`
- La ocultacion de datos es un concepto fundamental de la programacion orientada a objetos. Restringe el acceso de miembros privados desde fuera de la clase. Del mismo modo, solo las clases derivadas pueden acceder a los miembros protegidos y no se puede acceder a ellos desde el exterior.

### Código ejemplo 1 Clases amigas
![Código Ejemplo 14.1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE14FCamigas.png)  

### Salida 
![Salida Ejemplo 14.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE14FCamigas.png)  

### Código ejemplo 2 Clases amigas 2
![Código Ejemplo 14.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE14FCamigas2.png)  

### Salida 
![Salida Ejemplo 14.3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE14FCamigas2.png)  

## Ejemplo 15 — `Funciones virtuales`
- Una función virtual es una función miembro en la clase base que esperamos redefinir en clases derivadas. Básicamente, se usa unafunción virtual en la clase base para garantizar que la función se invalide. Esto se aplica especialmente a los casos en los que un puntero de la clase base apunta a un objeto de una clase derivada.
- 
### Código ejemplo 
![Código Ejemplo 15](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 15](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png)  

### Segunda Parte: Programación orientada a objetos con Python 

**Link del video:**  
[Programación orientada a objetos con Python]([https://www.youtube.com/watch?v=fqvlklYvhJc&list=PLYVKm6dCj8SstdJHy0h7SRPF0L1coOZob](https://www.youtube.com/watch?v=2tFiuCcpJLI&list=PLYVKm6dCj8SsOz1BLqQcytvdR7276pFeU))  

---

## Notas
- La programación orientada a objetos es un paradigma de programación donde los problemas se modelan en forma de clases y objetos. El foco principal está en los datos (objeto) más que en el procedimiento o las funciones utilizadas para manipular esos datos.

- Un objeto es una representación abstracta de cosas y conceptos que encontramos en el mundo real, como empleados, organizaciones, automóviles, productos electrónicos, etc. Y una clase es un modelo para crear objetos.

- Por lo tanto, las clases son pequeños fragmentos de código reutilizable a partir de los cuales se pueden crear múltiples objetos. Esto
hace que los programas escritos con programación orientada a objetos sean fáciles de ejecutar, modificar y depurar. La programación orientada a objetos es muy útil para crear software grande y complejo.

- La característica principal de este modelo basado en objetos es la encapsulación, es decir, todo lo que el objeto necesita se encapsula
dentro de ese objeto. Esto incluye datos de objetos (variables y matrices) y los métodos y funciones que operan sobre ellos.

- Otros conceptos importantes de programación orientada a objetos incluyen herencia, abstracción, polimorfismo, etc.

 ¿Qué es un objeto?

- Una vez que se creado una clase, se puede crear objetos a partir de la clase. Un objeto es como una casa real o un automóvil real que se construye a partir del plano.
- Se pueden crear tantos objetos como se quiera de una clase. Por ejemplo, si tiene una clase llamada Empleado, se puede crear objetos empleado1, empleado2, ... , empleadoN.
  
¿Qué son los atributos?

- Estos son los datos o información asociada al objeto. En la clase Empleado que se ha descrito anteriormente, el nombre y el salario son los atributos de la clase ya que brindan la información requerida sobre los objetos.
- 
¿Qué son los métodos?

- Estos son los procedimientos y la lógica que se utilizan para manipular los datos o atributos del objeto. También se pueden utilizar
métodos para crear nueva información sobre ese objeto.

- En la clase Empleado, se ha incluido un metodo llamado calcular_bonus() para calcular el bono recibido por un empleado. Supongase que la bonificacion se calcula sumando el 0,1% del beneficio total de la empresa al 5% del salario de los empleados. Bonificación = (0,1% del beneficio de la empresa) + (5% del salario del empleado) Luego, la fórmula matemática necesaria para calcular esta cantidad se escribirá dentro del método calcular_bonus().


---
# Ejercicios parte 2 python

## Ejemplo 1 — `Clases`
- Una clase se considera como un blueprint (a design plan or other technical drawing) de objetos. Se puede pensar en la clase como un boceto (prototipo) de una casa. Contiene todos los detalles sobre los pisos, puertas, ventanas, etc. En base a estas descripciones construimos la casa. La casa es el objeto. Dado que se pueden hacer muchas casas a partir de la misma descripción, podemos crear muchos objetos de una clase.
- El ejemplo que se construyó es acerca de como crear una clase en python, atributos y variables. 

### Código 
![Código Ejemplo 1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png)  

## Ejemplo 2 — `Objetos`

### Código
![Código Ejemplo 2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 3 — `Clase bicicleta`

### Código
![Código Ejemplo 3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 3](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 4 — `OOP: Encapsulación`
- Se refiere a la ocultación de los detalles internos de un objeto y la exposición de una interfaz controlada para interactuar con él. Se logra mediante el uso de métodos y atributos en una clase para controlar el acceso a los datos internos del objeto. Los detalles internos de la implementación de un objeto se mantienen privados, y el acceso a ellos se realiza a través de métodos públicos, lo que promueve la seguridad y la integridad de los datos.

  1. Metodos Magicos:
      - Son métodos con nombres que comienzan y terminan con doble guion bajo . Son utilizados para realizar operaciones específicas en objetos en circunstancias particulares. Al definir métodos mágicos en una clase, se puede personalizar el comportamiento de los objetos en situaciones como la creación, la representación de string, la igualdad, etc.

2. Modificadores de Acceso:
    - Python no tiene modificadores de acceso tradicionales como "public", "private" o "protected" como otros lenguajes de programación, pero utiliza una convención para indicar la visibilidad de atributos y métodos. Por convención, los atributos o métodos que comienzan con un solo guión bajo se consideran "protegidos" y deben ser tratados como no públicos.
   
- Ejemplo de encapsulacion y modificadores de acceso:

### Código
![Código Ejemplo 4](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 4](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 5 — `OOP: Herencia`
- La nueva clase que se crea se conoce como subclase (clase secundaria o derivada) y la clase existente de la que se deriva la clase secundaria se conoce como superclase (clase principal o base).
- Ejemplo 1 de herencia:
### Código 
![Código Ejemplo 5.1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 5.1](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

- Ejemplo 2 de herencia:

### Código
![Código Ejemplo 5.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 5.2](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 6 — ` Herencia, sobreescritura de métodos`

### Código 
![Código Ejemplo 6](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 6](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 7 — ` Herencia, Método super`

### Código 
![Código Ejemplo 7](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 7](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 8 — ` Herencia, Múltiple`

### Código 
![Código Ejemplo 8](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 8](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 9 — ` Herencia, Multinivel`

### Código 
![Código Ejemplo 9](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 9](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 10 — ` Herencia múltiple y resolución de métodos`

### Código 
![Código Ejemplo 10](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 10](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 11 — ` Sobrecarga de operadores `

### Código 
![Código Ejemplo 11](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 11](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 12 — ` Sobrecarga de operadores de comparacion `

### Código 
![Código Ejemplo 12](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 12](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 

## Ejemplo 13 — ` Polimorfismo `
- Significa más de una forma. Es decir, una misma entidad (método, operador u objeto) puede realizar diferentes operaciones en diferentes escenarios. Permite la misma interfaz para diferentes objetos, por lo que se puede escribir código eficiente.

### Código 
![Código Ejemplo 13](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/CodigoE15virtuales.png)  

### Salida 
![Salida Ejemplo 13](https://raw.githubusercontent.com/krymar02/ie0417/main/semanas/semana6/Laboratorio/Ejerciciosoppc/SalidaE15virtuales.png) 
