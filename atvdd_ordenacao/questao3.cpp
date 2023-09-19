#include <iostream>
#include <string>

using namespace std;

void selectionSort(string nomes[], int quantidade){
    for(int i=0; i<quantidade-1; i++){
        int menorIndex = i;
        for(int j=i+1; j<quantidade; j++){
            if(nomes[j].length() < nomes[menorIndex].length()){
                menorIndex = j;
            }
        }
        swap(nomes[i], nomes[menorIndex]);
    }
}

int main()
{
    int quantidade;
    
    cout << "Digite a quantidade de nomes para ordenar: ";
    cin >> quantidade;

    string nomes[quantidade];
    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o nome #" << i + 1 << ": ";
        cin >> nomes[i];
    }

    selectionSort(nomes, quantidade);

    cout << "Nomes ordenados: \n";
    for(int i=0; i<quantidade; i++){
        cout << nomes[i] << " ";
    }

    return 0;
}