Julián Gonzalez Heredia, 27/04/2020

```
//HelloWorld.c
#include <stdio.h>

int main(void) 
{
    printf("Hello world!\n");
    return 0;
}```

```
//HelloWorld.cpp
#include <iostream>

int main(void) 
{
    std:cout << "Hello World!\n"<<;
    return 0;
}
```


| Diferencias         | C                                                                          | C++                                 | Categoría  |
|---------------------|----------------------------------------------------------------------------|-------------------------------------|------------|
| Libreria de IO      | stdio.h                                                                    | iostream                            | Léxica     |
| -                   | -                                                                          | -                                   | Sintáctica |
| Funciones de salida | printf inserta formateado en algun stream y devuelve caracteres insertados | cout inserta en el stream de salida | Semántica  |


| Similitudes                              | Descripción                                                                                            | Categoría  |
|------------------------------------------|--------------------------------------------------------------------------------------------------------|------------|
| #include, main, int, void, return, {}, ; | Todas palabras compartidas por los dos lenguajes                                                       | Léxica     |
| Misma estructura                         | Comparten la misma estructura, importan una librería,  definen la función main, imprimen y retornan 0. | Sintáctica |
| Mismo significado                        | Todas estas palabras comparten su significado en ambos  lenguajes                                      | Semántica  |

