#include <iostream>
#include <math.h>
using namespace std;

class CDiem {
    private:
    int x,y;
    public:
    void Nhap();
    void Xuat();
    int operator==(const CDiem &);
    int operator!=(const CDiem &);
};

class CTamGiac{
    private:
    CDiem A, B, C;
    public:
    void Nhapt();
    void Xuatt();
    int operator==(const CTamGiac &);
    int operator!=(const CTamGiac &);
};

void CDiem::Nhap(){
    cout<<"Nhap x: "<<endl;
    cin>>x;
    cout<<"Nhap y: "<<endl;
    cin>>y;
}

void CDiem::Xuat(){
    cout<<"("<<x<<","<<y<<")"<<endl;
}

void CTamGiac::Nhapt(){
    cout<<"Nhap diem A: "<<endl;
    A.Nhap();
    cout<<"Nhap diem B: "<<endl;
    B.Nhap();
    cout<<"Nhap diem C: "<<endl;
    C.Nhap();
}

void CTamGiac::Xuatt(){
    cout<<"Tam giac co diem A "<<endl;
    A.Xuat();
    cout<<"Tam giac co diem B "<<endl;
    B.Xuat();
    cout<<"Tam giac co diem C "<<endl;
    C.Xuat();
}

int CDiem::operator==(const CDiem &a){
    if(x==a.x && y==a.y)
       return 1;
    else 
       return 0;
}

int CDiem::operator!=(const CDiem &a){
    if(x!=a.x && y!=a.y)
       return 1;
    else 
       return 0;
}

int CTamGiac::operator==(const CTamGiac &x){
    if(A==x.A && B==x.B && C==x.C)
       return 1;
    else
       return 0;
}

int CTamGiac::operator!=(const CTamGiac &x){
    if(A!=x.A && B!=x.B && C!=x.C)
       return 1;
    else
       return 0;
}

int main(){
    CTamGiac a,b;
    a.Nhapt();
    b.Nhapt();
    if(a==b)
       cout<<"Tam giac a trung tam giac b";
    if(a!=b)
       cout<<"Tam giac a khong trung tam giac b";
    return 0;
}
