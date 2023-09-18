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
    Sorts<int> sorts;
    ifstream file("C:/Users/lando/Downloads/AeroMex.csv");
    string line;  
    char end = ','; 
    getline (file,line);
    vector<Vuelo> MEX;

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
    string res;
    cin>> res;
    
            while (true){
                cout << "_______________________________________ \n";
                cout<<"Como lo quieres ordenado?"<<endl;
                cout<<"1. Hora"<<endl;
                cout<<"2. Aerolinea"<<endl;
                int ord;
                cin>> ord;
                if (ord == 1){
                    std::vector<int> Hor;
                    Hor= MX.NHoraN(MEX);
                    sorts.ordenaMerge(Hor);
                    break;
                }
                else if (ord == 2){
                    std::vector<int> Aeo;
                    Aeo= MX.NAeroLineaN(MEX);
                    sorts.ordenaMerge(Aeo);
                    break;
                }
                else {cout<<"ERROR RESPUESTA NO DISPONIBLE"<<endl;}
            }
    }
    file.close();

}