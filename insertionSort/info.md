# insertion sort Algorithm

El algoritmo de ordenamiento por inserción es un algoritmo de fácil aplicación que permite el ordenamiento de una lista.
Su funcionamiento consiste en el recorrido por la lista seleccionando en cada iteración un valor como clave y compararlo con el resto insertándolo en el lugar correspondiente.

## Pseudocódigo de Insertion Sort

```plaintext
procedimiento OrdenamientoPorInsercion(a0, a1, a2, ..., a(n-1))
    para i <- 1 hasta n-1 hacer
        clave <- a(i)
        j <- i - 1
        mientras j >= 0 y a(j) > clave hacer
            a(j + 1) <- a(j)
            j <- j - 1
        fin mientras
        a(j + 1) <- clave
    fin para
fin procedimiento

```
