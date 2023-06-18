#include "Serie.h"

//constructor por default
Serie::Serie() : Episodio(iD, nombrePS, temporada, numEpisodio)
{
}

//constructor del vector
Serie::Serie(const vector<string> &datos) : Episodio(datos)
{
}

string Serie::getID() //Regresa el id de la serie
{
    return iD;
}

string Serie::getNombrePS() //Regresa el nombre de la serie
{
    return nombrePS;
}

int Serie::getTemporada() //Regresa la temporada
{
    return temporada;
}

int Serie::getNumEpisodio() //Regresa el numero de episodios
{
    return numEpisodio;
}

void Serie::mostrarSerie()
{
    
}
