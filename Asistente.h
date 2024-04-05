#pragma once
#include <iostream>
using namespace std;

class Asistente {
private:
    string nombre;
    int edad;

public:
    virtual void show();
    Asistente(string nombre, int edad);
    string getNombre();
    int getEdad();
    void setNombre(string nom);
    void setEdad(int edad);
};
