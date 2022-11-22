#include <iostream>
using namespace std;

#define PI 3.14159265358979323846

void menu();

double g2r(double grados){
    return grados * PI/180;
}

double r2g(double radianes){
    return radianes*180/PI;
}

int main(int argc, char const *argv[])
{
    int op;
    double grados, radianes;

    menu();
    cin >> op;
    while (op != 1 && op != 2){
        cout <<"numero invalido, ingresa otro" << endl;
        cin >> op;
    }

    if (op==1){
        cout << "¿Cuantos grados quieres convertir a radianes?" << endl;
        cin >> grados;
        cout << g2r(grados) << " rad" << endl;
    }else{
        cout << "¿Cuantos radianes quieres convertir a grados?" << endl;
        cin >> radianes;
        cout << r2g(radianes) << " grad" << endl;
    }

    return 0;
}

void menu(){
    cout << "Para cambiar de grados a radianes presiona 1 \n"<< "Para cambiar de radianes a grados presiona 2 \n";
}