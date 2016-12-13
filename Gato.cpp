#include <iostream>
#include <string>
#include <sstream>
#include "Animal.h"
#include "Gato.h"

using namespace std;


Gato::Gato(){

}
Gato::Gato(string nombre, string sonido):Animal(nombre,sonido){

}
string Gato::toString(){
  stringstream ss;
  ss << Animal::toString() << nombre << " ";
  return ss.str();

}
string Gato::Sonido(){
  stringstream ss;
  ss << Animal::toString() << sonido << "\n";
  return ss.str();

}

Gato::~Gato(){

}
