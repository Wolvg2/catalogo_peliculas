#include "Serie.h"

Serie::Serie(string iDE, string nombreE, int temporada, int numEpisodio, string iD, string nombrePS, string genero, double calificaion, double duracion, string fechadeEstreno) : Episodio(iDE, nombreE, temporada, numEpisodio), Video(iD, nombrePS, genero, calificacion, duracion, fechaEstreno)
{
    
}

string Serie::getIDE()
{
    return iDE;
}

string Serie::getNombreE()
{
    return nombreE;
}

int Serie::getTemporada()
{
    return temporada;
}

int Serie::getNumEpisodio()
{
    return numEpisodio;
}

void Serie::muestraCalificacion()
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

void Serie::muestraEpisodios(const string &serie)
{
    cout << "Episodios" << serie << endl;

    for(Video* video : videos){

        Serie* serieP = dynamic_cast<Serie*>(video);
        if(serieP && serieP->getNombrePS() == serie){

            serieP->getID();
            serieP->getNombrePS();
            serieP->getGenero();
            serieP->getCalificacion();
            serieP->getDuracion();
            serieP->getFechadeEstreno();
        }
    }

}


