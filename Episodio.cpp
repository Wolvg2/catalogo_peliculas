#include "Episodio.h"

Episodio::Episodio(string iD, string nombrePS, int temporada, int numEpisodio) : Video(iD, nombrePS, genero, calificacion, duracion, fechaEstreno)
{
    this->temporada=temporada;
    this->numEpisodio=numEpisodio;
}

Episodio::Episodio(const vector<string> &datos) : Video(datos)
{
    iD = datos[0];
    nombrePS = datos[1];
    temporada=stod(datos[6]);
    numEpisodio=stod(datos[7]);
}

string Episodio::getID()
{
    return iD;
}

string Episodio::getNombrePS()
{
    return nombrePS;
}

int Episodio::getTemporada()
{
    return temporada;
}

int Episodio::getNumEpisodio()
{
    return numEpisodio;
}



void Episodio::muestraCalifMayor()
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