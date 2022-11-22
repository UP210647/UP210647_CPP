#include <iostream>

using namespace std;

#define c 4
#define f 4


void llenarM(int a[f][c]){
    int contador=1;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[i][j]=contador;
            contador=contador+1;
        }
        cout << endl;
    }
    
}

void imprimirM(int a[f][c]){
    cout << "Matriz" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << "\t";

        }
        cout << endl;
    }
    
}

void imprimirdiagonal(int a[f][c]){
    for (int i = 0; i < f; i++)
    {
        cout << a[i][i] << "\t";
    }
    cout << endl;
}

/*void sumarfila(int a[f][c],int r[f]){

for (int i = 0; i < f; i++)
{
    r[i]=0;
    for (int j = 0; j < c; j++)
    {  
        r[i]=r[i]+a[i][j];
    }
    cout << r[i] << endl; 
}
}*/

void imprimirtranspuesta(int a[c][f]){

for (int i = 0; i < f; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout << a[j][i]<<"\t";
    }
    cout << endl;
}


}

int main(int argc, char const *argv[])
{
    int matriz[f][c];
    int r[f];

    llenarM(matriz);
    cout << endl;
    imprimirM(matriz);
    cout << endl;
    imprimirdiagonal(matriz);
    cout << endl;
    imprimirtranspuesta(matriz);
    cout << endl;



    return 0;
}
