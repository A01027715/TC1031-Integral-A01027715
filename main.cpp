/*
 * main.h
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

using namespace std;

int main(){
    Vuelo MX;
    Sorts<Vuelo> sorts;
    string line, res;
    int ord;
    char end = ','; 
    vector<Vuelo> MEX,MEX1,MEX2;
    vector<int> Aeo, Hor;
    ifstream file("C:/Users/lando/Downloads/AeroMex.csv");

    while(getline(file, line)){
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

        MEX.push_back(Vue); 
    }

    MX.imprime_avion();
    cout<<"Bienvenido al sistema de busqueda de vuelos del Aeropuerto Internacional Benito Juarez Ciudad de Mexico:"<<endl;

    while (true){
        cout << "_______________________________________ \n";
        cout<<"A donde quieres ir?: ";
        cin>> res;
        MEX1= sorts.busqBinaria(MEX,res);

        if (sorts.cont(MEX1) != 0){
            while (true){
                cout << "_______________________________________ \n";
                cout<<"Como lo quieres ordenado?"<<endl;
                cout<<"1. Hora"<<endl;
                cout<<"2. Aerolinea"<<endl;
                cin>> ord;
                vector<int> n;

                if (ord == 1){
                    MEX2= sorts.ordenaBurbuja(MEX1,1);
	                MX.imprime_info(MEX2);
                    break;
                }

                else if (ord == 2){
                    MEX2= sorts.ordenaBurbuja(MEX1,2);
	                MX.imprime_info(MEX2);
                    break;
                }

                else {cout<<"ERROR RESPUESTA NO DISPONIBLE"<<endl;}
            }
            break;
        }
        else {cout<<"ERROR NO EXISTE NINGUN VUELO A ESE DESTINO"<<endl;}
    }
    file.close();
}