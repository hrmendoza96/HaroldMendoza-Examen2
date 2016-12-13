#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Perro: public Animal{

  public:
    Perro();
    Perro(string, string);
    virtual string toString();
    virtual string Sonido();

    ~Perro();
};
