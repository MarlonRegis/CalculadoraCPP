#pragma once

namespace Core
{
    class Calculos
    {
        public : 
            Calculos() = default;
            int Soma(int primeiroValor, int segundoValor);
            int Subtracao(int primeiroValor, int segundoValor);
            double Multiplicacao(int primeiroValor, int segundoValor);
            double Divisao(int primeiroValor, int segundoValor);
            bool AndLogico(int primeiroValor, int segundoValor);
            bool OrLogico(int primeiroValor, int segundoValor);
            bool XorLogico(int primeiroValor, int segundoValor);
            int AndBitwise(int primeiroValor, int segundoValor);
        private:
            ~Calculos() = default;
    };
}