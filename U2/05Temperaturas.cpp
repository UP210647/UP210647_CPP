/*Unidad 2.  Temperaturas
Autor: David Alejandro Moreno Chaparro
Fecha: 19/10/2022
Descripcion:Hacer un programa en el que se ingresen 6 
temperaturas y determine el promedio, la mas baja y la 
mas alta.
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t[5];
    int p=0, pf , a=0, b=0, n;

    cout << "Dame 6 temperaturas" << endl;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Dime la temperatura " << i << " " ;
        cin >> t[i];
        p=p+t[i];
        
    }

    a=t[0];
    b=t[0];

    for (int i = 0; i <=5; i++)
    {
          if (t[i]>=a)
        {
            a=t[i];
        }else if (t[i]<b) 
        {
            b=t[i];
        }
    }
    

    pf=p/6;
    cout << "El promedio es: " << pf<< endl;
    cout << "El mayor es: " << a << endl;
    cout << "El menor es: " << b << endl;
    return 0;
}
