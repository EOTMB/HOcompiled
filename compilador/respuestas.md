#Respuestas
#1  
- Luego de realizar el preprocesamiento, espero encontrar el codigo fuente con las directivas # resueltas y agregadas , de manera tal que pueda ser interpretado por la primer etapa del compilador gcc

- Luego de realizar la compilacion a Assembler el compilador deberia devolver el archivo .asm equivalente en instrucciones de este lenguaje para que pueda ser traducido a lenguaje de maquina

- Luego de realizar la compilacion a Lenguaje de maquina espero que el compilador genere el archivo .o correspondiente al objeto binario con los simbolos correspondientes a cada funcion y variable

- Luego de realizar el linkeo, espero que el compilador devuelva un archivo ejecutable que pueda ser utilizado por el sistema operativo

#2
El preprocesador declara todas las referencias a funciones, variables y definiciones de tipos de otras librerias incluidas en los headers de manera que el linkeador sepa a que objetos debe hacer referencia en el ultimo paso de la creacion del ejecutable. Las directivas # que quedan en el archivo marcan las lineas de entrada y salida a cada archivo realizadas en este paso

#3
Las funciones en el codigo Assembler estan identificadas por su nombre seguido de el tag .LFB. Las funciones en este archivo son main y add_numbers 

#4
Los simbolos en este objeto indican las variables y funciones existentes dentro del objeto, con la posiciones de memoria del comienzo de donde estan almacenadas. Este objeto tiene 3 simbolos: add_numbers y main, con el descriptor T, indicando que se encuentran en la seccion de texto(codigo), lo que significa que son funciones. El hecho de que la T este en mayuscula indica que se puede acceder a las funciones desde fuera del objeto. El simbolo restante, printf, tiene U como descriptor, indicando que es indefinido (Undefined), lo que indica que se define fuera del archivo y se definira luego del linkeo

#5
Los simbolos del ejecutable incluyen variables y funciones relativas al sistema operativo, de manera que este pueda ejecutar las instrucciones y acceder a las variables definidas en el mismo. Las posiciones de memoria de los ojetos previos cambian, las funciones definidas en librerias estaticas pasan de U al tipo correspondiente y las funciones dinamicas aparecen aun sin definir pero con la referencia necesaria para que puedan ser alcanzadas


