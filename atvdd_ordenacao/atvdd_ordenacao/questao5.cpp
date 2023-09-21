#include <iostream>
using namespace std;

void quickSort(int vetor[], int esquerda, int direita){
    int i = esquerda;
    int j = direita;
    int pivo = vetor[(esquerda + direita)/2];

    while(i <= j){

        while (vetor[i] < pivo)
        {
            i++;
        }

        while (vetor[j] > pivo)
        {
            j--;
        }
        
        if(i <= j){
            swap(vetor[i], vetor[j]);
            i++;
            j--;
        }
    }

    if(esquerda < j){
        quickSort(vetor, esquerda, j);
    }
    if(i < direita){
        quickSort(vetor, i, direita);
    }

}

int main()
{
    int vetor[30];

    cout << "Digite 30 numeros: " << endl;
    for(int i=0; i<30; i++){
        cin >> vetor[i];
    }

    quickSort(vetor, 0, 29);

    cout << "Ordenacao em ordem crescente: " << endl;
    for(int i=0; i<30; i++){
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}