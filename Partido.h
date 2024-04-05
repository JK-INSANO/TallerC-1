#pragma once
#include "Evento.h"
#include <iostream>

using namespace std;

class Partido : public Evento {
  private:
    string partido;
  public:
    Partido(string nombre, int tiempoDuracion, string ubicacion, string partido);
    string getPartido();
    void setPartido(string partido);
    void show();
};
