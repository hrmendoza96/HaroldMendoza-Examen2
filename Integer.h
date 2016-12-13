#pragma once
#include <iostream>
#include <string>

using namespace std;

class Integer{
  private:
    int numero;
  public:
    Integer(int);
    void setNum(int);
    int getNum();
    int operator+(Integer&);
    int operator-(Integer&);


  };
