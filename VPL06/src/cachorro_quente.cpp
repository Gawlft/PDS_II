#include <iostream>
#include <produto.hpp>
#include<cachorro_quente.hpp>
#include <vector>
#include <string>
#include <sstream>



CachorroQuente::CachorroQuente(int n_sausages, std::vector<std::string> &toppings, bool pressed, int amount){

    _n_sausages = n_sausages;
    _toppings = toppings;
    _pressed = pressed;
    _quantidade = amount;
    _valor_unitario=calcPreco();


}

float CachorroQuente::calcPreco() {
    float base_price = 5.0;
    float price;
    price = (1.5 * _n_sausages) + _toppings.size() + base_price + (_pressed * 0.5);
    return price;


};

std::string CachorroQuente::descricao() const{
    std::string descricao;        
    std::stringstream extras;

    bool first = true;

    for(auto i : this->_toppings)
   {
        if (!first) { extras << ", "; }
        first = false;
        extras << i;
   }

       if(_pressed){

        descricao = std::to_string(this->_quantidade) + "X" + " cachorro-quente" + " prensado" + " com " + std::to_string(this->_n_sausages) + " salsicha(s), "  +  extras.str() + ".";
        
    }else{

    descricao = std::to_string(this->_quantidade) + "X" + " cachorro-quente com " + std::to_string(this->_n_sausages) + " salsicha(s), "  +  extras.str() + ".";
    }
    return descricao;

};