#include <iostream> // Inclui a biblioteca para entrada/saída
#include <string>
#include <vector>
#include "Core/OperarCalculos.h"

using namespace std;
using namespace Core;

void Validacao(int primeirovalor, int segundovalor, string operacao, ){

}

int main()
{
    vector<string> Inputs;
    string value;
    float result;
    int primeiroValor;
    int segundoValor;
    string operacao;
    bool exit =false;
    

    int i = 0;
    do 
    { 
        try
        {
            cout<<"Insira o primeiro valor inteiro a ser calculado: "<< endl;
            cin >> primeiroValor;
            cout<<"Insira o segundo valor inteiro a ser calculado: "<< endl;
            cin >> segundoValor;
            cout<<"Insira a operacao que voce deseja (+, -, *, /, &&, ||, !|| or &): "<< endl;
            cin >> operacao;
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    } while (exit);

}