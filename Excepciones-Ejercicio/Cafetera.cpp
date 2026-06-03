//
// Created by L00423103 on 01/06/2026.
//

#include "Cafetera.hpp"

Cafetera::Cafetera(std::string n,float cap,int num) : nombre{n}, capacidad{cap}, tazasXMin{num} {}
std::string Cafetera::toString() {
    return "Cafetera(" + nombre + "," +
        std::to_string(capacidad) + "," +
            std::to_string(tazasXMin) + ")";
}
