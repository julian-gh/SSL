# Definiciones matemáticas

## GetLength
---------

** GetLength(): ε* -> N **

- Dominio: ε* 
- Codominio: N<sub>0</sub> 
- Ej:
  - GetLength("") -> 0
  - GetLength() -> 0
  - GetLength("Julian") -> 6
  

## IsEmpty
---------

** IsEmpty(): ε* -> {false, true} **
- Dominio: ε*
- Codominio: {false, true} 
- Ej:
  - GetLength("") -> 0
  - IsEmpty() -> 1
  - IsEmpty("Julian") -> 0
  

## toPower
---------
** toPower(): ε* x N<sub>0</sub> -> ε* **
- Dominio: ε* x N<sub>0</sub>
- Codominio: ε*
- Ej:
  - toPower("julian", 1) -> "julian"
  - tpPower("julian", 0) -> ""
  - tpPower("julian", 2) -> "julianjulian"


## SubString
** SubString(): ε* x N<sub>0</sub> x N<sub>0</sub> -> ε* **
- Dominio: ε* x N<sub>0</sub> x N<sub>0</sub>
- Codominio: ε* 
- Ej:
  - SubString("julian", 0, 3) -> "ju"
  - SubString("julian", 0, 5) -> "juli"
  - SubString("julian", 0, 0) -> ""