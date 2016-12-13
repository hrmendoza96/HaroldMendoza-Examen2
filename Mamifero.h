#pragma once
#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Mamifero: public Animal{

  public:
    Mamifero();
    Mamifero(string,string);
    virtual string toString();
    virtual string Sonido();

    ~Mamifero();
};
