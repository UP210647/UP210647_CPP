/* Unidad 2. CICLO WHILE
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Mostrar la tablas de multiplicar pedidas
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i;
    char opcion='s';
    printf ("Tabla de multiplicar \n");

    while (opcion=='s')
    {
        printf("Numero:");
        scanf("%d", &n);

        i= 1;
        do
        {
            printf("%d x %d = %d \n", n,i,n*1);
            i++;
        } while (i<=10);
        


        printf("\n Desea otro <s/n>");
        scanf("%s", &opcion);

    }
    printf("... Hecho");
    return 0;
}

