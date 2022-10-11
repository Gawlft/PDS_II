#include <iostream>
#include "acai.hpp"
#include "produto.hpp"


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

std::string descricao(){
    std::string descricao;
    return descricao;

};