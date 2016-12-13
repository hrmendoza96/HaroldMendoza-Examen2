#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal{
  protected:
    string nombre;
    string sonido;

  public:
    Animal();
    Animal(string, string);
    void setNombre(string);
    string getNombre();
    void setSonido(string);
    string getSonido();
    virtual string toString();
    virtual string Sonido();

    ~Animal();
};
