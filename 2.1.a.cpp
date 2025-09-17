#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n,d;
    cin>>n;
    d=0;
    for( int i=1; i<=n; i++) 
    {   
        
        if (n%i==0) d++;
    }
    if (d==2) cout<<n<<" La so nguyen to";
    else cout<<n<<" khong phai la so nguyen to";

    system( " pause");
}
