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
    Geladeira g = Geladeira(capacidade, portas); 
    geladeiras.vector::push_back(g);

}
void Estoque::vende_geladeira(int capacidade, int portas){/*TODO*/
   for(int i = 0; i < geladeiras.size(); i++){
        if(geladeiras[i].Geladeira::getCapacidadeGeladeira() == capacidade && geladeiras[i].Geladeira::getPortas() == portas){
            geladeiras.erase(geladeiras.begin()+i);
            return; 
            }
   }}
void Estoque::armazena_fogao(int queimadores, int capacidade){/*TODO*/
    Fogao f = Fogao(numero_de_queimadores, capacidade_forno);
    fogoes.vector::push_back(f);
    };

void Estoque::vende_fogao(int queimadores, int capacidade){
        for(int i = 0; i < fogoes.size(); i++){
            if(fogoes[i].Fogao::getCapacidadeForno() == capacidade_forno && fogoes[i].Fogao::getQueimadores() == numero_de_queimadores){
            fogoes.erase(fogoes.begin()+i);
        return; /*TODO*/}

void Estoque::exibe_geladeiras(){
     for (int i = 0; i < geladeiras.size(); i++){
        std::cout << "G " << geladeiras[i].Geladeira::getCapacidadeGeladeira() << " ";
        std::cout << geladeiras[i].Geladeira::getPortas() << std::endl;   }
}

void Estoque::exibe_fogoes(){
    for (int i = 0; i < fogoes.size(); i++){
        std::cout << "F " << fogoes[i].Fogao::getQueimadores() << " ";
        std::cout << fogoes[i].Fogao::getCapacidadeForno() << std::endl;
        /*TODO*/}
        }

int Estoque::quantidade_geladeiras(){/*TODO*/
    return geladeiras.size();
}

int Estoque::quantidade_fogoes(){/*TODO*/
    return fogoes.size();
}