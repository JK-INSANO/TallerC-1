#include "AsisUniversitario.h"

AsisUniversitario::AsisUniversitario(string nombre, int edad, string facultad)
    : Asistente(nombre, edad) { 
    this->facultad=facultad;
  cout << " Asistente Universitario registrado " << endl;
}


string AsisUniversitario::getFacultad(){
    return this->facultad;
}

void AsisUniversitario::show(){
    cout<<"Estudiante: "<<endl;
    Asistente::show();
    cout<<" Facultad:  "<<this->facultad<<endl;

}