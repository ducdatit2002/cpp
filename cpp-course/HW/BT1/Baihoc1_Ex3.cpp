#include<iostream>
#include<string>
#include<math.h>
using namespace std;

struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
void RutGon(PHANSO&);

int main()
{
    PHANSO ps;
    Nhap(ps);
    RutGon(ps);
    Xuat(ps);
    return 1;
}
void Xuat (PHANSO x)
{
    cout<<"\n Tu:"<<x.tu;
    cout<<"\n Mau:"<<x.mau;
}
void RutGon (PHANSO &x)
{
    int a = abs(x.tu);
    int b = abs(x.mau);
    while(a*b!=0)
    { 
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    x.tu = x.tu / (a+b);
    x.mau = x.mau / (a+b);
}
void Nhap(PHANSO &x)
{
    cout<<"Nhap tu:";
    cin>>x.tu;
    do
    {
    cout<<"Nhap mau:";
    cin>>x.mau;
    if(x.mau==0)
        cout<<"Nhap sai nhap lai";
    }
    while (x.mau==0);
}

