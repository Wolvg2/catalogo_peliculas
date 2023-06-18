#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Episodio.h"

using namespace std;

vector<string> separar(string linea);
void cargaDatos() {
    
    ifstream entrada;

    entrada.exceptions(ifstream::failbit);
    try
    {
        entrada.open("DatosPeliculas.csv");

        string linea;
        int numeroLinea = 1;
        vector<Video *> videos;

        while (getline(entrada, linea))
        {
            vector<string> datos = separar(linea);
            cout << (numeroLinea++);
            if (datos.size() == 6)
            {
                cout << "Pelicula: ";
                Pelicula *pelicula = new Pelicula(datos);
                videos.push_back(pelicula);
                cout << "ID" << pelicula->getID() << endl;
                cout << "Nombre" << pelicula->getNombrePS() << endl;
                cout << "Genero" << pelicula->getGenero() << endl;
                cout << "Calificacion" << pelicula->getCalificacion() << endl;
                cout << "Duracion" << pelicula->getDuracion() << endl;
                cout << "Fecha de estreno" << pelicula->getFechadeEstreno() << endl;
                delete pelicula;
            }
            else
            {
                cout << "Episodio: ";
                Episodio *episodio = new Episodio(datos);
                videos.push_back(episodio);
                cout << "ID" << episodio->getID() << endl;
                cout << "Nombre" << episodio->getNombrePS() << endl;
                cout << "Genero" << episodio->getGenero() << endl;
                cout << "Calificacion" << episodio->getCalificacion() << endl;
                cout << "Duracion" << episodio->getDuracion() << endl;
                cout << "Fecha de estreno" << episodio->getFechadeEstreno() << endl;
                delete episodio;
            }
            cout << endl;
        }
    }
    catch (ifstream::failure &e)
    {
        cout << "ERROR excepcion al abrir el archivo" << endl;
        
    }
    entrada.close();
}

vector<string> separar(string linea)

{  vector<string> tokens;       // Componentes de la línea
    stringstream entrada(linea); // flujo de datos a partir de una cadena
    string dato;                 // token individual
    int numeroTokens = 0;
    while (getline(entrada, dato, ','))
    {
        if (dato != "" & dato != "\n" && dato != "\r")
        {
            cout << dato << numeroTokens << endl;
            tokens.push_back(dato); // Guarda en el vector
            numeroTokens++;
        }
    }

    bool incorrecto = true;
    while (incorrecto)
    {

        try
        {
            cout << "tokens: " << tokens.at(tokens.size()-1) << endl;
            incorrecto=false;
        }
        catch (out_of_range &e)
        {

            cout << "indice incorrecto " << endl;
            incorrecto = true;
        }
    }

    return tokens;
    // cout << "Tokens: " << numeroTokens << endl << endl;
}

int main(int argc, char const *argv[])
{
    int opcion;
    bool salida = false;
    vector<Video *> videos;

    do
    {
        cout<< "Emiliano Caballero Mendoza A01749050" << endl;
        cout << "1. Cargar el archivo de datos en formato **csv**." << endl
             << "2. Mostrar los videos en general con:" << endl
             << "3. Mostrar todos los episodios de una determinada serie que teclea el usuario." << endl
             << "4. Mostrar las películas con una calificacion mayor a un número tecleado por el usuario." << endl
             << "5. Calificar un video." << endl
             << "6. Calcular el promedio de la calificación de una serie (promedio de todos los episodios)." << endl
             << "7. Salir." << endl;
            cout << "Escoge tu opcion: " << endl;
            cin >> opcion;
        for (const auto& video : videos){
        switch (opcion)
        {
        case 1:
            cargaDatos();

            break;
        case 2:
            double calificacionMax;
            cout << "Ingresa la calificacion ";
            cin >> calificacionMax;
            video->muestraCalifMayor();

        
            video->muestraGenero();

            break;
        case 3:
            video->muestraCalifMayor();
            break;
        case 4:
            video->muestraCalifMayor();
            break;
        case 5:
            video->calificarVideo();
            break;
        case 6:
            
            break;
        case 7:
            salida = true;
            break;
        default:
            cout << "No existe esa opcion, vuelve a intentarlo" << endl;
            break;
        }
    break;
        }
    }while (!salida);
    
    return 0;
} 



