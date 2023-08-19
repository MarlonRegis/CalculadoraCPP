#include "OperarCalculos.h"
#include <string>

using namespace Core;
using namespace Core::Enums;
using namespace std;

OperarCalculos::OperarCalculos()
{
    _calculos = new Calculos();
}

string OperarCalculos::Operador(int primeiroValor, int SegundoValor, OperadorEnums operacao)
{
    switch(operacao)
    {
        case OperadorEnums.SOMA:
            return Soma(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.SUBTRACAO: 
            return Subtracao(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.DIVISAO: 
            return Divisao(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.MULTIPLICACAO: 
            return Multiplicacao(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.ANDLOGICO: 
            return AndLogico(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.ORLOGICO: 
            return OrLogico(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.XORLOGICO: 
            return XorLogico(primeiroValor, SegundoValor);
            break;
        case OperadorEnums.ANDBITWISE: 
            return AndBitwise(primeiroValor, SegundoValor);
            break;
    }
}

string OperarCalculos::Soma(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.Soma(primeiroValor, segundoValor));
}

string OperarCalculos::Subtracao(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.Subtracao(primeiroValor, segundoValor));
}

string OperarCalculos::Divisao(int primeiroValor, int segundoValor)
{
    if (segundoValor != 0)
    {
        return to_string(_calculos.Divisao(primeiroValor, segundoValor));
    }
    else
    {
        return "Não existe divisao por zero!";
    }
}

string OperarCalculos::Multiplicacao(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.Multiplicacao(primeiroValor, segundoValor));
}

string OperarCalculos::AndLogico(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.AndLogico(primeiroValor, segundoValor));
}

string OperarCalculos::OrLogico(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.OrLogico(primeiroValor, segundoValor));
}

string OperarCalculos::XorLogico(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.XorLogico(primeiroValor, segundoValor));
}

string OperarCalculos::AndBitwise(int primeiroValor, int segundoValor)
{
    return to_string(_calculos.AndBitwise(primeiroValor, segundoValor));
}