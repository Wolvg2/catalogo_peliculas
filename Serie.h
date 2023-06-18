/*
Autor Emilano Caballero
Clase Serie
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Episodio.h"
using namespace std;
#ifndef SERIE_H
#define SERIE_H

class Serie : public Episodio
{
private:
    
public:
    Serie(); // Constructor por default
    Serie(const vector <string>& datos); //Constructor con vector 
    string getID(); //Get que regresa el id de la serie
    string getNombrePS(); //Get que regresa el nombre de la serie 
    int getTemporada(); //Get que regresa la temporada
    int getNumEpisodio(); //Get que regresa el num de episodios
    void mostrarSerie(); //metodo muestra los capitaulos de la serie

};




#endif