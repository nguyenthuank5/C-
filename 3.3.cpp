#include<iostream>
#include<math.h>
using namespace std;
int main()
    {
      cout<< " chuong trinh tinh dien tich co ban:  \n";
      cout<<" 1.Dien tich hinh vuong:  \n";
      cout<<" 2.Dien tich hinh chu nhat:  \n";
      cout<<" 3.Dien tich hinh tam giac:  \n";
      cout<<" 4.Dien tich hinh tron:  \n";
      cout<<" 0.ket thuc:  \n";
      cout<<" ban muon tinh dien tich hinh nao ? :  \n";
      int ch; cin>>ch;
      switch(ch)
      {
        case 0:
        {
          cout<< " ket thuc";
          break;
        }
      case 1:
        {
            int a;
            cout<<"Nhap canh a: ";cin>>a;
            cout<<" dien tich hinh vuong:  "<<a*a;    
            break;        
                    }
      case 2:
       {
        int b,c;
         cout<<" nhap chieu dai:  ";cin>>b;
         cout<<" nhap chieu rong: ";cin>>c;
         cout<< " dien tich hinh chu nhat la: "<< b*c;
         break;

       }
       case 3:
        {
        int d,e,f,p;
        cout<<" nhap 3 canh cua tam giac:  ";cin>>d>>e>>f;
        if ( d+e>f && e+f>d && d+f>e) {
         p =  float(d+e+f)/2;
        cout<<  " dien tich tam giac la:  "<< sqrt( p*(p-d)*(p-e)*(p-f));
        }
        else
        cout<<" khong phai la tam giac";
        break;
        }
      case 4:
      {
        int R;
        cout<< "nhap ban kinh duong tron: ";cin>>R;
        cout<< " dien tich hinh tron la:  "<< M_PI*R*R;
        break;
      }
       default: {
            cout << "Lua chon khong hop le!" << endl;
            break;
        }
      }
      system(" pause ");
    }
