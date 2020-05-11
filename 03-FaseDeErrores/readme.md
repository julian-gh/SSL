Julián Gonzalez Heredia, 10/05/2020

1 - hello2.c

```c
#include <stdio.h>

int/*medio*/main(void){
    int i=42;
    prontf("La respuesta es %d\n");
```

2 - Preprocesamiento de  Hello2.c

- $ cpp hello2.c -o hello2.i
Preprocesa hello2.c y vuelca el output a hello2.i. Agrega cientos de lineas que se correposnden al #include, y elimnó el comentario del código restante. Esperaba algun error, así que escribí un hello.c correcto, lo preprocesé y corrí un diff.

- $ diff hello2.i hello.i
La única diferencia que arrojó estaba en las líneas prontf/printf y en la inclusión de la llave final. El preprocesador (como se esperaba), reemplazo el #include y eliminó el comentario de hello2.c, que yo había eliminado en hello.c.

3 - hello3.c

```c
int printf(const char *s, ...);
        
int main(void){
    int i=42;
    prontf("La respuesta es %d\n");
```

4 - Semantica de la firma de printf

Se está declarando el prototipo de una función de nombre printf, que devuelve un entero, y recibe, como minimo un puntero mutable a un caracter/string inmutable, más una cantidad variable de argumentos.

5 - Preprocesamiento de hello3.c

- $ cpp hello3.c -o hello3.i
Preprocesa hello3.c. Esta vez solo agrega las siguientes lineas: 

- $ diff hello3.c hello.i arroja esta diferencia:

```c
> # 1 "hello3.c"
> # 1 "<built-in>"
> # 1 "<command-line>"
> # 1 "hello3.c"
```
No hubo ningún include así que no agrega ninguna librería.

6 - Compilación de hello3.i

$ gcc -S hello3.i
Se genera hello3.s, con una sola línea designando el archivo de origen. Arroja un warning por la declaración implícita de prontf y un error 'error: expected declaration or statement at end of input', por la llave de cierre faltante.

7 - hello4.c

```c
int printf(const char *s, ...);
        
int main(void){
    int i=42;
    prontf("La respuesta es %d\n");
}   
```

$ gcc -S hello4.c

8 - Análisis de hello4.s

No está la definición de prontf, de modo que se la llama y no hace nada. 

9 - Ensamblado de hello4.s

$ as -o hello4.o hello4.s

10 - Vinculación de hello4.o

$ ld -o hello4.exe hello4.o ...librerias...

No pude encontrar la forma de linkear la libreria estandar. De todas formas, correr el comando sin agregar ninguna librería devuelve que que hay una referencia indefinida a prontf.

11 - hello5.c

```c
int printf(const char *s, ...);
        
int main(void){
    int i=42;
    printf("La respuesta es %d\n");
}
```

$ gcc hello5.c -o hello5
$ ./hello5

El ejecutable ahora se genera sin problemas, pero el output es 'La respuesta es 4200704'. Esto se debe a que no estamos dandole a printf la variable que debe imprimir en lugar de '%d'.

13 - hello6.c

```c
int printf(const char *s, ...);
        
int main(void){
    int i=42;
    printf("La respuesta es %d\n", i);
}
```

$ gcc hello6.c -o hello6
$ ./hello6

Ahora el resultado es el esperado. El ejecutable se genera sin problemas, y el output es el correcto, 'La respuesta es 42'

14 - hello7.c

 ```c
int main(void){
    int i=42;
    printf("La respuesta es %d\n", i);
}
```
$ gcc hello7.c -o hello7
$ ./hello7

15 - Explicación    
    
Se avisa que printf se esta declarando implícitamente (falta la    declaración), tecnicamente invocarla implica un comportamiento indefinido. C automaticamente genera una declaración de printf que no recibe argumentos. De todas formas, la implementación se encuentra porque el compilador linkea la librería de C.


