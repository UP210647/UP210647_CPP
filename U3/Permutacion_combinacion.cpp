#include <iostream>
using namespace std;

//Declaracion
long int factorial(int n);
long int permutacion(int n, int r);
long int combinacion(int n, int r);


int main(int argc, char const *argv[])
{   
    /*
    long int r;
    r=factorial(0);
    cout << r << endl; 
    */
   int resp=permutacion(5,2);
   int resc=combinacion(5,2);

   cout << "permutacion = " << resp << endl;
   cout << "combinacion = " << resc << endl;

    return 0;
}

long int factorial (int n)
{
    long int ft=1;
    int i;

    for (i=1; i<=n; i++){
        ft=ft*i;
    }
    return ft;
}

long int permutacion(int n, int r){
    int p=(factorial(n))/factorial(n-r);
    return p;

}

long int combinacion(int n, int r){
    int c=factorial(n)/(factorial(n-r)*factorial(r));
    return c;

}