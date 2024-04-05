#include "Conferencia.h"

Conferencia::Conferencia(string nombre, int tiempoDuracion, string ubicacion, string tema)
    : Evento(nombre, tiempoDuracion, ubicacion) {
  this->tema = tema;
  cout << "Conferencia creada (Evento)" << endl;
}

string Conferencia::getTema() {
  return this->tema;
}

void Conferencia::show() {
  Evento::show();
  cout << "Tema : " << this->tema<<endl;
  cout<<" ";
  cout << "Tipo de evento: Conferencia"<<endl;
}
