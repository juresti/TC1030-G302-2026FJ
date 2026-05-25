//
// Created by L00423103 on 25/05/2026.
//

#include "Electrodomestico.hpp"

Electrodomestico::Electrodomestico() : encendido{false}, funcionActual{"Ninguna"} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool v) {encendido = v;}

void Electrodomestico::apagar() {encendido = false;}
void Electrodomestico::encender() {encendido = true;}

std::string Electrodomestico::dimeFuncionActual() {
    return funcionActual;
}

void Electrodomestico::cambiaFuncionActual(std::string nf) {
    funcionActual = nf;
}

std::string Electrodomestico::toString() {
    return "Electrodomestico(" + std::to_string(encendido) + "," +
        funcionActual + ")";
}
