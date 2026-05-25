//
// Created by L00423103 on 25/05/2026.
//

#include "Licuadora.hpp"

#include <iostream>
#include <ostream>

Licuadora::Licuadora() : Electrodomestico{},numVelocidades{5},pulsarActivo{false} {}
Licuadora::Licuadora(int nv) : Electrodomestico{},numVelocidades{nv},pulsarActivo{false} {}

void Licuadora::licuar() {
    if (isEncendido()) {
        std::cout << "Licuando tus alimentos..." << std::endl;
    } else {
        std::cout << "Primero enciende la licuadora!" << std::endl;
    }
}

std::string Licuadora::dimeFuncionActual() {
    return "Estamos en la licuadora. La funcion es: " + funcionActual;
}

void Licuadora::cambiaFuncionActual(std::string nf) {
    funcionActual = nf;
    std::cout << "Cambiando la funcionalidad de tu licuadora a " + nf;
}

std::string Licuadora::toString() {
    return "Licuadora(" + Electrodomestico::toString() + "," +
        std::to_string(numVelocidades) + "," +
            std::to_string(pulsarActivo) + ")";
}
