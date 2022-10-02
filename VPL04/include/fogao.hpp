#ifndef FOGAO_HPP
#define FOGAO_HPP

#include <iostream>

class Fogao {
    private:

    int _numero_de_queimadores;
    int _capacidade_forno;

    public:
    // Adicione a assinatura dos seus metodos / construtores aqui
    //Construtor
    Fogao(int numero_de_queimadores, int capacidade_forno);
    //Destrutor
    ~Fogao();
    //métodos
    
    int get_numero_de_queimadores();

    int get_capacidade_forno();



};

#endif