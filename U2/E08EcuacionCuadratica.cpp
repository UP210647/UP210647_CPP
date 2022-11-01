/* Unidad 2. Ecuacion Cuadratica
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Resuelve la siguiente x2-8x+15=0
*/

#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a=1;
    int b=-8;
    int c=15;
    int x1,x2;

    x1=(-b+sqrt((b*b)-4*a*c))/2*a;
    x2=(-b-sqrt((b*b)-4*a*c))/2*a;

    printf("X1= %d \n", x1);
    printf("X2= %d \n", x2);

    return 0;
}
