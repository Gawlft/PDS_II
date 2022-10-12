#include <iostream>
#include <produto.hpp>
#include <pizza.hpp>

Pizza::Pizza(const std::string& flavor, int n_slices, bool creampie, int amount){
    _flavor = flavor;
    _n_slices = n_slices;
    _creampie = creampie;
    _quantidade = amount;

};

float Pizza::calcPreco() {
    float price;
    bool special;
    std::string especial = "especial";

    if (this->_flavor.find(especial) != std::string::npos) {
        special = true;
}
    price = 5 * _n_slices + (10 * _creampie) + (8 * special) ;
    return price;


};

std::string descricao(){
    std::string descricao;
    return descricao;

};