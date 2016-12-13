#include <iostream>
#include <string>
#include <sstream>
#include "Animal.h"
using namespace std;


Animal::Animal(){

}
Animal::Animal(string nombre, string sonido){
  this->nombre=nombre;
  this->sonido=sonido;
}
void Animal::setNombre(string nombre){
  this->nombre=nombre;
}
string Animal::getNombre(){
  return nombre;
}
void Animal::setSonido(string sonido){
  this->sonido=sonido;
}
string Animal::getSonido(){
  return sonido;
}
string Animal::toString(){
    return "";
}
string Animal::Sonido(){
  return "";
}

Animal::~Animal(){
  
}
