#include "Asistente.h"
#include <iostream>

using namespace std;

Asistente::Asistente(string nombre,int edad){
    this->nombre = nombre;
    this->edad = edad;

}

string Asistente::getNombre(){return this->nombre;}
int Asistente::getEdad(){return this->edad;}
void Asistente::setNombre(string nombre){this->nombre = nombre;}
void Asistente::setEdad(int edad){this->edad=edad;}



void Asistente::show(){
    cout << "Nombre:  " << this->nombre << endl;
    cout << "Edad:    " << this->edad << endl;
};
