/* Unidad 2. Break Continue
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Imprime del 1 al 10 y se salta el 6 mediante el uso del continue
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        else
        {
            printf("%d \n", i);
        }
        printf("numero %d \n", i);
    }
    printf("...Hecho \n");
    return 0;
}
