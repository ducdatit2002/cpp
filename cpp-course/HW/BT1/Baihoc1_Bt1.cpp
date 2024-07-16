#include <iostream>
using namespace std;
struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int XetDau(PHANSO);

int main()
{
    PHANSO a;
    Nhap(a);
    int kq = XetDau(a);
    switch (kq)
    {
        case 1: cout<<"Phan so > 0";
            break;
        case -1: cout<<"Phan so < 0";
            break;
        case 0: cout<<"Phan so = 0";
            break;
    }
    return 1;
}
int XetDau(PHANSO x)
{
    if(x.tu * x.mau>0)
        return 1;
    if(x.tu * x.mau<0)
        return -1;
    return 0;
}
void Nhap (PHANSO &x)
{ 
    cout<<"Nhap tu:";
    cin>>x.tu;
    cout<<"Nhap mau:";
    cin>>x.mau;
}
void Xuat(PHANSO x)
{
    cout<<"\nTu: "<<x.tu;
    cout<<"\nMau: "<<x.mau;
}
