![image](https://github.com/A01027715/TC1031-Integral-A01027715/assets/117248297/0cf49121-ace4-4f23-bf15-05b88c5a0047)
# TC1031 - Integral - A01027715 - Ulises Orlando Carrizalez Lerín
Como proyecto de TC1031 realice el siguiente trabajo. Este es un sistema le facilita búsqueda y agregado de vuelos de salida del Aeropuerto Internacional Benito Juarez Ciudad de Mexico a los empleados, El sistema primero recibe un .csv el cual leerá toda la información y guardar los datos de este en objetos llamados “Vuelos”. Después el usuario recibirá una bienvenida al sistema y se les desplegara un menú con tres opciones, en la primera se le solicitara el nombre del destino que busca, el sistema usa búsqueda de string para encontrar los vuelos con los que concuerda en destino final y los guarda en un vector, después se le pedirá al usuario como quiere ordenados los resultados de la búsqueda, por hora o por Aerolínea, finalmente el programa ordena los vuelos disponibles y se los imprime al usuario. La segunda opción le permite al usuario agregar los datos de un nuevo vuelo únicamente respondiendo las preguntas solicitadas, al finalizar las preguntas el programa escribir el .csv con el nuevo vuelo ya registrado. Por último la opción tres apaga el sistema de búsqueda.

## Funcionalidad
- Necesita que las respuestas del destino se hagan en mayuscula.
- Responder las preguntas en el formato solicitado por el programa.

## Consideraciones
- El programa puede correr en la terminal de programación y en la consola. Esta hecho con c++ standard por lo que corre en todos los sistemas operativos deben de correr el programa, pero no es seguro que funcione en todos, solo confirmo con Windos.
- El main se llama "main.cpp", tambien es importante descargar el .csv "AeroMEX.csv" .h de vuelos y serch.
- ES IMPORTANTE El main.cpp debe de ser editado a la hora de las decarga en la linea 24 se debe de cambiar la direccion del archivo a la ubiacion en la que used lo haya guardad, si no hace esto el progrma no sera capas de leer el .csv.
- AutoMain.cpp es un archivo de c++ que tiene programado un caso de uso y no es necesario la interacción del usuario, únicamente que inicie el programa.

## Estructura de datos
Utilizamos por su simplicidad y características un linked list para guardar la información sin filtrar de todos los vuelos.
El linked list es muy sencillo, es una serie de nodos interconectados por apuntadores que en este caso contienen un objeto y nosotros navegamos a treves de ellos por medio de sus conexiones y para agregar un nuevo valor únicamente agregamos un nuevo nodo con el objeto y lo conectamos con el nodo final.

## Reflexión
Este programa es uno relativamente sencillo, únicamente lee un archivo csv. los datos recopilados los convierte en objetos "Vuelos" y los agrega a una linked list, después despliega una interfaz con 2 opciones, una busca los vuelos en la linked list, primero los busca por destino y luego los ordena por hora o por aerolínea. la otra opción es agregar otro vuelo, este despliega una serie de preguntas para conseguir los datos del vuelo, rescribe el .csv con los vuelode de la linked list, agrega los datos del nuevo vuelo al archivo .csv y crea un objeto que agrega a la linked list, de esta manera mantenemos tanto el archivo actualizado con el nuevo vuelo y la lista para futuras busqueda y nos evitamos otra lectura de todo el .csv.
