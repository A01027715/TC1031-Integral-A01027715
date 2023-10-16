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
    Vuelo         MX;
    Sorts<Vuelo>  sorts;
    string        line, res;
    int           ord,rin;
    char          end = ','; 
    List<Vuelo>   MEX;
    vector<Vuelo> MEX1,MEX2;
    vector<int>   Aeo, Hor;

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

        MEX.insertion(Vue); 
    }

    MX.imprime_avion();

    while (true){
        MX.imprime_menu();
        cin >> rin;
        if (rin == 1){
            cout << "_______________________________________ \n";
            cout << "A donde quieres ir?: ";
            cin  >> res;
            MEX1 =  MEX.search(res);

            if (sorts.cont(MEX1) != 0){
                while (true){
                    MX.imprime_orden();
                    cin  >> ord;

                    if (ord == 1){
                        MEX2 = sorts.ordenaBurbuja(MEX1,1);
                        MX.imprime_info(MEX2);
                        break;
                    }

                    if (ord == 2){
                        MEX2 = sorts.ordenaBurbuja(MEX1,2);
                        MX.imprime_info(MEX2);
                        break;
                    }

                    else {MX.imprime_error(1);}
                }
            }
            else {MX.imprime_error(2);}
        }
        else if (rin == 2) {break;}

        else {MX.imprime_error(3);}
    }
    file.close();
}