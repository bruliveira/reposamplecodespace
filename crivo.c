#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 1000 

// Este programa imprime uma lista de todos os números primos 
// menores que N. 
// O método usado é o do crivo de Eratóstenes.

int main (){
    int i, j; 
    int *a;
    
    a = malloc(N * sizeof (int));
    
    for (i = 2; i < N; i++) 
       a[i] = 1;

    for (i = 2; i <= (N/2) + 1; i++)
       if (a[i] == 1) {
          for (j = i+i; j <= N; j+=i) 
            a[j] = 0;
       }

    for (i = 1; i <= N; i++) 
       if(a[i] == 1){
           printf("Teste: %d\n", i);
       }

    return 0;
}