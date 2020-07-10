## Analisis Comparativo
------

C comparado con JAVA
1. ¿El tipo es parte del lenguaje en algún nivel?
 En C los strings son representados por un arreglo de caracteres termianda en NULL (\0), el compilador entiende las comillas dobles y despues lo trabaja como el arreglo antes mencionado. En Java los strings son objetos de la clase String, se delimitan con comillas dobles y no es necesario declarar la creación del nuevo objeto.

2. ¿El tipo es parte de la biblioteca?

String no pertenece a la biblioteca standard de C, debemos incluir la libreria string.h, que también contiene funciones para trabajar con este tipo de dato. En Java, no hay que incluir ninguna librería, pero dentro de la clase String se encuentra la definición del tipo y los métodos asociados.

3. ¿Qué alfabeto usa?
C usa Unicode encodeado con UTF-8, Java usa Unicode con UTF-16

4. ¿Cómo se resuelve la alocación de memoria?
En C hay dos formas de alocar memoria, de forma estática, cuando se declaran variables, y de forma dinámica, que se resuelven en tiempo de ejecución con malloc.
La JVM divide la memoria en dos partes, el heap y el stack. Dentro del heap, hay una sección designada para strings literales llamada String Constant Pool. En cambio, si se declara un objeto String con el keyword 'New', se guarda en el heap, pero no en el SCP.


5. ¿El tipo tiene mutabilidad o es inmutable?
En C los Strings son mutables, a menos que se declaren como constantes, mientras que en en Java son inmutables.

6. ¿El tipo es un first class citizen?
En C no, ya que debemos incluir la biblioteca String.h para poder pasarlos como parámetro, en Java sí ya que se tratan de un objeto más.

7. ¿Cuál es la mecánica para ese tipo cuando se los pasa como argumentos?
En C, al pasar un string como argumento, realmente estamos pasando un puntero indicando la posición de memoria de el primer caracter de la cadena. En java pasamos una copa de la referencia al objeto.

8. ¿Y cuando son retornados por una función?
En C retornamos, nuevamente, el puntero al comienzo de la cadena, en java se devuelve una referencia al nuevo string.