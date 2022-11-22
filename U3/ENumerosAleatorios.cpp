#include <iostream>
#include <time.h>
using namespace std;

#define c 3
#define f 2


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int matriz[f][c];
    int matrizT[c][f];
    int n;

    cout << "Matriz Original" << endl;
    for (size_t i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            n=21+rand() % (10);
            matriz[i][j]=n;
            cout << matriz[i][j] << "\t";
            matrizT[j][i]=matriz[i][j];
        }
        cout << endl;
        cout << endl;
    }
    
    cout << "Matriz Transpuesta" << endl;

    for (size_t i = 0; i < c; i++)
    {
        for (int j = 0; j < f; j++)
        {
            cout << matrizT[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}


