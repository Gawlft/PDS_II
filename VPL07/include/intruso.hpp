#ifndef INTRUSO_H
#define INTRUSO_H

#include <string>
#include <map>
#include <list>

class Intruso{
    /*Continue a implementação da classe Intruso*/
    private:
    std::list<std::string> _vazou;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();

    Intruso(std::list<std::string&> vazou);
    
    ~Intruso();
};

#endif