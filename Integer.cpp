#include <iostream>
#include <string>
#include "Integer.h"

using namespace std;


Integer::Integer(int num){
  this->numero=num;
}
int Integer::getNum(){
  return numero;
}
int Integer::operator+(Integer& der){
  return this->getNum()+der.getNum();



}
int Integer::operator-(Integer& der){
  return this->getNum()+der.getNum();
}
