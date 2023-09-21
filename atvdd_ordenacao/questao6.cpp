#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int n){
    for(int ult=0; ult<n-1; ult++){
        for(int i=0; i<n-ult-1; i++){
            if(vetor[i] > vetor[i+1]){
                swap (vetor[i], vetor[i+1]);
            }
        }
    }
}

int main()
{
    int tabela[] = {10, 8, 7, 0};
    int tamanho = sizeof(tabela) / sizeof(tabela[0]);

    cout << "Tabela original: ";
    for(int ult=0; ult<tamanho; ult++){
        cout << tabela[ult] << " ";
    }
    cout << endl;

    bubbleSort(tabela, tamanho);

    cout << "Tabela em ordem crescente: ";
    for(int ult=0; ult<tamanho; ult++){
        cout << tabela[ult] << " ";
    }
    cout << endl;

    return 0;
}