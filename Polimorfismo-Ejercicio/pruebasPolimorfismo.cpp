//
// Created by Dr.Jorge on 22/05/26.
//

//#include "Electrodomestico.hpp"
#include "Licuadora.hpp"
#include "Freidora.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    //Electrodomestico electro{};
    Licuadora licuaDef {};
    Licuadora licuaVel {9};

    cout << licuaDef.toString() << endl;
    cout << licuaVel.toString() << endl;
    licuaDef.licuar();
    licuaVel.encender();
    licuaVel.licuar();
    licuaVel.apagar();
    cout << licuaVel.toString() << endl;
    cout << licuaDef.dimeFuncionActual() << endl;
    licuaDef.cambiaFuncionActual("Pure");
    cout << endl << licuaDef.dimeFuncionActual() << endl;

    Freidora freidora1 {"Calentando.."};
    cout << freidora1.toString() << endl;
    cout << freidora1.dimeFuncionActual() << endl;
    freidora1.cambiaFuncionActual("Asando");
    cout << freidora1.dimeFuncionActual() << endl;
    return 0;
}
