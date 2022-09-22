#include <iostream>
#include "geladeira.hpp"

// Adicione seus metodos / construtores aqui

Geladeira::Geladeira(int capacidade_em_litros, int numero_de_portas){
    _capacidade_em_litros = capacidade_em_litros;
    _numero_de_portas = numero_de_portas;
};

Geladeira::~Geladeira(){

};

int Geladeira::get_capacidade_em_litros(){
    return _capacidade_em_litros;
};

int Geladeira::get_numero_de_portas(){
    return _numero_de_portas;
};