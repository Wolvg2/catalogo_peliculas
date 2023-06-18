/*
Autor Emiliano Caballero Mendoza
Clase Pelicula
*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Video.h"
using namespace std;
#ifndef PELICULA_H
#define PELICULA_H


class Pelicula : public Video
{
private:
    
public:
    Pelicula();
    Pelicula(const vector<string>& datos);
    string getID(); //Get que regresa el id de la serie o pelicula 
    string getNombrePS(); //Get que regresa el nombre de la serie o pelicula
    string getGenero(); //Get que regresa el genero de la serie o pelicula
    double getDuracion(); //Get que regresa la duracion de la serie o pelicula 
    double getCalificacion(); //Get que regresa la calificacion 
    string getFechadeEstreno(); // Get regresa la fecha de estreno
    void muestraCalificacion();
    virtual void muestraCalifMayor();
};









#endif