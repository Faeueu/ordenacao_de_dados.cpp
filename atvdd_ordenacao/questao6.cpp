#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int n){
    for(int i=0; i<n-1; i++){
        for(int j =0; j<n-i; j++){
            if(vetor[j] > vetor[j+1]){

                int aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

int main()
{
    int tabela[] = {10, 8, 7, 0};
    int tamanho = sizeof(tabela) / tabela[0];

    cout << "Tabela original: ";
    for(int i=0; i<tamanho; i++){
        cout << tabela[i] << " ";
    }
    cout << endl;

    bubbleSort(tabela, tamanho);

    cout << "Tabela em ordem crescente: ";
    for(int i=0; i<tamanho; i++){
        cout << tabela[i] << " " << endl;
    }
    cout << "Sera feita 6 comparacoes e 6 trocas para a ordenacao da tabela";

    return 0;
}