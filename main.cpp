#include "Evento.h"
#include "Asistente.h"
#include "AsisPreferencial.h"
#include "AsisUniversitario.h"
#include "Partido.h"
#include "Conferencia.h"

#include <iostream>
#include <list>

using namespace std;


void listar(list<Evento*> eventos){
    int opcion;
    cout << "Seleccione un evento" << endl;
    int cont = 1;
    for(Evento* evento : eventos){
        cout << " [" << cont << "] " << evento->getNombre() << endl;
        cont++;
    }
    cout << " > "; 
    cin >> opcion;
    if(opcion >= 1 && opcion <= eventos.size()){
        auto it = eventos.begin();
        advance(it, opcion - 1);
        Evento* evento = *it;
        evento->showAsis();
    }
    else{
        cout << "Opción inválida" << endl;
    }
}


void crearEvento(list<Evento*>& eventos) {
    int tipo;
    cout << "Seleccione tipo de evento: 1-Partido | 2-Conferencia ";

    cin >> tipo;

    cout << "Nombre del evento: ";
    string nombre = "";
    cin >> nombre;

    cout << "Duracion en minutos: ";
    int duracion;
    cin >> duracion;

    cout << "Ubicacion: ";
    string ubicacion = "";
    cin >> ubicacion;

    switch (tipo) {
        case 1: {
            cout << "Partido: ";
            string partido = "";
            cin >> partido;
            eventos.push_back(new Partido(nombre, duracion, ubicacion, partido));
            break;
        }
        case 2: {
            cout << "Conferencia: ";
            string conferencia = "";
            cin >> conferencia;
            eventos.push_back(new Conferencia(nombre, duracion, ubicacion, conferencia));
            break;
        }
        default:
            cout << "Ingrese una opcion valida" << endl;
            break;
    }
}

void Registrar(list<Evento*>& eventos) {
    cout << "Ingrese el nombre del evento al que desea registrar asistentes: ";
    string nombreEvento;
    cin >> nombreEvento;

    bool encontrado = false;
    for (Evento* evento : eventos) {
        if (evento->getNombre() == nombreEvento) {
            encontrado = true;

            cout << "Tipo de asistente a registrar:" << endl;
            cout << "1. Asistente Normal" << endl;
            cout << "2. Asistente Preferencial" << endl;
            cout << "3. Asistente Universitario" << endl;
            cout << "Ingrese el número correspondiente al tipo de asistente: ";
            int tipoAsistente;
            cin >> tipoAsistente;

            cout << "Nombre del asistente: ";
            string nombreAsistente;
            cin >> nombreAsistente;

            cout << "Edad del asistente: ";
            int edadAsistente;
            cin >> edadAsistente;

            Asistente* nuevoAsistente = nullptr;

            switch (tipoAsistente) {
                case 1:
                    nuevoAsistente = new Asistente(nombreAsistente, edadAsistente);
                    break;
                case 2: {
                    cout << "Condición del asistente preferencial: ";
                    string condicion;
                    cin >> condicion;
                    nuevoAsistente = new AsisPreferencial(nombreAsistente, edadAsistente, condicion);
                    break;
                }
                case 3: {
                    cout << "Facultad del asistente universitario: ";
                    string facultad;
                    cin >> facultad;
                    nuevoAsistente = new AsisUniversitario(nombreAsistente, edadAsistente, facultad);
                    break;
                }
                default:
                    cout << "Opción no válida. Se creará un asistente normal por defecto." << endl;
                    nuevoAsistente = new Asistente(nombreAsistente, edadAsistente);
                    break;
            }

            evento->addAsis(nuevoAsistente);
            
            cout << "Asistente registrado correctamente en el evento." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "El evento no fue encontrado. Por favor, verifique el nombre del evento." << endl;
    }
}

void informes(list<Evento*> eventos){
    cout<<"Eventos registrados: "<<endl;

    for(Evento* evento : eventos){
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;
        evento->show();
        evento->showAsis();
        cout<<"Promedio de las edades del  evento: "<<evento->promEdad()<<endl;
        

    }
}

void menu(list<Evento*>& eventos) {
    int opcion;
    cout << "Bienvenido al menu " << endl;
    cout << "1- Crear evento " << endl;
    cout << "2- Registrar asistentes " << endl;
    cout << "3- Listar Asistentes" << endl;
    cout << "4- Informes " << endl;
    cout << "                             ";

    cin >> opcion;

    while (opcion != 0) {
        switch (opcion) {
            case 1:
                crearEvento(eventos);
                break;
            case 2:
                Registrar(eventos);
    
                break;
            case 3:
                listar(eventos);
                cout << "Funcion listar no implementada" << endl;
                break;
            case 4:
                informes(eventos);
                cout << "Funcion informes no implementada" << endl;
                break;
            default:
                break;
        }

        cout << "Bienvenido al menu " << endl;
        cout << "1- Crear evento " << endl;
        cout << "2- Registrar asistentes " << endl;
        cout << "3- Listar Asistentes" << endl;
        cout << "4- Informes " << endl;
        cout << "                             ";

        cin >> opcion;
    }
}


void poblar(list<Evento*>& eventos){
    
    Evento* evento;

    evento = new Partido("1ra division",90,"Coquimbo", "Coquimbo vs Colo-Colo");
    evento->addAsis(new AsisPreferencial("papimiki",50,"Cojo"));
    evento->addAsis(new AsisUniversitario("Ruben",21,"ITI"));
    evento->addAsis(new Asistente("normal",22));

    eventos.push_back(evento);

    evento = new Partido("Copa Libertadores", 120, "Santiago", "Universidad de Chile vs Flamengo");
    evento->addAsis(new AsisPreferencial("Juan", 45, "Ciego"));
    evento->addAsis(new AsisUniversitario("María", 23, "Ingeniería Civil"));
    evento->addAsis(new Asistente("Carlos", 30));
    
    eventos.push_back(evento);

    evento = new Conferencia("Tecnología y Futuro", 90, "Valparaíso", "Inteligencia Artificial");
    evento->addAsis(new AsisPreferencial("Laura", 40, "Manco"));
    evento->addAsis(new AsisPreferencial("Pedro", 35, "Silla de rueda"));
    evento->addAsis(new AsisUniversitario("Ana", 28, "Filosofia"));
    evento->addAsis(new Asistente("Luisa", 25));
    
    eventos.push_back(evento);

    evento = new Conferencia("Innovación en la Educación", 120, "Santiago", "Tecnologías Educativas");
    evento->addAsis(new AsisPreferencial("María", 45, "Invidente"));
    evento->addAsis(new AsisPreferencial("Juan", 50, "Silla de ruedas"));
    evento->addAsis(new AsisPreferencial("Carmen", 38, "Discapacidad auditiva"));
    evento->addAsis(new Asistente("Pedro", 35));
    evento->addAsis(new Asistente("Luisa", 28));

    eventos.push_back(evento);


}
int main() {
    
    list<Evento*> eventos;
    poblar(eventos);
    menu(eventos);

    return 0;
}
