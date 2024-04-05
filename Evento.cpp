#include "Evento.h"

Evento::Evento(string nombre,int tiempoDuracion,string ubicacion){
    this->nombre=nombre;
    this->tiempoDuracion=tiempoDuracion;
    this->ubicacion=ubicacion;

}

string Evento::getNombre(){return this->nombre;}
int Evento::getTiempoDuracion(){return this->tiempoDuracion;}
string Evento::getUbi(){return this ->ubicacion;}

void Evento::setNombre(string nombre){this->nombre=nombre;}
void Evento::setTiempoDuracion(int tiempo){this->tiempoDuracion=tiempo;}
void Evento::setUbi(string ubi){this->ubicacion=ubi;}


int Evento::promEdad(){
    int sumatoria=0;
    for(Asistente* asis : asistentes){

        sumatoria+=asis->getEdad();
    }
    int promEdad= sumatoria/asistentes.size();
    return promEdad;
}

void Evento::showAsis(){

    cout<<"Evento: "<<this->nombre<<" Cantidad total de asistentes:"<<asistentes.size()<<endl;

    for(Asistente* asis: this->asistentes){
        asis->show();
        cout<<endl;
    }
}
void Evento::addAsis(Asistente* asistente){
    this->asistentes.push_back(asistente);
}
void Evento::show() {
    cout << "Evento: " << this->nombre << endl;
    cout << "Duración: " << this->tiempoDuracion << " minutos" << endl;
    cout << "Ubicación: " << this->ubicacion << endl;
}
