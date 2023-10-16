/*
 * AutoMain.h
 *
 *  Created on: 07/09/2022
 *      Author: Ulises Orlando Carrizalez Lerín
 */

#include "Vuelos.h"
#include "Sort&Serch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include <sstream> 
#include <fstream>
#include "list.h"

using namespace std;

int main(){
    Vuelo         MX;                                       //Declaracion de variables.
    Sorts<Vuelo>  sorts;
    string        line, res;
    int           ord,rin;
    char          end = ','; 
    List<Vuelo>   MEX;                                      //Utilizamos por su simplicidad y características un linked list para guardar la información sin filtrar de todos los vuelos.
    vector<Vuelo> MEX1,MEX2;
    List<int>     Aeo, Hor;

    ifstream file("C:/Users/lando/Downloads/AeroMex.csv"); //Seleccion de la ubicacion de AeroMEX.csv

    while(getline(file, line)){                            //Lectura de AeroMEX.csv
        stringstream stream(line);  
        string Des, Aero, Mat, Hor, Estado, Pue, Ter;

        getline(stream, Des, end);
        getline(stream, Aero, end);
        getline(stream, Mat, end);
        getline(stream, Hor, end);
        getline(stream, Estado, end);
        getline(stream, Pue, end);
        getline(stream, Ter, end);
        Vuelo Vue (Des,Aero,Mat,Hor,Pue,Ter);

        MEX.insertion(Vue);                                //Guardamos la infromacion de los vuelos como objetos en un linked list.
    }

    MX.imprime_avion();

    MX.imprime_menu();
    cout << "1" << endl;
    rin = 1;
    if (rin == 1){
        cout << "_______________________________________ \n";
        cout << "A donde quieres ir?: ";
        cout << "OAXACA" << endl;
        res = "OAXACA";
        MEX1 =  MEX.search(res);                          //Utilizamos la funcion search de "list.h" para que nos regrese los valores del linked list en un vector.

        if (sorts.cont(MEX1) != 0){                      // Si el vector tiene contenido nos permite ordenar la informacion.
            MX.imprime_orden();
            cout << "1" << endl;
            MEX2 = sorts.ordenaBurbuja(MEX1,1);          //Para ordenar los valores usamos un Bubble Sort que dependiendo de lo que pida el usuario es lo que busca.
            MX.imprime_info(MEX2);

            MX.imprime_orden();
            cout << "2" << endl;
            MEX2 = sorts.ordenaBurbuja(MEX1,2);
            MX.imprime_info(MEX2);
        }
    }
    MX.imprime_menu();
    cout << "1" << endl;
    rin = 1;
    if (rin == 1){
        cout << "_______________________________________ \n";
        cout << "A donde quieres ir?: ";
        cout << "QUERETARO" << endl;
        res = "QUERETARO";
        MEX1 =  MEX.search(res);

        if (sorts.cont(MEX1) != 0){
            MX.imprime_orden();
            cout << "1" << endl;
            MEX2 = sorts.ordenaBurbuja(MEX1,1);
            MX.imprime_info(MEX2);

            MX.imprime_orden();
            cout << "2" << endl;
            MEX2 = sorts.ordenaBurbuja(MEX1,2);
            MX.imprime_info(MEX2);
        }
    }
    MX.imprime_menu();
    cout << "2" << endl;
    rin = 2;
    file.close();
}