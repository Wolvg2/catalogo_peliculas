#include "Pelicula.h"

Pelicula::Pelicula() : Video(iD, nombrePS, genero, calificacion, duracion, fechaEstreno)
{
}

Pelicula::Pelicula(const vector<string> &datos) : Video(datos)
{
    
}

string Pelicula::getID()
{
    return iD;
}

string Pelicula::getNombrePS()
{
    return nombrePS;
}

string Pelicula::getGenero()
{
    return genero;
}

double Pelicula::getDuracion()
{
    return duracion;
}

double Pelicula::getCalificacion()
{
    return calificacion;
}

string Pelicula::getFechadeEstreno()
{
    return fechaEstreno;
}

void Pelicula::muestraCalificacion()
{
    int calif;
    cout << "Ingresa una calificacion" << endl;
    cin>> calif;

    for(Video* video : videos){

        if(video->getCalificacion() >= calif){

            video->getID();
            video->getNombrePS();
            video->getGenero();
            video->getCalificacion();
            video->getDuracion();
            video->getFechadeEstreno();
        }
    }

}

void Pelicula::muestraCalifMayor()
{
    double calificacionMax;
    for(Video* video: videos){
        
        if (video->getCalificacion() >= calificacionMax){

            video->getID();
            video->getNombrePS();
            video->getCalificacion();
            video->getDuracion();
            video->getFechadeEstreno();
        }
    }
}
