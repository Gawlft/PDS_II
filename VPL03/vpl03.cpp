// Maneira 1 de implementar o void imprimir();
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <iterator>

using namespace std;

class Fatura{
    // Atributos
    private:
        string _code;
        char _type;
        double _amount;
    public:
        // Construtor
        Fatura(char type, double amount,  string code){
            _code = code;
            _type = type;
            _amount = amount;
        }
        // Metódos
        void imprimir(){
           cout << this->_type << ' ' << this->_amount << ' ' << this->_code <<  endl;  
        };
        double getValor(){
          return _amount;  
        };
        char getTipo(){
          return _type;  
        };

        bool operator< (const Fatura &right) const
        {
        return _amount < right._amount;
        };
    
};
class Colecao{
    private:
       map<char, int> _status; //mapa para organizar a quantidade de faturas de cada tipo(type)
       multiset<Fatura>_debts;
    public:
    //construtor
    Colecao(){
      char types[3] = {'p', 'b', 'g'};
      for (char type_fatura : types) {
      _status.insert( pair<char, int>(type_fatura, 0)); 
    }
    }
    void adicionar(Fatura f){
       
       _debts.insert(f); // PROBLEMA SAFADO TA AQUI NESSE INSERT

        if (f.getTipo() == 'p') {
            _status.at('p')++;
        }
        else if (f.getTipo() == 'b'){
            _status.at('b')++;
        }
        else if (f.getTipo() == 'g'){
            _status.at('g')++;
        }
    }
    void proxima(){
        if(!_debts.empty()){

        //multiset<Fatura>::iterator it;
        Fatura last = *_debts.rbegin();
        //multiset<Fatura>::iterator it = _debts.end();
        //it = --it;
        //it =  prev(_debts.end());
        _debts.erase(*_debts.rbegin());

        last.imprimir();

        if (last.getTipo() == 'p'){
            _status.at('p')--;
        }
        else if (last.getTipo() == 'b'){
            _status.at('b')--;
        }
        else if (last.getTipo() == 'g'){
            _status.at('g')--;
        }
        }
    };
    void imprimir(){
        for (Fatura i : _debts){
            i.imprimir();
        }
    }
    void status(){
        
         map<char, int> ::iterator it;

        for (it = _status.begin(); it != _status.end(); it++){

             cout << it->first << " " << it->second <<  endl;
        }

    }
    
};
int main(){
  Fatura* fat;
  Colecao* colec;
  colec = new Colecao();
  char test = 0;
  while( cin >> test) {
      switch (test) {
          case 'f': {
              char type;
              double amount;
               string code;
               cin >> type >> amount >> code;
              fat = new Fatura(type, amount, code); // o novo objeto tipo TAD Fatura precisa ser adicionado a coleção
              colec->adicionar(*fat);
          }
          break;
          case 'r': {
              //funcao proxima() da colecao
              colec->proxima();
          }
          break;
          case 'p':{
              //imprimir todos os elementos da colecao
              colec->imprimir();
          }
          break;
          case 's':{
              //imprimir status de faturas pendentes
              colec->status();
          }
          break;
          case 'e':{
            return 0;
              break;
          }
          default:{
            break;
          }
          
      }
  }
    return 0;
    };