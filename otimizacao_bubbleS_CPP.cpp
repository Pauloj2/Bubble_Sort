#include <iostream>
#include <algorithm>

using namespace std;

//Função para ordenar usando bubble sort
void bubbleSort(int arr[], int n){
    bool trocou;
    for(int i=0; i<n-1; i++){
        trocou = false;
        for(int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                std::swap(arr[j], arr[j + 1]);
                trocou = true;
            }
        }
        if(!trocou) break;
    }
}

void imprimir(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[10] = {40,1,23,20,67,44,9,18,0,99};
    int n = 10;

    cout << "Vetor antes de ordenar \n";

    imprimir(arr, n);

    cout << "\n";

    //Aqui e feito a chamada da função
    bubbleSort(arr, n);

    cout << "Vetor depois de ordenar com Bubble Sort \n";
    imprimir(arr, n);

return 0;
}


