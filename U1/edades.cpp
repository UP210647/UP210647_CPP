#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    int edad;

    printf ("Dame una edad entre 1 a 150 \n");
    scanf ("%d", &edad );

    if (edad>=1 && edad<=150){
        if (edad>=1 && edad<=30){
            printf("Primera edad");
        }else{
            if(edad>=31 && edad<=60){
                printf("Segunda edad");
            }else{
                if (edad>=61 && edad<=60){
                  printf("Tercera edad");
            }else{
                   printf("Horas extras");
            }
    }
    }
    }else{
        printf ("Numero invalido");
    }

    return 0;
}
