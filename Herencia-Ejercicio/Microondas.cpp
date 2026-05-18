//
// Created by L00423103 on 18/05/2026.
//

#include "Microondas.hpp"

#include <iostream>
#include <ostream>

Microondas::Microondas() : Electrodomestico{}, capacidad{1.5}, color{"Blanco"} {}
Microondas::Microondas(float ca, std::string co) : Electrodomestico{}, capacidad{ca}, color{co} {}

std::string Microondas::calentadoRapido() {
    if (isEncendido()) {
        return "Calentado a maxima potencia tu comida.";
    } else
        return "Primero enciende el microondas!";
}

void Microondas::encender() {
    if (not isEncendido()) {
        setEncendido(true);
        std::cout << "Se ha encendido tu microondas" << std::endl;
    } else {
        std::cout << "Ya estaba encendido!" << std::endl;
    }
}

void Microondas::apagar() {
    if (isEncendido()) {
        setEncendido(false);
        std::cout << "Se ha apagado tu microondas" << std::endl;
    } else {
        std::cout << "Ya estaba apagado!" << std::endl;
    }
}

std::string Microondas::toString() {
    return "Microondas(" + std::to_string(isEncendido()) + "," +
        std::to_string(capacidad) + "," + color + ")";
}
