#include <iostream>
#include <produto.hpp>
#include<cachorro_quente.hpp>

CachorroQuente::CachorroQuente(int n_sausages, std::vector<std::string> &toppings, bool pressed, int amount){

    _n_sausages = n_sausages;
    _toppings = toppings;
    _pressed = pressed;
    _quantidade = amount;

}

float CachorroQuente::calcPreco() {
    float base_price = 5.0;
    float price;
    price = (1.5 * _n_sausages) + _toppings.size() + base_price + (_pressed * 0.5);
    return price;


};

std::string descricao(){
    std::string descricao;
    return descricao;

};