#include "Pelicula.h"

Pelicula::Pelicula(string iD, string nombrePS, string genero, double calificacion, double duracion, string fechaEstreno) : Video(iD, nombrePS, genero, calificacion, duracion, fechaEstreno)
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

