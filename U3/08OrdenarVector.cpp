#include<iostream>
using namespace std;

//Vector ordenado a porel metodo de burbuja de forma ascendentemente
void llenar(int V[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Ingresa el valor "<< i <<endl;
        cin >> V[i];
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "¿Cuantos numeros quieres en el vector?"<<endl;
    cin >> n;
    int V[n];
    llenar(V, n);

    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            if(V[j]<V[j+1])
            swap(V[j], V[j+1]);
        }
              
    }
    cout << "Vector ordenado ascendentemente" << endl; 
    for (int i=n-1; i>=0; i--)
    {
        cout << V[i] << endl;
    }
    
    
    return 0;
}
