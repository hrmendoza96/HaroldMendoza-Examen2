#include <iostream>
#include <string>
#include <sstream>
#include "Animal.h"
#include "Perro.h"

using namespace std;


Perro::Perro(){

}
Perro::Perro(string nombre, string sonido):Animal(nombre,sonido){

}
string Perro::toString(){
  stringstream ss;
  ss << Animal::toString() << nombre << " ";
  return ss.str();

}
string Perro::Sonido(){
  stringstream ss;
  ss << Animal::toString() << sonido << "\n";
  return ss.str();

}

Perro::~Perro(){

}
