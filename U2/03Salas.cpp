/*Unidad 2.  Salas de juegos
Autor: David Alejandro Moreno Chaparro
Fecha: 17/10/2022
Descripcion: Escribir un programa para una empresa que tiene salas de juegos para 
todas las edades y quiere calcular de forma automática el precio que debe cobrar a 
sus clientes por entrar.
*/

#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int edad;
    printf("Dime tu edad ");
    scanf("%d", &edad);

    if (edad<4)
    {
        printf("Tu entrada es gratis \n");
    } else if (edad>=4 & edad<=18 )
    {
        printf("Tu entrada cuesta 5$ \n");
    }else if (edad>18 )
    {
        printf("Tu entrada cuesta 10$ \n");
    }
    return 0;
}