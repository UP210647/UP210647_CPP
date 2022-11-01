/* Unidad 2. Factorial
Autor: David Alejandro Moreno Chaparro
Fecha: 07/10/2022
Descripcion: Multiplica todos los numeros del 1 al 10
*/
#include <iostream>

int main(int argc, char const *argv[])
{
    int sum=1;
    int cont=1;
    int n;
    
    printf("Dame un numero");
    scanf("%d", &n);
    if(n==0)
    {
        printf("El factorial es 1 \n");
    } else { 
    while (cont<=n)
    {
        sum=sum*cont;
        cont=cont+1;
    }
    
    printf("El factorial es %d \n", sum);
    }
    return 0;
}