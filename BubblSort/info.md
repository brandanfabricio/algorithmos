# Bubble Sort Algorithm

Bubble Sort es un algoritmo de ordenación sencillo que recorre repetidamente una lista, compara elementos adyacentes y los intercambia si están en el orden incorrecto. Este proceso se repite hasta que la lista esté ordenada. El algoritmo recibe su nombre porque los elementos más grandes "burbujearán" hacia la parte superior de la lista, mientras que los elementos más pequeños se moverán hacia la parte inferior.

## Funcionamiento de Bubble Sort
0
1. **Iteración inicial**: El algoritmo comienza recorriendo la lista desde el primer hasta el último elemento.
2. **Comparación y intercambio**: En cada paso, compara el elemento actual con el siguiente. Si el elemento actual es mayor que el siguiente, se intercambian.
3. **Repetición**: Este proceso de comparación e intercambio se repite para cada elemento de la lista.
4. **Optimización**: Con cada iteración completa de la lista, el mayor de los elementos sin ordenar se coloca en su posición correcta al final de la lista. Por lo tanto, en cada iteración posterior, la longitud efectiva de la lista disminuye en uno.
5. **Condición de parada**: El algoritmo continúa iterando hasta que no se realicen más intercambios en una iteración completa, indicando que la lista está ordenada.

## Pseudocódigo de Bubble Sort

```plaintext
procedimiento deLaBurbuja(a0,a1,a2,a3,...,a(a-1))
    para i <- 1 hasta n-1 hacer
        para j <- 0 hasta n-1 hacer 
            si a(j)>a(j+1) entinces 
                aux <- a(j)   
                a(j)<- a(j+1)
                a(j+1)<- aux
            fin si
        fin para 
    fin para 
fin procedimiento
