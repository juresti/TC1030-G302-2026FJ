//
// Created by L00423103 on 01/06/2026.
//

#ifndef TC1030_CAFETERA_HPP
#define TC1030_CAFETERA_HPP

#include <string>

class Cafetera {
private:
    float capacidad;
    int tazasXMin;
    std::string nombre;
public:
    Cafetera(std::string,float,int);
    std::string toString();
    friend int operator + (Cafetera &,Cafetera &);
    friend int operator + (int ,Cafetera &);
};


#endif //TC1030_CAFETERA_HPP
