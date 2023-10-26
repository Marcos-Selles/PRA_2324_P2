#include "DyV.h"
#include <iostream>
using namespace std;
int main(){
        vector<int> s = {11,12,13,14,15,16,17,18,19,20};
        cout << "Busqueda entero 12 en posicion: "<<BusBin(12,s,0,s.size()) << endl;

        vector<char> r = {'a','b','c','d','e','f','g','h','i','j'};
        cout << "Busqueda char g en posicion: "<<BusBin('g',r,0,r.size()) << endl;

        vector<double> t = {1.25,2.86,4.5,6.7,8.1,9.7,10.25,11.4,13.56,17.25};
        cout << "Busqueda float 6.7 en posicion: "<<BusBin(6.7,t,0,t.size()) << endl;
        cout << "Busqueda float 8.8 en posicion: "<<BusBin(8.8,t,0,t.size()) << endl;


cout << endl << "Busqueda invertida:" << endl;

	vector<int> i = {20,19,18,17,16,15,14,13,12,11};
        cout << "Busqueda entero 13 en posicion: "<<BusBinInv(13,i,0,i.size()) << endl;

        vector<char> j = {'j','i','h','g','f','e','d','c','b','a'};
        cout << "Busqueda char g en posicion: "<<BusBinInv('g',j,0,j.size()) << endl;

        vector<double> k = {17.25,13.56,11.4,10.25,9.7,8.1,6.7,4.5,2.86,1.25};
        cout << "Busqueda float 6.7 en posicion: "<<BusBinInv(6.7,k,0,k.size()) << endl;

        return 0;
}

