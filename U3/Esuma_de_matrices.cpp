#include <iostream>
using namespace std;

 int main(int argc, char const *argv[])
 {
    int c=3, f=3 , cont=1;
    int m1[f][c];
    int m2[f][c];
    int resultado[f][c];

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m1[i][j]=cont;
            m2[i][j]=cont;
            cont=cont+1;
        }    
    }

    
    
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            resultado[i][j]=m1[i][j]+m2[i][j];
        }
            
    }

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;    
    }

    return 0;
 }
 