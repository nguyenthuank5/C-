#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n,i, d=0, dem=0;
cin>>n;

for ( i=2; i< sqrt(n)+1 ;i++ )
{
 if ( n % i ==0)
 dem=1;

}
    if( dem ==0) {
        for( i=1; i <= n; i++ )

        if ( pow(2,i)-1==n)

    {
         d=0;

         for(int j =1; j<i; j++)
         if( i%j==0) d++;

         if ( d==2) cout<<" la so nguyen to M";

        
    }
    if ( d!=2) cout<<" khong la so nguyen to M";
}
else 
cout<<" khong phai la so nguyen to";
system(" pause ");
}