#include "Episodio.h"

Episodio::Episodio(string iD, string nombre, int temporada, int numEpisodio)
{
    this->iDE=iDE;
    this->nombreE=nombreE;
    this-> temporada=temporada;
    this->numEpisodio=numEpisodio;

}

string Episodio::getIDE()
{
    return iDE;
}

string Episodio::getNombreE()
{
    return nombreE;
}

int Episodio::getTemporada()
{
    return temporada;
}

int Episodio::getNumEpisodio()
{
    return numEpisodio;
}
