#include <iostream>
#include "fogao.hpp"

// Adicione seus metodos / construtores aqui

Fogao::Fogao(int numero_de_queimadores, int capacidade_forno){
    _numero_de_queimadores = numero_de_queimadores;
    _capacidade_forno = capacidade_forno;
};

Fogao::~Fogao(){

};

int Fogao::get_numero_de_queimadores(){
    return _numero_de_queimadores;
};

int Fogao::get_capacidade_forno(){
    return _capacidade_forno;
};
