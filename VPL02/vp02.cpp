#include<iostream>
#include<vector>

using namespace std;

class Categoria{
    // Preencher -> Implementado
    private:
        int _codigo_categoria;
        double _valor_caixa;
 
    
    // ************* Operações *************
    public:
    // Construtor
        Categoria(int codigo_categoria, double valor_caixa) {
        _codigo_categoria = codigo_categoria;
        _valor_caixa = valor_caixa;
    }
    
    // Recupera o código correspondente a uma categoria. -> Implementado
        int getCodigo() {
        return _codigo_categoria;
    }
    
    // Recupera o valor em caixa de uma categoria. -> Implementado
        double getValorCaixa(){
        return _valor_caixa;
    }
    
    // Adiciona uma quantia ao caixa de uma categoria. -> Implementado
        void adicionaCaixa(double valor) {
        _valor_caixa += valor;
    }
    
    // Remove uma quantia ao caixa de uma categoria. -> Implementado
        void gastaCaixa(double valor) {
        _valor_caixa -= valor;
    }
    // *********************************

};



class Orcamento {
    // Preencher
    private:
        double _impostos;
        vector<Categoria> vetor_categorias;
    
    // ************* Dados *************
 
    // *********************************
    
    // ************* Operações *************
    
    // Construtor do Orçamento que deve conter um objeto categoria para cada pasta. - > Implementado
    // Recebe como parâmetro o valor monetário que deve ser atribuído a aquele orçamento. -> Implementado
    // Este valor deve ser distribuído a cada categoria, nos percentuais descritos anteriormente. - > Implementado

    public:
        Orcamento(double impostos) {
           _impostos = impostos;
            Categoria saude(0, impostos*0.15);
            vetor_categorias.push_back(saude);
            Categoria educacao(1, impostos*0.15);
            vetor_categorias.push_back(educacao);
            Categoria seguranca(2, impostos*0.2);
            vetor_categorias.push_back(seguranca);
            Categoria previdencia(3, impostos*0.35);
            vetor_categorias.push_back(previdencia);
            Categoria adm(4, impostos*0.15);
            vetor_categorias.push_back(adm);



        }
        // Reduz o valor no caixa da categoria especificada. -> Implementado
        void gastoCategoria(int codigo_categoria, double valor) {;        
            vetor_categorias.at(codigo_categoria).gastaCaixa(valor);
        }
        
        // Retorna o valor em caixa da categoria especificada. -> Implementado
        double getSaldo(int codigo_categoria) {
            return vetor_categorias.at(codigo_categoria).getValorCaixa();
        }
        
        // Retorna o ponteiro(endereço na memoria) para o objeto da categoria especificada. -> Implementado
        Categoria* getCategoria(int codigo_categoria) {
          return &vetor_categorias.at(codigo_categoria); // retorna o endereço na memória de um valor dentro do vetor de categorias
        }
        
        // *********************************
    };



int main() {
  Orcamento* orcamento; // ponteiro para orçamento. Isso inicia um ponteiro, um espaço na memória capaz de armazenar um orçamento
  char test = 0;
  while(cin >> test) {
      switch (test) {
        case 'o': { // Inicia novo orçamento
          double valor = 0;
          cin >> valor;
          orcamento = new Orcamento(valor);
          // Orcamento o(valor);
          // orcamento = &o;
          for (int i = 0; i < 5; i++)
          cout << orcamento ->getSaldo(i) <<endl;

          
        }
        break;
        case 'g': { // Gastar em uma categoria
          int categoria = 0;
          double valor = 0;
          cin >> categoria >> valor;
          
          // PREENCHER chamada de orçamento
          orcamento->gastoCategoria(categoria, valor);
          
          cout << categoria << ": " << orcamento->getSaldo(categoria) << endl; //undefined behaviour
        }
        break;
        case 'p': { // Imprimir todas as categorias e seus saldos
          for (int categoria = 0; categoria < 5; categoria++) {
            cout << categoria << ": " << orcamento->getSaldo(categoria) << endl; //undefined behaviour
          }
        }
        break;
        default: {
          cout << "----------" << endl;
        } break;
      }
  }
  return 0;
}