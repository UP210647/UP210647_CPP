/* Unidad 2. Sumatoria
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Suma todos los numeros del 1 al 10
*/
#include <iostream>
int main(int argc, char const *argv[])
{
    int sum=0;
    int cont=1;
    
    while (cont<=10)
    {
        sum=sum+cont;
        cont=cont+1;
    }
    
    printf("La sumatoria es %d \n", sum);

    return 0;
}

