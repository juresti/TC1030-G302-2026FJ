//
// Created by L00423103 on 25/05/2026.
//

#ifndef TC1030_FREIDORA_HPP
#define TC1030_FREIDORA_HPP

#include "Electrodomestico.hpp"
#include "IHorno.hpp"

class Freidora : public Electrodomestico, IHorno {
private:
    float tiempoFreir;
    int temperatura;
public:
    Freidora(std::string);
    virtual std::string dimeFuncionActual() override;
    virtual void cambiaFuncionActual(std::string) override;
    std::string toString() override;

    virtual bool aumentarTemperatura(int) override;
    virtual bool prenderLuz() override;
};


#endif //TC1030_FREIDORA_HPP
