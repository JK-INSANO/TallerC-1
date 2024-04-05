#pragma once
#include "Asistente.h"

class AsisPreferencial : public Asistente{
    private:
        string condicion;
    public:
        AsisPreferencial(string nombre,int edad, string condicion);
        string getCondicion();
        void show();
};