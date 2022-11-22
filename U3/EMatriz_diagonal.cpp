#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
 {
    int c=3, f=3 , cont=1;
    int m[f][c];

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            m[i][j]=cont;
            cont=cont+1;
        }    
    }

for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i==j){
                cout << m[i][j] << "\t";
            } else {
                cout << " " << "\t";
            }
        }
        cout << endl; 
    }


}