#include <iostream>
#include <math.h>
using namespace std;

#define n 10

void comprobacion(int monto[], int dinero, int res[]){
    for (int i = 0; i < n; i++)
    {
        if(dinero/monto[i]>=1){
            res[i]=dinero/monto[i];
            dinero=dinero%monto[i];
        }else{
            res[i]=dinero/monto[i];
            dinero=dinero%monto[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    int dinero;
    int monto[]={1000,500,200,100,50,20,10,5,2,1};
    string valores[]={"1000", "500", "200", "100","50","20","10","5","2","1"};
    int res[n];

    cout << "Dame un monto" << endl;
    cin >> dinero;
    comprobacion(monto,dinero,res);

    for (int i = 0; i < n; i++)
    {
        cout << valores[i] << " : " << res[i] << endl;
    }
    

    return 0;
}


