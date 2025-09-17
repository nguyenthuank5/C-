#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n;
    cin>>n;
    int bd=n, td = 0;
    while (n != 0) {
        int t = n%10;
            td = td*10 + t;
        n/=10;
    }
    if (bd==td) cout<<bd<<" la so can xung";
    else cout<<bd<<" khong phai la so can xung";

    

system(" pause");
}