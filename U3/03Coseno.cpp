#include <iostream>
#include <math.h>
using namespace std;

#define n 6
#define PI 3.14159265358979323846

double g2r(double grados){
    return grados * PI/180;
}

long double factorial (int num)
{
    long double ft=1.0;

    for (int i=1; i<=num; i++){
        ft=ft*i;
    }
    return ft;
}

double cos(double x){
    double r=0;
    for (int i = 0; i <= n; i++)
    {
        r=r+(pow(-1, i)*((pow(x, 2*i))/factorial(2*i)));
    }
    
    
    return r;
}

int main(int argc, char const *argv[])
{
    double angulo;
    cout << "Dame un angulo" << endl;
    cin >> angulo;
    double a=g2r(angulo), res;
    res=cos(a);
    cout << res << endl;

    return 0;
}
