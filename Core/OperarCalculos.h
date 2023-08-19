#pragma once
#include "Calculos.h"
#include "Enums/OperadorEnum.h"
#include <stdio.h>

namespace Core
{
    class OperarCalculos
    {
        public:
            std::string Operador(int primeiroValor, int SegundoValor, Enums::OperadorEnums operacao);
            OperarCalculos() = default;
        private:
            Calculos _calculos;
            ~OperarCalculos() = default;
            std::string Soma(int primeiroValor, int segundoValor);
            std::string Subtracao(int primeiroValor, int segundoValor);
            std::string Multiplicacao(int primeiroValor, int segundoValor);
            std::string Divisao(int primeiroValor, int segundoValor);
            std::string AndLogico(int primeiroValor, int segundoValor);
            std::string OrLogico(int primeiroValor, int segundoValor);
            std::string XorLogico(int primeiroValor, int segundoValor);
            std::string AndBitwise(int primeiroValor, int segundoValor);
    };
}