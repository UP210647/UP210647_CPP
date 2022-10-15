/*Unidad 2.  Puntaje.
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Ejercicio 2 del pdf.
*/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main(int argc, char const *argv[])
{
    float p;
    int n;
    printf("¿Cual es tu puntuacion? \n");
    scanf("%f",&p);
    

    if(p==0.0 || p==round(0.4) || p>=0.6)
    {
        if (p==0.0)
        {
            n=2400*0.0;
            printf("Tu nivel es Inaceptable y recibiras %d $ \n",n);
        }else if(p==0.4)
        {
            n=2400*0.4;
            printf("Tu nivel es Aceptable y recibiras %d $ \n",n);
        }else if(p>=0.6)
        {
            n=2400*p;
            printf("Tu nivel es Meritorio y recibiras %d $ \n",n);
        }
    }

    return 0;
}
