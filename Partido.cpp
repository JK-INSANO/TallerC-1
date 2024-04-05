#include "Partido.h"

Partido::Partido(string nombre, int tiempoDuracion, string ubicacion, string equipo)
    : Evento(nombre, tiempoDuracion, ubicacion) {
  this->partido = equipo;
  cout << "Partido creado (Evento)" << endl;
}

string Partido::getPartido() {
  return this->partido;
}

void Partido::setPartido(string partido) {
  this->partido = partido;
}

void Partido::show() {
  Evento::show();
  cout << " Partido : " << this->partido;
  cout << " Tipo de evento:  Partidos" << endl;
}

