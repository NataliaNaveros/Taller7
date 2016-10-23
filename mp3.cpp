/*Nombre: Natalia Isabel Hernandez Naveros
Fecha:22/10/2016
Taller 7*/
#include <iostream>
#include <string.h>
using namespace std;
//Estructura
struct cancion {
    char artista [30];
    char titulo [60];
    float duracion;
    float tamano;
};
//Declaracion de funciones
void anadirCancion (cancion[], int);
void mostrarTitulo(cancion[], int);
bool existeArtistaTitulo (cancion[],int);
cancion crearCancion();
//Funcion principal
int main () {
    int L=3;
    cancion c[L];
    anadirCancion(c,L);
    mostrarTitulo(c,L);
    existeArtistaTitulo(c,L);
    return 0;
}
//funcion para añadir canciones
void anadirCancion (cancion c[], int L){
    for (int i=0;i<L;i++){
        c[i]=crearCancion();
    }
}
//Funcion para crear canciones
cancion crearCancion(){
    cancion ca;
    cout << "Añadir una nueva cancion" << endl;
    cout << "Ingrese artista" << endl;
    cin.getline(ca.artista,30);
    cout << "Ingrese titulo" << endl;
    cin.getline(ca.titulo,60);
    cout << "Ingrese duracion" << endl;
    cin>>ca.duracion;
    cout << "Ingrese tamaño (kb)" << endl;
    cin>>ca.tamano;
    cin.ignore();
    return ca;
}
//Funcion para mostar canciones
void mostrarTitulo(cancion c[], int L){
    for (int i=0;i<L;i++){
            cout << "Cancion numero \t" << i << endl;
            cout << "mostar cancion \t" << c[i].titulo << endl;
    }
}
//Funcion para ver si la cancion o el artista existe
bool existeArtistaTitulo (cancion c[],int L){
    string buscar;
    cout << "Ingrese palabra a buscar" << endl;
    cin>>buscar;
        for (int i=0;i<L;i++){
                if (c[i].artista == buscar || c[i].titulo==buscar){
            cout << "Cancion numero \t" << i << endl;
            cout << "mostar cancion \t" << c[i].titulo << endl;
            cout << "artista cancion \t" << c[i].artista << endl;

        }else{
            cout << "no existe" << endl;
        }
    }
}

