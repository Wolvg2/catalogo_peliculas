#include "Video.h"

Video::Video(string iD, string nombrePS, string genero, double calificacion, double duracion, string fechaEstreno)
{
    this->iD=iD;
    this->nombrePS=nombrePS;
    this->genero=genero;
    this->calificacion=calificacion;
    this->duracion=duracion;
    this->fechaEstreno=fechaEstreno;
}

string Video::getID()
{
    return iD;
}

string Video::getNombrePS()
{
    return nombrePS;
}

string Video::getGenero()
{
    return genero;
}

double Video::getDuracion()
{
    return duracion;
}

double Video::getCalificacion()
{
    return calificacion;
}

string Video::getFechadeEstreno()
{

    return fechaEstreno;
}

void Video::muestraGenero(const string &genero)
{
    cout << "Estos son los videos del genero buscado: " << genero << endl;
    for(Video* video : videos){

        if(video->getGenero().find(genero) != string::npos){

            video->getID();
            video->getNombrePS();
            video->getCalificacion();
            video->getDuracion();
            video->getFechadeEstreno();
        }
    }

}

void Video::setCalificacion(int calificacion)
{
    this->calificacion=calificacion;
    
}

