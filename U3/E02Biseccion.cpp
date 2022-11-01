#include <iostream>
#include <cmath>

using namespace std;

double fnEcuacion1(double x)
{ // x^2-8x+15
    double y;
    y = pow(x, 2) - 8 * x + 15;
    return y;
}

int main()
{
    double x1=4;
    double x2=7;
    double xm;
    double es=.00000001; //Error absoluto
    double er=abs(x2-x1); //Error relativo

    int i=1;
    while (er > es)
    {
        xm=(x1+x2)/2;
        if ((fnEcuacion1(x1)*fnEcuacion1(xm))<0)
        {
            x2=xm;
        }else 
        {
            x1=xm;
        }
        er=abs(x2-x1);
        i=i+1;
    }
    
    cout << xm << endl;
    cout << "Se corrio " << i << " veces" << endl;
    return 0;
}
