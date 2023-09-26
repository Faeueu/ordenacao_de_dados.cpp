#include <iostream>
#include <string>

using namespace std;

void merge(string str, int esquerda, int meio, int direita){
    int i,j,k;
    int n1 = meio - esquerda +1;
    int n2 = direita - meio;

    string leftSubarray = str.substr(esquerda, n1);
    string rightSubarray = str.substr(meio + 1, n2);

    i = 0;
    j = 0;
    k = esquerda;

    while (i<n1 && j<n2){
        if(leftSubarray[i] <= rightSubarray[j]){
            str[k] = leftSubarray[i];
            i++;
        }else{
            str[k] = rightSubarray[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        str[k] = leftSubarray[i];
        i++;
        k++;
    }

    while (j < n2) {
        str[k] = rightSubarray[j];
        j++;
        k++;
    }
}

void mergeSort(string &str, int esquerda, int direita){
    if(esquerda < direita){
        int meio = esquerda + (direita-esquerda) / 2;

        mergeSort(str, esquerda, meio);

        mergeSort(str, meio+1, direita);

        merge(str, esquerda, meio, direita);
    }
}

int main()
{
    string str;

    cout << "Digite algo: ";
    cin >> str;

    int n = str.length();
    mergeSort(str, 0, n-1);

    cout << "Organizado em ordem crescente: " << str;

    return 0;
}