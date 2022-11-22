#include <iostream>
#include <math.h>
using namespace std;

#define nd 5

double resta(double num, double media){
    double res=pow(num-media,2);
    return res;
}

void llenarVres(double res[], int numd, double datos[], double med){
    for (int i = 0; i < numd; i++)
    {
        res[i]=resta(datos[i], med);
    } 
}

double promedio(double datos[nd],int numd){
    int promedio=0;
    for ( int i = 0; i < numd; i++)
    {
        promedio=promedio+datos[i];
    }
    
    return promedio/numd;
}

double sum(double res[], double sumatoria,int numd){

    for (int i = 0; i < numd; i++)
    {
        sumatoria=sumatoria+res[i];
    }
    
    return sumatoria;
}



int main(int argc, char const *argv[])
{
    double datos[]={600, 470, 170, 430, 300};
    double media=promedio(datos, nd);
    double res[nd];
    double sumatoria, des, desm;

    llenarVres(res, nd, datos, media);
    sumatoria=sum(res, sumatoria, nd);
    des=sqrt(sumatoria/nd);
    desm=sqrt(sumatoria/(nd-1));

    cout << "Desviacion estandar poblacional: " << des <<  endl;
    cout << "Desviacion estandar de la muestra: " << desm <<  endl;
    
    
    return 0;
}
