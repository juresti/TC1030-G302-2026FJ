//
// Created by L00423103 on 18/05/2026.
//

#ifndef TC1030_MICROONDAS_HPP
#define TC1030_MICROONDAS_HPP

#include "Electrodomestico.hpp"
#include <string>

class Microondas : public Electrodomestico {
private:
    float capacidad;
    std::string color;
public:
    Microondas();
    Microondas(float, std::string);
    std::string calentadoRapido();
    void encender();
    void apagar();
    std::string toString();
};


#endif //TC1030_MICROONDAS_HPP
