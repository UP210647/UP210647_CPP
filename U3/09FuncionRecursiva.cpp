#include <iostream>  
using namespace std;
long long factorial(long long n)
  {
     if(n==1 || n==0)   // condición de parada
         return 1;
      return n * factorial(n - 1);   // Llamada recursiva a la función y condición de parada
  }
int main()
  {
     int n; 
     cin >> n; 
     cout<< "factorial de  "<< n <<" es " << factorial(n) << endl;
     return 0;
  }