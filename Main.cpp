#include <iostream>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Animal.h"
#include "Mamifero.h"
#include "Perro.h"
#include "Gato.h"
#include "Oveja.h"
#include "Integer.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Animal *ListaAnimales[10];
  ListaAnimales[0] = new Perro("Perro", "Guau");
  ListaAnimales[1] = new Gato("Gato", "Miao");
  ListaAnimales[2] = new Oveja("Oveja", "Meee");
  ListaAnimales[3] = new Perro("Perro", "Guau");
  ListaAnimales[4] = new Perro("Perro", "Guau");
  ListaAnimales[5] = new Perro("Perro", "Guau");
  ListaAnimales[6] = new Perro("Perro", "Guau");
  ListaAnimales[7] = new Perro("Perro", "Guau");
  ListaAnimales[8] = new Perro("Perro", "Guau");
  ListaAnimales[9] = new Perro("Perro", "Guau");

  for (int i = 0; i < 10; i++) {
    cout << "El ";
    cout << ListaAnimales[i]->toString();
    cout << "Hace ";
    cout << ListaAnimales[i]->Sonido();
  }



  ofstream archivo4;
  archivo4.open("Animales.txt");
  for (int i = 0; i < 10; i++) {
    archivo4 << "El ";
    archivo4 << ListaAnimales[i]->toString();
    archivo4 << "Hace ";
    archivo4 << ListaAnimales[i]->Sonido();
  }
  archivo4.close();
  cout << endl;
  cout << "Animales guardados exitosamente"<< endl;


  vector<string> animalesList;

  string STRING;
  ifstream infile;
  infile.open ("Animales.txt");
    while(!infile.eof()) // To get you all the lines.
    {
      getline(infile,STRING); // Saves the line in STRING.
      animalesList.push_back(STRING);
      //cout<<STRING; // Prints our STRING.
    }
     infile.close();
    cout << endl;
    cout << "Animales Cargadoss exitosamente";
    cout << endl;


    for (int i = 0; i < animalesList.size(); i++) {
      cout << animalesList.at(i) << endl;
    }


  //delete ListaAnimales;

  return 0;
}
