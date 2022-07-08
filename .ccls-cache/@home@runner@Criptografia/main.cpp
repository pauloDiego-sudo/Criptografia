#include <iostream>
#include <string>
#include "funcoes.hpp"
using namespace std;

int main()
{
    string frase;
    cout << "Informe a frase: ";
    getline(cin,frase);
    cout << "Frase: " << frase << "\nCriptografada: " << encriptar(frase);
    return 0;
}