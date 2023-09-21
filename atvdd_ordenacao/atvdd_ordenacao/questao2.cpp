#include <iostream>
#include <string>

using namespace std;

void insetionSort(string &str){
    int n = str.length();

    for(int i=1; i<n; i++){
        char chave = str[i];
        int j = i-1;

        while(j >=0 && str[j]<chave){
            str[j+1] = str[j];
            j--;
        }
        str[j+1] = chave;
    }
}

int main()
{
    string str;

    cout << "Digite uma string: ";
    cin >> str;

    insetionSort(str);
    cout << "String em ordem decrescente: " << str << endl;

    return 0;
}