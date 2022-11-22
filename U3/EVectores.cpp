#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cal2[]={10,5,6,8,7};
    int n=5;
    double total=0;

    for (int i = 0; i < n; i++)
    {
        total=total+cal2[i];
    }
    double promedio =total/n;
    
    cout << total << endl;
    cout << promedio << endl;


    return 0;
}
