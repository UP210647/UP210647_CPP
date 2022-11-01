/* Unidad 2. Decimal a Binario
Autor: David Alejandro Moreno Chaparro
Fecha: 12/10/2022
Descripcion: Convierte un numero decimal a binario 
*/

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int n;
    string b = "";
    cout << "Introduzca un número ";
    cin >> n;
    if (n > 0)
    {
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                b = "0" + b ;
            }
            else
            {
                b = "1"+b ;
            }
            n = n / 2;
        }
    }
    cout << "El resultado es: " << b << endl;

    return 0;
}
