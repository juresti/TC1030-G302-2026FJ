//
// Created by Dr.Jorge on 13/05/26.
//

#include "Electrodomestico.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "***** Pruebas de Electrodomestico *****" << endl;
    Electrodomestico el1{};
    cout << "Valor encendido = " << el1.isEncendido() << endl;
    el1.setEncendido(true);
    cout << el1.toString() << endl;
}
