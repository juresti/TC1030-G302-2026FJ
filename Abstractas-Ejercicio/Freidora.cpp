//
// Created by L00423103 on 25/05/2026.
//

#include "Freidora.hpp"
#include <iostream>

Freidora::Freidora(std::string fa) : Electrodomestico{},tiempoFreir{1.5},temperatura{150} {
    funcionActual = fa;
}

std::string Freidora::dimeFuncionActual() {
    return "La funcion actual en tu Freidora es: " + funcionActual;
}

void Freidora::cambiaFuncionActual(std::string fa) {
    funcionActual = fa;
    std::cout << "Cambiando la funcion de tu Freidora a " + fa << std::endl;;
}

std::string Freidora::toString() {
    return "Freidora(" + Electrodomestico::toString() + "," +
        std::to_string(tiempoFreir) + "," +
            std::to_string(temperatura) + ")";
}

bool Freidora::aumentarTemperatura(int val) {
    return true;
}
bool Freidora::prenderLuz() {
    return true;
}
