#pragma once
#include "Evento.h"
#include <iostream>
using namespace std;

class Conferencia : public Evento {
  private:
    string tema;
  public:
    Conferencia(string nombre, int duracion, string ubicacion, string tema);
    string getTema();
    void show();
};
