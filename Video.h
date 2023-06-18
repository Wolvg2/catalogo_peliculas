/*
Autor Emiliano Caballero Mendoza
Clase Video Abstracta

*/

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
#ifndef VIDEO_H
#define VIDEO_H

class Video
{
protected:
//Datos de las series y peliculas 
    string iD;
    string nombrePS;
    string genero;
    double calificacion;
    double duracion;
    string fechaEstreno;
    vector<Video* > videos;

public:
    Video(string iD, string nombrePS, string genero, double calificacion, double duracion, string fechaEstreno); // Constructor por default
    Video(const vector <string>& datos); //Constructor de vector 
    string getID(); //Get que regresa el id de la serie o pelicula 
    string getNombrePS(); //Get que regresa el nombre de la serie o pelicula
    string getGenero(); //Get que regresa el genero de la serie o pelicula
    double getDuracion(); //Get que regresa la duracion de la serie o pelicula 
    double getCalificacion(); //Get que regresa la calificacion 
    string getFechadeEstreno(); // Get regresa la fecha de estreno


    virtual void muestraGenero(); // Metodo virtual que permite buscar un genero en el archivo
    
    virtual void calificarVideo(); //Metodo que cambia calificacion de pelicula
    
    virtual void muestraCalifMayor(); //Metodo que muestra una videos mayor a la calificacion puesta

};

#endif