//
// Created by L00423103 on 25/05/2026.
//

#ifndef TC1030_ELECTRODOMESTICO_HPP
#define TC1030_ELECTRODOMESTICO_HPP

#include <string>
class Electrodomestico {
private:
    bool encendido;
protected:
    std::string funcionActual;
    Electrodomestico();
public:
    bool isEncendido();
    void setEncendido(bool);
    void apagar();
    void encender();

    virtual std::string dimeFuncionActual() = 0; //Abstracto
    virtual void cambiaFuncionActual(std::string) = 0; //Abstracto
    virtual std::string toString();
}; //Clase es Abstracta


#endif //TC1030_ELECTRODOMESTICO_HPP
