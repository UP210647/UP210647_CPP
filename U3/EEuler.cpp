#include <iostream>
using namespace std;

long double factorial(int n);
long double euler(int x);

int main()
{
    double resultado=euler(20);

    cout << resultado << endl;
    
    return 0;
}

long double factorial (int n)
{
    long double ft=1.0;
    int i;

    for (i=1; i<=n; i++){
        ft=ft*i;
    }
    return ft;
}

long double euler (int x)
{
   double e=1.0;

    for (int i = 1; i <= x; i++)
    {
        e=e+(1/factorial(i));
    }
    return e;
}