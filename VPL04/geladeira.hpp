#ifndef GELADEIRA_HPP
#define GELADEIRA_HPP

#include <iostream>

class Geladeira {
    private:
    // Adicione suas variaveis globais aqui
    int _capacidade_em_litros;
    int _numero_de_portas;

    public:
    // Adicione a assinatura dos seus metodos / construtores aqui
    Geladeira(int capacidade_em_litros, int numero_de_portas);
    ~Geladeira();

    int get_capacidade_em_litros();
    int get_numero_de_portas();

};

#endif