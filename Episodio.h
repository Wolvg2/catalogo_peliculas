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

class Episodio : public Video
{
protected:
    int temporada;
    int numEpisodio;
    vector <Episodio* > episodios;

public:
    Episodio(string iD, string nombrePS, int temporada, int numEpisodio);
    Episodio(const vector <string>& datos);
    string getID();
    string getNombrePS();
    int getTemporada();
    int getNumEpisodio();
    virtual void muestraCalifMayor();


};








#endif