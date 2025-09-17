#include <iostream>
using namespace std;
void input ( int&a , int&b);
int Chuvi (int a, int b);
void input ( int&a , int&b)
{
    cout<< " nhap a:  ";cin>>a;
    cout<< " nhap b:  ";cin>>b;
}
int Chuvi( int a, int b)
{
    int P = (a+b)*2;
    return P;
}
int main ()
{
    int x,y;
    input ( x,y );
    cout<<" Chu vi HCN la:  "<<Chuvi( x,y );
    system ( " pause ");
}