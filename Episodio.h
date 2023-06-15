/*
Autor Emiliano Caballero Mendoza
Clase Episodio
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Video.h"
using namespace std;
#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio
{
protected:
    string iDE;
    string nombreE;
    int temporada;
    int numEpisodio;
    vector <Episodio* > episodios;

public:
    Episodio(string iDE, string nombreE, int temporada, int numEpisodio);
    string getIDE();
    string getNombreE();
    int getTemporada();
    int getNumEpisodio();


};








#endif