# Pila

- Una pila (stack) es un tipo abtracto de data *LIFO* (lastin firstOut).
- Es un tipo de dato que soporta operaciones de *Inserción y eliminación* de elementos de un conjunto.
- Normalmente se usa en aplicacion en las uqe se necesita recuperar informacion de orden inversos con entrado.
- cada vez que llegamos elemento, se coloca arriba de los que ya estan acumulados, yse cuando se van atendiendo se toma el que se entra en la parte superior.

## Operaciones

- Create() -> Crear Pila
- Clean() -> Borra rodo los elementos
- IsEmpty() -> Verifica si la pila esta vacia
- Push() -> Ingresa elementos al tope de la pila
- Pop() -> Retira el elemento superior

## Complejidad Temporar

| Operación | Orden |
|-----------|-------|
|  Create   | O(1)  |
|  Clean()  | O(n)  |
|  IsEmpty()| O(1)  |
|  Push()   | O(1)  |
|  Pop()    | O(1)  |
|  Top()    | O(1)  |

 ```Pseudocódigo
Pila:
 int tope;
 Lista elemento;

Pila Create()
    Pila p
    Lista lista;
    p.tope = 0;
    p.elemento = lista1;
    return p;

bool IsEmpty(Pila p)
    if(p.tope == 0)
        return true
    return false

void Push(Pila p, int x) 
    p.tope = p.tope + 1
    p.elemento[p.tope] = x

int Pop(Pila p)
    if(IsEmpty(p))
        Print ('error') 
        retrun 1;
    else
        int aux = p.elemento[p.tope]
        p.elemento[p.tope] = null;
        p.tope = p.tope -1
        return aux
int Top(Pila p)
    if(IsEmpty(p))
        Print ('error') 
        retrun 1;
    else
        return p.elemento[p.tope]
    

 ```
