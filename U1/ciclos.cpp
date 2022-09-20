#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int suma = 0;
    int pares=0;
    int impares=0;
    int total=0;


    for (int i = 0; i <= n; i++)
    {

        
        suma = suma + i;
        if (i % 2==0){
            pares=pares+1;
        }
        else{
            impares=impares+1;
        }

        total=total+1;
    }
    printf("Hay %d numeros pares\n",pares);
    printf("Hay %d numeros impares\n",impares);
    printf("Hay %d numeros en total\n",total);
    printf("La suma de %d numeros es %d ",n,suma);

    return 0;
}
