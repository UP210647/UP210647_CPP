#include <iostream>
#include <math.h>
using namespace std;


bool esBisiesto(int año){
    if (año%400==0 || ( año%4==0 && año%100!=0 )){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int a=2015;

    cout << a <<endl;
    if (esBisiesto(a)==true){
        cout << "El año es bisiesto \n" << endl;
    }else {
        cout << "El año no es bisiesto \n" << endl;
    }
    return 0;
}
