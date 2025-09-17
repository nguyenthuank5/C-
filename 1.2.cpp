#include<iostream>
#include<math.h>
using namespace std;
// Phuong phap cramen
int main (){
    int a1,b1,c1,a2,b2,c2;
    cout<<" nhap a1,b1,c1: "<<endl;cin>>a1>>b1>>c1; 
    cout<<" nhap a2,b2,c2: "<<endl;cin>>a2>>b2>>c2; 
    //Tinh dinh thuc
   float D=(a1*b2)-(a2*b1);
   float Dx=(c1*b2)-(c2*b1);
   float Dy=(a1*c2)-(a2*c1);
   if ( D !=0)
   {
      cout<<" \n he phuong trinh co nghiem la: ";
      cout<<"\nx="<< Dx/D;
      cout<< "\ny="<<Dy/D;
   }
      else
       cout<< " phuong trinh vo nghiem";
      if ( D==Dx==Dy)
        cout<<" he PT co vo so nghiem";
      system(" pause");
   
}
