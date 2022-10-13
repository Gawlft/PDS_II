#include <iostream>
#include <pedido.hpp>
#include <list>

#include <cachorro_quente.hpp>
#include <acai.hpp>
#include <pizza.hpp>
#include <produto.hpp>
#include <sstream>


// Pedido::Pedido(std::list<Produto* >products, std::string address){
//  _produtos = products;
//  _endereco = address;
// }

void Pedido::adicionaProduto(Produto* p){

    this->_produtos.push_back(p);

};


float Pedido::calculaTotal() const  {
    float price = 0;
    for(Produto* i : this->_produtos){
        price+=i->calcPreco()*i->getQtd();
    }
    return price;
};
  
std::string Pedido::resumo() const{

    std::string desc;

    for(auto i : _produtos){
        desc = desc + i->descricao();
        desc = desc + "\n";      
    }
    desc = desc + "Endereço: " + _endereco + "\n";
    return desc;

};

void Pedido::setEndereco(const std::string& endereco){

    this->_endereco = endereco;

};


