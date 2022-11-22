#include<iostream>
#include <time.h>
using namespace std;

#define n 5

int comprobar(int num,int cal[n]){
    for(int i=0; i<n; i++){    
        if (num==cal[i])
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int cal[n];
    srand(time(NULL));
    int num;

    for (int i = 0; i < n; i++)
    {
        while (comprobar(num,cal)==true )
        {
            num=1+rand() % (10);
        }
        cal[i]=num;
    }

    for (int i = 0; i < n; i++)
    {
        cout << cal[i] << endl;
    }
    
    
    return 0;
}
