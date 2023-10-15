#include <iostream>
#include <string>

using namespace std;

void reverterStringComPilha(string &palavra) {
    int tamanho = palavra.size();
    string reverterString;

    for (int i = tamanho - 1; i >= 0; i--) {
        reverterString += palavra[i];
    }

    palavra = reverterString;
}

int main() {
    string palavra = "casa";
    cout << "String original: " << palavra << endl;

    reverterStringComPilha(palavra);

    cout << "String invertida: " << palavra << endl;

    return 0;
}

