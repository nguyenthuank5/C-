#include<iostream>
#include<math.h>
using namespace std;
void nhap( int&xa , int&ya , int&xb ,  int&yb , int&xc , int&yc );
float dientich( int xa , int ya , int xb , int yb , int xc , int yc);
void nhap( int&xa , int&ya , int&xb ,  int&yb , int&xc , int&yc )
{
    cout<< " nhap toa do diem A:  ";cin>>xa>>ya;
    cout<<"  nhap toa dọ diem B:  ";cin>>xb>>yb;
    cout<<"  nhap toa dọ diem C:  ";cin>>xc>>yc;
}
        float kc (int xa , int ya , int xb , int yb)
{
             return sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
}
float chuvi(int xa , int ya , int xb , int yb , int xc , int yc)
{
    float a=kc(xb,yb,xc,yc);
    float b=kc(xa,ya,xc,yc);
    float c=kc(xa,ya,xb,yb);
    return a+b+c;
}
float dientich( int xa , int ya , int xb , int yb , int xc , int yc)
   {
    
    float a=kc(xb,yb,xc,yc);
    float b=kc(xa,ya,xc,yc);
    float c=kc(xa,ya,xb,yc);
    float p= ( xa, ya,xb,yb,xc,yc)/2;
    float S=sqrt(p*(p-a)*(p-b)*(p-c));
    return S;
    }
    int main ()
    {


        
    }