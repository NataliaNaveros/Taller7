/*Nombre: Natalia Isabel Hernandez Naveros
Fecha:22/10/2016
Taller 7*/
#include <iostream>
using namespace std;
//Estructuta
struct notas {
    char nombre [30];
    float notau;
    float notad;
    float notat;
    float ttnotas;
};
void anadirEstudiante (notas[], int);
void mostrarNotas (notas[], int);
//Funcion Principal
int main () {
    int N=5;
    notas ne[30];
    anadirEstudiante(ne,N);
    mostrarNotas(ne,N);
    return 0;
}
//Funcion para ingresar los datos del estudiante
void anadirEstudiante (notas ne[], int N){
    for (int i=0;i<N;i++){
        cout << "Nuevo estudiante" << endl;
        cout << "Ingrese nombre" << endl;
        cin.getline(ne[i].nombre,30);
        cout << "Ingrese nota 1" << endl;
        cin >>ne[i].notau;
        cout << "Ingrese nota 2" << endl;
        cin >> ne[i].notad;
        cout << "Ingrese nota 3" << endl;
        cin >> ne[i].notat;
        cin.ignore();
        ne[i].ttnotas=(ne[i].notau+ne[i].notad+ne[i].notat)/3;

    }
}
//Funcion para mostrar las notas
void mostrarNotas(notas ne[], int N){
    for (int i=0;i<N;i++){
            cout << "Nota numero" << i << endl;
            cout << "Estudiante:" << ne[i].nombre << endl;
            cout << "Nota definiviva:" << ne[i].ttnotas << endl;
    }
}


