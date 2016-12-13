#include <iostream>
#include <string>
#include <sstream>
#include "Animal.h"
#include "Oveja.h"

using namespace std;


Oveja::Oveja(){

}
Oveja::Oveja(string nombre, string sonido):Animal(nombre,sonido){

}
string Oveja::toString(){
  stringstream ss;
  ss << Animal::toString() << nombre << " ";
  return ss.str();

}
string Oveja::Sonido(){
  stringstream ss;
  ss << Animal::toString() << sonido << "\n";
  return ss.str();

}

Oveja::~Oveja(){

}
