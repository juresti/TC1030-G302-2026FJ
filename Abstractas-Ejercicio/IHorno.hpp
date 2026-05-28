//
// Created by L00423103 on 28/05/2026.
//

#ifndef TC1030_IHORNO_HPP
#define TC1030_IHORNO_HPP

class IHorno {
protected:
    virtual bool aumentarTemperatura(int) = 0;
    virtual bool prenderLuz() = 0;
};

#endif //TC1030_IHORNO_HPP
