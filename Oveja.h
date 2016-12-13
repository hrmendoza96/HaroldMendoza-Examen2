#pragma once
#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Oveja: public Animal{

  public:
    Oveja();
    Oveja(string, string);
    virtual string toString();
    virtual string Sonido();

    ~Oveja();
};
