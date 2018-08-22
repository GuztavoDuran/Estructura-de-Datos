#include <iostream>
#include <conio.h>
using namespace std;

struct direccion{
    char calle[20];
    int CP;
    char municipio[20];
};
struct persona{//estructura
    char nombre[20];
    int edad;
    float estatura;

    struct direccion dire; //dire inidica el nombre de la variable
}/*P1,P2*/; //tambien se pueden dar de alta en este espacio antes del punto y coma


int main( ){
    //struct persona P1, P2; //se dan de alta las estructuras
    struct persona P1 [5];//tambien se pueden dar como arreglo

    for(int i=0; i<2; i++){
        cout << "Nombre: ";
        cin.getline(P1[i].nombre,20, '\n');
        cout << "edad: ";
        cin >> P1[i].edad;
        cout << "estatura: ";
        cin >> P1[i].estatura;
        cout << "calle: ";
        cin.getline(P1[i].dire.calle, 20, '\n');
        //fflush(stdin);//en caso de que se llene el bufer
        cin.getline(P1[i].dire.calle, 20, '\n'); //para eso se evita el fflush(stdin;
    }

    //mostrar lo guardado
    cout << "\n Nombre guardado: " << P1[0].nombre;
    cout << "\n edad gusradada: " << P1[0].edad;
    cout << "\n estatura guardada: " << P1[0].estatura;
    getch();
    return 0;
}
