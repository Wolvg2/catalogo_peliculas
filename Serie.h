/*
Autor Emiliano Caballero Mendoza
Clase Serie
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Video.h"
#include "Episodio.h"
using namespace std;
#ifndef SERIE_H
#define SERIE_H

class Serie : public Episodio, public Video
{
private:
public:
    Serie(string iDE, string nombreE, int temporada, int numEpisodio, string iD, string nombrePS, string genero, double calificacion, double duracion, string fechaEstreno);
    string getIDE();
    string getNombreE();
    int getTemporada();
    int getNumEpisodio();
    void muestraCalificacion();
    void muestraEpisodios(const string& serie);

};








#endif