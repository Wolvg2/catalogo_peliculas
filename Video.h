/*
Autor Emiliano Caballero Mendoza
Clase Video Abstracta

*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#ifndef VIDEO_H
#define VIDEO_H

class Video
{
private:
//Datos de las series y peliculas 
    string iD;
    string nombrePS;
    string genero;
    double calificacion;
    double duracion;
    string fechaEstreno;

public:
    Video(); // Constructor por default
    string getID(); //Get que regresa el id de la serie o pelicula 
    string getNombrePS(); //Get que regresa el nombre de la serie o pelicula
    string getGenero(); //Get que regresa el genero de la serie o pelicula
    double getDuracion(); //Get que regresa la duracion de la serie o pelicula 
    double getCalificacion(); //Get que regresa la calificacion 
    virtual void muestraGenero(); // Metodo virtual que permite buscar un genero en el archivo
    virtual void muestraCalificacion();
};

#endif