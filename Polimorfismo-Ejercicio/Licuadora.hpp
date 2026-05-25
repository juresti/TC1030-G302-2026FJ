//
// Created by L00423103 on 25/05/2026.
//

#ifndef TC1030_LICUADORA_HPP
#define TC1030_LICUADORA_HPP

#include "Electrodomestico.hpp"
class Licuadora : public Electrodomestico {
private:
    int numVelocidades;
    bool pulsarActivo;
public:
    Licuadora();
    Licuadora(int);
    void licuar();
    virtual std::string dimeFuncionActual() override;
    virtual void cambiaFuncionActual(std::string) override;
    std::string toString() override;
};


#endif //TC1030_LICUADORA_HPP
