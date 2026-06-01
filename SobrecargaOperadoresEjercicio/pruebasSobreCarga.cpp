//
// Created by Dr.Jorge on 29/05/26.
//
#include "Cafetera.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Cafetera peque{"Peque",1.0,1};
    Cafetera mediana {"Mediana",3.5,5};
    Cafetera grande {"Grande",8.75,10};

    cout << peque.toString() << endl;
    cout << mediana.toString() << endl;
    cout << grande.toString() << endl;

    int primeras2 = peque + mediana;
    int total = peque + mediana + grande;
    cout << "Las mas pequenas pueden hacer " << primeras2 << " tazas por minuto." << endl;
    cout << "El total de tazas por minuto que puedes preparar es " << total << endl;
    return 0;
}
