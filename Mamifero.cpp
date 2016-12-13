#include <iostream>
#include <string>
#include <sstream>
#include "Animal.h"
#include "Mamifero.h"
using namespace std;

Mamifero::Mamifero(){

}
Mamifero::Mamifero(string nombre, string sonido):Animal(nombre,
sonido){

}
string Mamifero::toString(){
  stringstream ss;
  ss << Animal::toString() << nombre << " ";
  return ss.str();

}
string Mamifero::Sonido(){
  stringstream ss;
  ss << Animal::toString() << sonido << " ";
  return ss.str();
}

Mamifero::~Mamifero(){

}
