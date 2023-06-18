#include "Video.h"

//Constrcutor con las variables
Video::Video(string iD, string nombrePS, string genero, double calificacion, double duracion, string fechaEstreno)
{
    this->iD=iD;
    this->nombrePS=nombrePS;
    this->genero=genero;
    this->calificacion=calificacion;
    this->duracion=duracion;
    this->fechaEstreno=fechaEstreno;
}

//Constructor con vector para recorrer los datos 
Video::Video(const vector<string> &datos)
{
    iD = datos[0];
    nombrePS = datos[1];
    genero = datos[2];
    calificacion = stod(datos[3]);
    duracion = stod(datos[4]);
    fechaEstreno = datos[5];

}

string Video::getID() //Regresa el id
{
    return iD;
}

string Video::getNombrePS() //Regresa el nombre
{
    return nombrePS;
}

string Video::getGenero() //Regresa el genero
{
    return genero;
}

double Video::getDuracion() //Regresa la duracion
{
    return duracion;
}

double Video::getCalificacion() //Regresa la calificacion
{
    return calificacion;
}

string Video::getFechadeEstreno() //Regresa la fecha de estreno
{

    return fechaEstreno;
}



void Video::muestraGenero() //Muestra generos de un video 
{
    for(Video* video : videos){
        string genero;

        if(video->getGenero().find(genero) != string::npos){

            video->getID();
            video->getNombrePS();
            video->getCalificacion();
            video->getDuracion();
            video->getFechadeEstreno();
        }
    }
}

void Video::calificarVideo() //Busca un titulo y recorre el vector hasta encontrarlo y cambia calificacion
{
    double calif;
    cin >> calif;
    string titulo;
    cin>>titulo;

    for(Video* video : videos){
        if(video->getNombrePS()== titulo){

            video->calificacion=calif;
        }

    }
    
}

void Video::muestraCalifMayor() //Recorre el vector hasta encontrar los videos con la calificacion solicitada
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


