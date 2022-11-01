/*Unidad 3.  Funciones
Autor: David Alejandro Moreno Chaparro
Fecha: 18/10/2022
Descripcion: funciones
*/

#include <iostream>
#include <cmath>

using namespace std;

const double E = 2.71828182;

int doble(int d)
{
    int dob = d * 2;
    return d;
}

int sumatoria(int n)
{
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        r = r + i;
    }
    return r;
}

double Ecuacion(double x)
{
    double eq = x * x - 8 * x + 15;
    return eq;
}

double Ecuacion2(double x)
{
    return (pow(E, -x) + 4 * pow(x, 3) - 5);
}

string Camello(string x)
{
    int lon = x.length();
    for (int i = 0; i < lon; i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
        else
        {
            x[i] = tolower(x[i]);
        }
    }

    return x;
}

int main(int argc, char const *argv[])
{
    double ec;
    
        /*
            for (int i = 0; i <= 10; i++)
            {
                ec=Ecuacion(i);
                cout << "Cuando x es igual a " << i << " el resultado es: " << ec << endl;
            }
        
    x = Ecuacion2(1.05151652);
    cout << "El resultado es: " << x << endl;
    printf("%12.10f  \n", x);
    */

    string res = Camello("Upa");
    cout << res << endl;

    return 0;
}
