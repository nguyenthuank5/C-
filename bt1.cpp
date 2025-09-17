#include <iostream>
using namespace std;

int  main()
{
       int a=7,b=2,t=1;
       switch (a%5)
       {
        case 0: a++;
        case 1: (a++)+b;
        case 2: ++a+b;
        default : t=t+a+b;
       }
       cout<<a<<" "<<b<<" "<<t;
    system(" pause ");
}