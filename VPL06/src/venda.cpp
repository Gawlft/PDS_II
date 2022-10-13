#include <iostream>
#include <list>

#include <iomanip> 
#include "pedido.hpp"
#include "venda.hpp"

Venda::~Venda(){};

void Venda::adicionaPedido(Pedido* p){
    this->_pedidos.push_back(p);
}


void Venda::imprimeRelatorio() const{
	int order_n = 1;
	float price = 0;
    for(Pedido* i : this->_pedidos){
		std::cout << "Pedido " << order_n << std::endl;
        std::cout << i->resumo();
		price += i->calculaTotal();
		order_n++;
    }
	std::cout << "Relatório de Vendas" << std::endl;
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total de vendas: R$" << price << std::endl;;
	std::cout << "Total de pedidos: " << _pedidos.size() << std::endl;;
}
