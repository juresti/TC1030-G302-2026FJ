//
// Created by L00423103 on 18/05/2026.
//

#ifndef TC1030_ELECTRODOMESTICO_HPP
#define TC1030_ELECTRODOMESTICO_HPP

#include <string>

class Electrodomestico {
private:
    bool encendido;
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool);
    std::string toString();
};


#endif //TC1030_ELECTRODOMESTICO_HPP
