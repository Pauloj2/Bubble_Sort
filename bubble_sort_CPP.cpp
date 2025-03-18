#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    int aux;
    for(int i=0; i<n-1; i++){
        for(int j=0; j< n-i-1; j++){
            if(arr[j] > arr[j+1]){
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

int main(){

    int arr[10] = {40,1,23,20,67,44,9,18,0,99};
    int n = 10;

    cout << "Vetor antes de ordenar \n";

    //Imprime o vetor
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n\n";

    //Aqui e feito a chamada da função
    bubbleSort(arr, n);

    cout << "Vetor depois de ordenar com Bubble Sort \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";

return 0;
}

