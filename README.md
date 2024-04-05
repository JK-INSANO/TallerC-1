# TallerC-1

*Rubén Rojas Castro | 20.441.846-2 | ruben.rojas@alumnos.ucn.cl*
*Vicente Araya Carmona | 20.797.409-9 | vicente.araya@alumnos.ucn.cl*


Taller 01:

    Cumple con crear nuevos eventos.
    Registra asistente a dichos eventos.
    Puede listar cada asistente por evento
    Genera los informes solicitados


# Eventos
   *Se utilizo herencia ya que compartian atributos, cada uno de los eventos tiene un atributo unico:*

    Partido :  equipo.

    Conferencia: tema.

# Asistentes
  *Se utilizo herencia ya que compartian atributos, cada uno de los asistentes tiene un atributo unico:*

    AsisPrefencial :  Condicion.

    AsisUniversitario: Facultad.

# Poblado

    evento *Partido*: nombre:"1ra division";Duracion: 90, Ubicacion:"Coquimbo";Equipo: "Coquimbo vs Colo-Colo"

    AsisPreferencial(Nombre= "papimiki",Edad= 50,Condicion= "Cojo")
    AsisUniversitario(Nombre= "Ruben",Edad= 21,Facultad= "ITI")
    Asistente(Nombre= "normal",Edad= 22)


    evento *Partido*: Nombre "Copa Libertadores",Duracion 120, Ubicacion"Santiago", Equipo"Universidad de Chile vs Flamengo");
    AsisPreferencial(Nombre="Juan", Edad= 45,Condicion= "Ciego"));
    AsisUniversitario(Nombre="María", Edad= 23,Facultad= "Ingeniería Civil"));
    Asistente(Nombre="Carlos", Edad=30));
    
 
    evento =  Conferencia("Tecnología y Futuro", 90, "Valparaíso", "Inteligencia Artificial");
    AsisPreferencial(Nombre="Laura", Edad=40, Condicion="Manco"));
    ( AsisPreferencial(Nombre"Pedro", Edad=35, Condicion="Silla de rueda"));
    ( AsisUniversitario(Nombre"Ana",Edad 28, Facultad="Filosofia"));
    ( Asistente(Nombre="Luisa",Edad= 25));
    

    evento =  Conferencia("Innovación en la Educación", 120, "Santiago", "Tecnologías Educativas");
    AsisPreferencial(Nombre="María",Edad= 45, Condicion="Invidente"));
    AsisPreferencial(Nombre="Juan",Edad= 50, Condicion="Silla de ruedas"));
    AsisPreferencial("Nombre=Carmen", Edad=38,Condicion? "Discapacidad auditiva"));
    Asistente(Nombre="Pedro", Edad=35));
    Asistente(Nombre="Luisa", Edad= 28));

# Compilar:
    g++ Asistente.cpp Evento.cpp AsisPreferencial.cpp AsisUniversitario.cpp Partido.cpp Conferencia.cpp main.cpp -o run

# Ejecutrar:
    ./run