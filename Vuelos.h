/*
 * Vuelos.h
 *
 *  Created on: 18/09/2022
 *      Author: Ulises Orlando Carrizalez Lerín
 */

#ifndef Vuelos_h
#define Vuelos_h

#include <iostream> 
#include <sstream>
#include <fstream>
#include <vector>
#include <list>
#include <stdio.h>

using namespace std;

class Vuelo {
private:
    std::string Destino;
    std::vector<int> DestinoN;
    std::string Aerolinea;
    int AerolineaN;
    std::string Matricula;
    std::string Hora;
    int HoraN;
    std::string Puerta;
    std::string Terminal;

public:
	Vuelo ();
    Vuelo (std::string Des, std::string Aero, std::string Mat, std::string Hor, std::string Pue, std::string Ter);
    std::vector<int> ASCII (std::string letter);
    int Primer(std::vector<int> v);
    int SHoraN(string letter);
    std::vector<string> NDestinoN (std::vector<Vuelo> arr);
    std::vector<int> NAeroLineaN (std::vector<Vuelo> arr);
    std::vector<int> NHoraN (std::vector<Vuelo> arr);

    void imprime_info();
    void imprime_info(std::vector<Vuelo> arr);
    void imprime_avion();

    string get_Destino(){return Destino;}
    void set_DestinoN(string Des){DestinoN= ASCII(Des);};

    int get_AerolineaN(){return AerolineaN;}
    void set_AerolineaN(string Aero){AerolineaN= Primer(ASCII(Aero));};

    int get_HoraN(){return HoraN;}
    void set_HoraN(string Hor){HoraN= SHoraN(Hor);};

};

Vuelo::Vuelo (){
    Destino=" ";
    DestinoN= {0};
    Aerolinea=" ";
    AerolineaN=0;
    Matricula=" ";
    Hora=" ";
    HoraN=0;
    Puerta=" ";
    Terminal=" ";   
}

Vuelo::Vuelo (std::string Des, std::string Aero, std::string Mat, std::string Hor, std::string Pue, std::string Ter){
    Destino=Des;
    DestinoN= ASCII(Des);
    Aerolinea=Aero;
    AerolineaN=Primer(ASCII(Mat));
    Matricula=Mat;
    Hora=Hor;
    HoraN=SHoraN(Hor);
    Puerta=Pue;
    Terminal=Ter;
}
std::vector<int> Vuelo :: ASCII(std::string letter){
    int L= letter.length();
    std::vector<int> vec;
    for (int i = 0; i < L; i++){
        int x = letter.at(i);
        vec.push_back(x);
    }
    return vec;
}

int Vuelo :: Primer(std::vector<int> v){
    int res = v[0];
    return res;
}

int Vuelo:: SHoraN(string letter){
    int L= letter.length();
    int Total = 1000;
    int sum,r;
    for (int i = 0; i < L; i++){
        string nombre = letter.substr(i, i);
        if (nombre != ":"){
            istringstream(nombre) >> r;
            sum= sum + (Total*r);
            Total = Total /10;
        }
    }
    return sum;
}
std::vector<string> Vuelo::NDestinoN(std::vector<Vuelo> arr) {
    std::vector<string> vec;
    for (int i = 0; i < arr.size(); i++) {
        vec.push_back(arr[i].get_Destino());
    }
    return vec;
}

std::vector<int> Vuelo::NAeroLineaN(std::vector<Vuelo> arr) {
    std::vector<int> vec;
    for (int i = 0; i < arr.size(); i++) {
        vec.push_back(arr[i].get_AerolineaN());
    }
    return vec;
}

std::vector<int> Vuelo::NHoraN(std::vector<Vuelo> arr) {
    std::vector<int> vec;
    for (int i = 0; i < arr.size(); i++) {
        vec.push_back(arr[i].get_HoraN());
    }
    return vec;
}

void Vuelo::imprime_info(std::vector<Vuelo> arr){
    for (int i = 0; i < arr.size(); i++) {
        arr[i].imprime_info();
    }
}
void Vuelo::imprime_info(){
	cout << "_______________________________________ \n" ;
    cout << "Destino: "<< Destino << endl;
	cout << "Aerolinea: "<< Aerolinea << endl;
	cout << "ID: "<< Matricula << endl;
	cout << "Hora de Salida: "<< Hora << " PM" << endl;
    cout << "Puerta: " << Puerta << endl;
    cout << "Terminal: "<< Terminal << endl;
    cout << "_______________________________________ \n\n" ;
}

void Vuelo::imprime_avion(){
cout<<"                                    |"<<endl;
cout<<"                                    |"<<endl;
cout<<"                                  .-'-."<<endl;
cout<<"                                 ' ___ '"<<endl;
cout<<"                       ---------'  .-.  '---------"<<endl;
cout<<"       _________________________'  '-'  '_________________________"<<endl;
cout<<"        ''''''-|---|--/    \==][^',_m_,'^][==/    \--|---|-''''''"<<endl;
cout<<"                      \    /  ||/   H   \||  \    /"<<endl;
cout<<"                       '--'   OO   O|O   OO   '--'"<<endl;
}

#endif