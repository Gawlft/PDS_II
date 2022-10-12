#include <iostream>
#include "acai.hpp"
#include "produto.hpp"
#include <vector>
#include <string>
#include <sstream>

Acai::Acai(int size, std::vector<std::string> &toppings, int amount){
    _size = size;
    _toppings = toppings;
    _quantidade = amount;
};


float Acai::calcPreco() {
    float price;
    price = _size * 0.02 + _toppings.size() * 2;
    return price;

};

std::string Acai::descricao() const{
    std::string descricao;        
    std::stringstream extras;

    bool first = true;


    for(auto i : this->_toppings)
   {
        if (!first) { extras << ","; }
        first = false;
        extras << i;
   }

    descricao = std::to_string(this->_quantidade) + "X" + " açaí " + std::to_string(this->_size) + " ml " +  " com " +  extras.str() + ".";
    return descricao;
};