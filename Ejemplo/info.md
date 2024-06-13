# Ejemplos de **Algoritmos**

## Algoritmo de **Euclides**

Un Metodo eficaz par encontrar el maximo común divisor fue descubierto
por los antoguos griegos hace mas de dos mil años: se denomina el *algoritmo de Euclides*
por que aparecio escrito detalladamente en el damoso tratado *Los Elementos*, de Euclides.
 El método de Eucñides está basado en el gecho de que si *u* es mayor a *v*, entonces el máximo comuún divisor de *u* y *v* es el mismo que el de *v* y *u*-*v*.

 ```plaintext
procedimiento mcd(int u, int v)
    int t;
    mientras u > v 
      si u < v 
        t <- u
        u <- v
        v <- t
      fin si  
      u <- u -v
    fin mientras 
    retorna v 
fin procedimiento
 ```
