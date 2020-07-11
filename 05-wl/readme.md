## 1 - Árboles

### 1

    b) Dibujar el árbol de expresión para la inicialización de los contadores: nl = nw = nc = 0.

![Arbol 1b](images/arbol-1b.png)

    c)  Dibujar el árbol de expresión para la expresión de control del segundo if: c == ' ' || c == '\n' || c == '\t'.

![Arbol 1b](images/arbol-1c.png)

### 2 - Máquinas de estado

    a)Describir en lenguaje dot [DOT2015] y dentro del archivo wl.gv la
    máquina de estado que resuelve el problema planteado
![Grafo](images/graph1.png)

    b)Formalizar la máquina de estados como una n-upla, basarse en el Capítulo #1 del Volumen #3 de [MUCH2012].

    Tenemos una 5-upla, A=(Q, Σ, δ, A, F), donde:
    Q = { IN, OUT }, conjunto de posibles estados,
    Σ = {'a',...,'z','A',...,'Z',' ','\n','\t','\0','.',',',':',';'} alfabeto que comprende,
    δ = Conjunto de funciones de transición, de tipo Q x Σ => Q, determinando un estado y un caracter leído, pasamos a un estado.

|     | a...z,A...Z | ' ',\t,\n,\o... |
| --- | ----------- | --------------- |
| IN  | IN          | OUT             |
| OUT | IN          |                 |

    A = Acciones que puede realizar. Recibe una terna (EstadoInicial, Transicion, EstadoFinal) y devulelve una acción. En este caso las acciones son imprimir el caracter leído o un '\n'.

| Terna de Salida          | Acción      |
| ------------------------ | ----------- |
| (IN; a...z, A...Z; IN)   | putchar(c)  |
| (IN; ' ', \t,\n...; OUT) | putchar(\n) |
| (OUT; a...z, A....Z; IN) | putchar(c)  |

    I = OUT, Estado inicial.


### 3 - Implementaciones

    a.ii)