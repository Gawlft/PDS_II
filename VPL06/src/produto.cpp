#include <iostream>
#include <produto.hpp>

int Produto::getQtd() const{
    return _quantidade;
};

float Produto::getValor() const{
    return _valor_unitario;
};

std::string descricao(){
    std::string descricao;
    return descricao;

};

float Produto::calcPreco(){
    return Produto::getQtd() * Produto::getValor();
}