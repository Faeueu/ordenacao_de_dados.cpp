#include <iostream>
using namespace std;

void selectionSort(int vetor[], int tamanho){
    for(int i=0; i<tamanho-1; i++){
        int menorIndex = i;
        for(int j=i+1; j<tamanho; j++){
            if (vetor[j] < vetor[menorIndex]){
                menorIndex = j;
            }
        }
        swap (vetor[i], vetor[menorIndex]);
    }
}

int main()
{
    int vetor[] = {64, 25, 12, 22, 11};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    cout << "Lista original: ";
    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    selectionSort(vetor, tamanho);

    cout << "Lista ordenada: ";
    for(int i=0; i<tamanho; i++){
        cout << vetor[i] << " ";
    }
    cout << endl; 
    cout << "Metodo de isercao, alternativa B";

    return 0;
}