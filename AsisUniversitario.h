#pragma once
#include "Asistente.h"
#include <iostream>
using namespace std;

class AsisUniversitario : public Asistente { 
  private:
    string facultad;
  public:
    AsisUniversitario(string nombre, int edad, string facultad);
    string getFacultad();
    void show();
};
