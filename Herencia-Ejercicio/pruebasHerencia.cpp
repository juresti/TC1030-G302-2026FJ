//
// Created by Dr.Jorge on 13/05/26.
//

#include "Electrodomestico.hpp"
#include "Microondas.hpp"
#include <iostream>

using namespace std;

int main() {
    cout << "***** Pruebas de Electrodomestico *****" << endl;
    Electrodomestico el1{};
    cout << "Valor encendido = " << el1.isEncendido() << endl;
    el1.setEncendido(true);
    cout << el1.toString() << endl;

    cout << "\n***** Pruebas de Microondas *****" << endl;
    Microondas micro1 {};
    Microondas micro2 {3.5,"Negro"};

    cout << "Micro default: " << micro1.toString() << endl;
    cout << "Micro 2 param: " << micro2.toString() << endl;

    cout << micro1.calentadoRapido() << endl;
    micro2.encender();
    cout << micro2.calentadoRapido() << endl;
    micro2.encender();

    micro1.apagar();
    micro2.apagar();
}
