#include "Video.h"

Video::Video()
{
   
}

string Video::getID()
{
    return iD;
}

string Video::getNombrePS()
{
    return nombrePS;
}

string Video::getGenero()
{
    return genero;
}

double Video::getDuracion()
{
    return duracion;
}

void Video::muestraGenero()
{
    string buscarGenero;
    cout << "Que genero deseas buscar: " << endl;
    cin>>buscarGenero;

    ifstream archivo("DatosPeliculas.csv");
    if(archivo.is_open()){

    }
    else{
        cout << "No se puede abrir el archivo" << endl;
    }

    string texto;
    while (getline(archivo, texto)){ //getline permite leer una linea de un archivo en forma string

    if(texto.find(buscarGenero) != std::string::npos){

        cout << "Se encontraron estos generos: " << buscarGenero << "\: " << texto << endl;
    }
    }
}

void Video::muestraCalificacion()
{
    double calif;
    cout << "De que calificacion (0 al 7) episodios de series o peliculas estas buscando" << endl;
    cin >> calif;

    if(calif > 7 ){

        cout << "No hay peliculas o episodios por mostrar, vuelve a intentarlo con una calificacion entre 0 y 7" << endl;
    }

    else {

ifstream archivo("DatosPeliculas.csv");
    if(archivo.is_open()){

    }
    else{
        cout << "No se puede abrir el archivo" << endl;
    }

    string linea;
    while (getline(archivo, linea)){ //getline permite leer una linea de un archivo en forma string

    if(linea.find(calif) != std::string::npos){

        cout << "Se encontraron peliculas y episodios con la calificacion solicitada: " << calif << "\: " << linea<< endl;
    }
    }

    }
}
