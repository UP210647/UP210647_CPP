/*Unidad 2.  ABC
Autor: David Alejandro Moreno Chaparro
Fecha: 29/09/2022
Descripcion: Muestra el abecedario en diferente orden
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char letra= 'A';
    char letra1= 'a';
    char letra2= 'z';
    char letra3= 'Z';

    for(int i=0; i<26; i++)
    {
        printf("%c \t", letra);
        letra=letra+1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t", letra1);
        letra1=letra1+1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t", letra2);
        letra2=letra2-1;
    }
    printf("\n");
    printf("\n");
    for(int i=0; i<26; i++)
    {
        printf("%c \t ", letra3);
        letra3=letra3-1;
    }
    printf("\n");
    printf("\n");

    return 0;
}
