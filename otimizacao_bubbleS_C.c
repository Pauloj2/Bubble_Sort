#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int vetor[], int n){

    int aux, trocou;

    for(int i=0; i<n - 1; i++){
        trocou = 0;
        for(int j=0; j<n-i-1; j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
                trocou = 1;
            }
        }
        if(trocou == 0) break;
    }
}

void imprimir(int vetor[], int n){

    for(int i=0; i<n; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main(){

    int vetor[10] = {3,5,8,1,9,2,4,7,0,6};
    int n = 10;

    printf("Vetor antes de ordenar \n");
    imprimir(vetor, n);

    printf("\n");

    //Aqui e feito a chamada da função
    bubble_sort(vetor, n);

    printf("Vetor depois de ordenar com Bubble Sort \n");
    imprimir(vetor, n);

return 0;
}
