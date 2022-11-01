
/* Unidad 2. For for
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Todas las tablas 
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r=0;

    for (int i =1; i<=10; i++)
    {
        for(int j =1; j<=10; j++)
        {
            r=i*j;
            printf("%d x %d = %d",i,j,r);
            printf("\n");
        }
    
        printf("\n");
    }
    return 0;
}
