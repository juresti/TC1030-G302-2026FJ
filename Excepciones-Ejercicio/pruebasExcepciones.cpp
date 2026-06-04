//
// Created by Dr.Jorge on 03/06/26.
//
#include "Cafetera.hpp"
#include <stdexcept>
#include <iostream>
using namespace std;

int pideTazas() {
    int tazas;
    bool correct {false};

    while (!correct) {
        try {
            cout << "Dime las tazas por minuto de la cafetera: "; cin >> tazas;

            if (cin.fail()) {
                throw invalid_argument{"Se espera un dato de tipo int."};
            } else {
                correct = true;
                cout << "Perfecto, tu cafetera puede preparar " << tazas << " tazas por minuto" << endl;
            }
        } catch (invalid_argument e) {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }
    return tazas;
}

float pideCapacidad() {
    float cap;
    bool correct {false};

    while (!correct) {
        try {
            cout << "Dime la capacidad de la cafetera: "; cin >> cap;

            if (cin.fail()) {
                throw invalid_argument{"Se espera un dato de tipo float."};
            } else {
                correct = true;
                cout << "Perfecto, tu cafetera sera de capacidad " << cap << endl;
            }
        } catch (invalid_argument e) {
            cout << e.what() << endl;
            cin.clear();
            cin.ignore(32767, '\n');
        }
    }
    return cap;
}

int main() {
    cout << "Ejercicio Excepciones" << endl;
    Cafetera nueva {"Nueva",1.0,2};
    cout << nueva.toString() << endl;

    float cap = pideCapacidad();
    int tazas = pideTazas();

    Cafetera usuario{"Usuario",cap,tazas};
    cout << usuario.toString() << endl;

    return 0;
}
