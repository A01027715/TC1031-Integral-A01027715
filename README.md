# TC1031 - Integral - A01027715 - Ulises Orlando Carrizalez Lerín
Como proyecto de TC1031 realice el siguiente trabajo. Este es un sistema de búsqueda de vuelos de salida del Aeropuerto Internacional Benito Juarez Ciudad de Mexico, El sistema primero recibe un .csv el cual leerá toda la información y guardar los datos de este en objetos llamados “Vuelos”. Después el usuario recibirá una bienvenida al sistema y se le solicitara el nombre del lugar al que quiere que lo lleve el avión, el sistema usa búsqueda de string para encontrar los vuelos con los que concuerda en destino final y guardarlos en un vector, después se le pedirá al usuario como quiere ordenados los  resultados de la búsqueda, por hora o por Aerolínea, finalmente el programa ordena los vuelos disponibles y se los imprime al usuario.

## Funcionalidad
- Necesita que las respuestas se hagan en mayuscula
- Por falta de ideas me falto la parte final del codigo no dio tiempo de ser completada.

## Consideraciones
- El programa puede correr en la terminal de programación y en la consola. Esta hecho con c++ standard por lo que corre en todos los sistemas operativos deben de correr el programa, pero no es seguro que funcione en todos, solo confirmo con Windos.
- El main se llama "main.cpp", tambien es importante descargar el .csv "AeroMEX.csv" .h de vuelos y serch.
- ES IMPORTANTE El main.cpp debe de ser editado a la hora de las decarga en la linea 24 se debe de cambiar la direccion del archivo a la ubiacion en la que used lo haya guardad, si no hace esto el progrma no sera capas de leer el .csv.
