#pragma once
#include "Asistente.h"
#include <iostream>
#include <list>

using namespace std;

class Evento{
    private:
    string nombre;
    int tiempoDuracion;
    string ubicacion;
    list<Asistente*> asistentes;
    
    public:
     Evento(string nombre, int tiempoDuracion, string ubicacion);
        
        string getNombre();
        int getTiempoDuracion();
        string getUbi();
        void setNombre(string nombre);
        void setTiempoDuracion(int tiempo);
        void setUbi(string ubi);
        void addAsis(Asistente* asis);
        void showAsis();
        int promEdad();

        virtual void show();;
};