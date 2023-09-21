#include <iostream>
#include <string>

using namespace std;

void insertionSort(string nomes[], int quantidade) {
    for (int i = 1; i < quantidade; i++) {
        string novoNome = nomes[i];
        int j = i - 1;
        
        while (j >= 0 && nomes[j] > novoNome) {
            nomes[j + 1] = nomes[j];
            j--;
        }
        
        nomes[j + 1] = novoNome;
    }
}


int main()
{
    int quantidade;
    cout << "Digite a quantidade de nomes: ";
    cin >> quantidade;
    

    string nomes[quantidade];
    
    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o nome #" << i + 1 << ": ";
        cin >> nomes[i];
    }
    
    insertionSort(nomes, quantidade);
    
    cout << "Nomes ordenados: ";
    for (int i = 0; i < quantidade; i++) {
        cout << nomes[i] << " ";
    }
    
    return 0;
}