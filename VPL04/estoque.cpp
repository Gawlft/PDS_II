#include <vector>
#include <iostream>
#include "fogao.hpp"
#include "geladeira.hpp"
#include "estoque.hpp"

Estoque::Estoque(std::vector<Geladeira> geladeiras, std::vector<Fogao> fogoes){
    _geladeiras = geladeiras;
    _fogoes = fogoes;
    };

void Estoque::armazena_geladeira(int capacidade, int portas){/*TODO*/

}

void Estoque::vende_geladeira(int capacidade, int portas){/*TODO*/}

void Estoque::armazena_fogao(int queimadores, int capacidade){/*TODO*/}

void Estoque::vende_fogao(int queimadores, int capacidade){/*TODO*/}

void Estoque::exibe_geladeiras(){/*TODO*/}

void Estoque::exibe_fogoes(){/*TODO*/}

int Estoque::quantidade_geladeiras(){/*TODO*/}

int Estoque::quantidade_fogoes(){/*TODO*/}