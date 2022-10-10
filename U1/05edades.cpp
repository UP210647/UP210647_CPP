/*Unidad 1.  Edades
Autor: David Alejandro Moreno Chaparro
Fecha: 16/09/2022
Descripcion: Se indica etapa de vida segun la edad del ususarios
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int edad;

    printf("Dame una edad entre 1 a 150 \n");
    scanf("%d", &edad);

    if (edad >= 1 && edad <= 150){
        if (edad >= 1 && edad <= 30){

            printf("Primera edad \n");
        }
        else if (edad >= 31 && edad <= 60){

            printf("Segunda edad \n");
        }
        else if (edad >= 61 && edad <= 90)
        {
            printf("Tercera edad \n");
        }
        else if (edad>=91 && edad<=150){

            printf("Horas extras \n");
        }
    
        
    }
    else{

    printf("Numero invalido \n");
    }

return 0;
}
