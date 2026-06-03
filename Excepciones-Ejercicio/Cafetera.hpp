//
// Created by L00423103 on 01/06/2026.
//

#ifndef CAFETERA_HPP
#define CAFETERA_HPP

#include <string>

class Cafetera {
private:
    float capacidad;
    int tazasXMin;
    std::string nombre;
public:
    Cafetera(std::string,float,int);
    std::string toString();
};

#endif //CAFETERA_HPP
