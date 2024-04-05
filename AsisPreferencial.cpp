#include "AsisPreferencial.h"

AsisPreferencial::AsisPreferencial(string nombre, int edad, string condicion): Asistente(nombre,edad){
    this->condicion=condicion;
    cout<<" Asistente preferencial registrado "<<endl;

}

string AsisPreferencial::getCondicion(){
    return this-> condicion;

}

void AsisPreferencial::show() {
    cout << "Asistente Preferencial:" << endl;
    Asistente::show();
    cout << "Condicion: " << this->condicion << endl;
};