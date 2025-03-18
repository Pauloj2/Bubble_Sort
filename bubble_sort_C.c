#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int vetor[], int n){
    int aux;
    for(int i=0; i<n - 1; i++){
        for(int j=0; j<n-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main(){

    int vetor[10] = {3,5,8,1,9,2,4,7,0,6};
    int n = 10;

    printf("Vetor antes de ordenar \n");

    //Imprime o vetor
    for(int i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n\n");

    //Aqui e feito a chamada da função
    bubble_sort(vetor, n);

    printf("Vetor depois de ordenar com Bubble Sort \n");
    for(int i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

return 0;
}
