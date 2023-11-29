![image](https://github.com/A01027715/TC1031-Integral-A01027715/assets/117248297/0cf49121-ace4-4f23-bf15-05b88c5a0047)
# TC1031 - Integral - A01027715 - Ulises Orlando Carrizalez Lerín
Como proyecto de TC1031 realice el siguiente trabajo. Este es un sistema le facilita búsqueda y agregado de vuelos de salida del Aeropuerto Internacional Benito Juarez Ciudad de Mexico a los empleados, El sistema primero recibe un .csv el cual leerá toda la información y guardar los datos de este en objetos llamados “Vuelos”. Después el usuario recibirá una bienvenida al sistema y se les desplegara un menú con tres opciones, en la primera se le solicitara el nombre del destino que busca, el sistema usa búsqueda de string para encontrar los vuelos con los que concuerda en destino final y los guarda en un vector, después se le pedirá al usuario como quiere ordenados los resultados de la búsqueda, por hora o por Aerolínea, finalmente el programa ordena los vuelos disponibles y se los imprime al usuario. La segunda opción le permite al usuario agregar los datos de un nuevo vuelo únicamente respondiendo las preguntas solicitadas, al finalizar las preguntas el programa escribir el .csv con el nuevo vuelo ya registrado. Por último la opción tres apaga el sistema de búsqueda.

## Funcionalidad
- Necesita que las respuestas del destino se hagan en MAYUSCULAS.
- Responder las preguntas en el formato solicitado por el programa.

## Consideraciones
- El programa puede correr en la terminal de programación y en la consola. Esta hecho con c++ standard por lo que corre en todos los sistemas operativos deben de correr el programa, pero no es seguro que funcione en todos, solo confirmo con Windos.
- El main se llama "main.cpp", tambien es importante descargar el .csv "AeroMEX.csv" .h de vuelos y serch.
- ES IMPORTANTE El main.cpp debe de ser editado a la hora de las decarga en la linea 24 se debe de cambiar la direccion del archivo a la ubiacion en la que used lo haya guardad, si no hace esto el progrma no sera capas de leer el .csv.
- AutoMain.cpp es un archivo de c++ que tiene programado un caso de uso y no es necesario la interacción del usuario, únicamente que inicie el programa.

# SICT0302B: Toma decisiones
## Selecciona y usa una estructura lineal adecuada al problema:
Por su simplicidad y características utilice un linked list para guardar la información sin filtrar de todos los vuelos en objetos que cuentan con todos los datos. El linked list es muy sencillo, es una serie de nodos interconectados por apuntadores que en este caso contienen un objeto y nosotros navegamos a treves de ellos por medio de sus conexiones y para agregar un nuevo valor únicamente agregamos un nuevo nodo con el objeto y lo conectamos con el nodo final. Esto lo convierte en una muy buena opción debido a que no existe una característica especifica que nos permita diferenciar entre los vuelos, por lo que tendremos que revisar de uno por uno los vuelos que llevan al destino esperado, los que al final con una función los guarda en un vector para posteriormente ser ordenandos.

## Selecciona un algoritmo de ordenamiento adecuado al problema:
Para ordenar los datos resultantes escogí el bubble sort, esto debido a su simplicidad, ya que los vuelos recopilados de una sola búsqueda no son muchos, por lo que no es necesario utilizar algún algoritmo demasiado complicado para este caso, este funciona recibiendo el vector con los objetos de vuelos recopilados y un numero integro entre 1 y 2, 1 si lo quiere ordenado por hora y 2 si lo quiere ordenado por aerolínea. Con esta información realiza el ordenamiento revisando dato por dato si es menor o mayor y realizando los cambios de lugar.

# SICT0301B: Evalúa los componentes
## Presenta Casos de Prueba correctos y completos para todas las funciones y procedimientos del programa:
Se realizo un caso de prueba automatico llamado "AutoMain.cpp",donde se prueban las funciones de:

- Lista ligada de Vuelos.

- Ordenamiento de Vuelos.

Pero personalmente le recomiendo probar el "main.cpp", nada mas antes de realizar las prubeas revice "Búsqueda de vuelos en el Aeropuerto Internacional Benito Juárez Ciudad de México Información de Salidas.xlsx" para saber que vuelos estan disponibles.

## Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes:

Ordenamiento:
- ordenaBurbuja(vector<T>, int): O(n^2) esto debido a que utliza 2 for anidados.

Linked list:
-  insertion(T): O(n) esto debido al uso de un while.
-  search(string): O(n) esto debido al uso de un while.
-  valorT(): O(n) esto debido al uso de un while.
-  getsize(): O(1) esto debido a que esta funcion solo debuelbe un valor.
-  valor(int): O(n) esto debido al uso de un while.

Vuelos:
- ASCII (string letter): O(L) esto debido a que depende de la longitud de un string.
- Primer(vector<int> v): O(1) esto debido a que esta funcion solo debuelbe un valor.
- SHoraN(string letter): O(L) esto debido a que depende de la longitud de un string.
- NDestinoN (vector<Vuelo> arr): O(n) sto debido al uso de un for.
- NAeroLineaN (vector<Vuelo> arr): O(n) sto debido al uso de un for.
- NHoraN (vector<Vuelo> arr): O(n) sto debido al uso de un for.

# SICT0303B: Implementa acciones científicas
## Implementa mecanismos para consultar información de las estructuras correctos y útiles dentro de un programa:
El programa permite al usuario realizar su búsqueda por nombre de destino y le permite ordenar las opciones de vuelo por hora o por aerolínea que realiza el vuelo.

## Implementa mecanismos de lectura de archivos correctos y tiles dentro de un programa:
Los vuelos están registrados en el archivo llamado AeroMEX.csv de donde se leen al iniciar el programa.

## Implementa mecanismos de escritura de archivos correctos y útiles dentro de un programa:
El programa como está destinado a los empleados del aeropuerto, tiene la opción de agregar nuevos vuelos, en esta opción se le solicita al usuario agregar los datos del vuelo con los cuales se  creara el nuevo vuelo y lo exportara al archivo ya existente de vuelos llamado "AeroMEX.csv".



