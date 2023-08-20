#include <iostream> // Inclui a biblioteca para entrada/saída
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#include "Core/OperarCalculos.h"

using namespace std;
using namespace Core;
using namespace Core::Enums;

OperadorEnums StringToOperadorEnums(string operadorEnums) throw()
{
    if(operadorEnums == "+") return OperadorEnums::SOMA;
    else if (operadorEnums == "-") return OperadorEnums::SUBTRACAO;
    else if (operadorEnums == "*") return OperadorEnums::MULTIPLICACAO;
    else if (operadorEnums == "/") return OperadorEnums::DIVISAO;
    else if (operadorEnums == "&&") return OperadorEnums::ANDLOGICO;
    else if (operadorEnums == "||") return OperadorEnums::ORLOGICO;
    else if (operadorEnums == "!=") return OperadorEnums::XORLOGICO;
    else if (operadorEnums == "&") return OperadorEnums::ANDBITWISE;
    else throw std::invalid_argument("Escolha uma operação (+, -, *, /, &&, ||, != or &) correta ou digite exit para sair do programa!");
}

string CalcularOperacao(int primeirovalor, int segundovalor, string operacao)
{
    auto operatorEnums = StringToOperadorEnums(operacao);
    string result = OperarCalculos::Operador(primeirovalor, segundovalor, operatorEnums);

    return result;
}

bool SairPrograma(string operacao)
{
    bool exitPrograma = false;
    string sair = "exit";

    transform(operacao.begin(), operacao.end(), operacao.begin(), ::toupper);
    transform(sair.begin(), sair.end(), sair.begin(), ::toupper);
    
    if (operacao == sair)
    {
        exitPrograma = true;
    } 

    return exitPrograma;
}


int main()
{
    string result;
    int primeiroValor;
    int segundoValor;
    string operacao;

    bool sairPrograma = false;

    do 
    { 
        try
        {
            cout<<"Insira o primeiro valor inteiro a ser calculado: "<< endl;
            cin >> primeiroValor;
            cout<<"Insira o segundo valor inteiro a ser calculado: "<< endl;
            cin >> segundoValor;
            cout<<"Insira a operacao que voce deseja (+, -, *, /, &&, ||, != or &) ou exit para sair do programa): "<< endl;
            cin >> operacao;

            sairPrograma = SairPrograma(operacao);
            if (!sairPrograma)
            {
                result = CalcularOperacao(primeiroValor, segundoValor, operacao);
                cout << primeiroValor << " " << operacao << "" << segundoValor << " = " << result << endl;
            }
        }
        catch(const exception& e)
        {
            cout << e.what() << endl;
        }
        
    } while (sairPrograma);

    return 0;
}