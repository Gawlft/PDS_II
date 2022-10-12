#include <iostream>
#include <list>

#include <iomanip> 
#include "pedido.hpp"
#include "venda.hpp"


void Venda::adicionaPedido(Pedido* p){
    this->_pedidos.push_back(p);
}


void Venda::imprimeRelatorio() const{
    for(auto i : this->_pedidos){
        std::cout << i->resumo();
    }
}
