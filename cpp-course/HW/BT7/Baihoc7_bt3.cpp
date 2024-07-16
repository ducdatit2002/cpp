#include <iostream>
using namespace std;

class CDonThuc {
    private:
    float a,b;
    public:
    void Nhap();
    void Xuat();
    CDonThuc operator*(CDonThuc &);
    CDonThuc operator/(CDonThuc &);
    CDonThuc operator*=(int);
    CDonThuc operator/=(int);
};
 
void CDonThuc::Nhap(){
    cout<<"Nhap a di ne: ";
    cin>>a;
    cout<<"Nhap b lun nha: ";
    cin>>b;
}

void CDonThuc::Xuat(){
    cout<<"y="<<a<<"x^"<<b<<endl;
}

CDonThuc CDonThuc::operator*(CDonThuc &x){
    CDonThuc temp;
    temp.a=a*x.a;
    temp.b=b+x.b;
    return temp;
}

CDonThuc CDonThuc::operator/(CDonThuc &x){
    CDonThuc temp;
    temp.a=a/x.a;
    temp.b=b-x.b;
    return temp;
}

CDonThuc CDonThuc::operator*=(int x){
    CDonThuc temp;
    temp.a=a*x;
    temp.b=b;
    return temp;
}

CDonThuc CDonThuc::operator/=(int x){
    CDonThuc temp;
    temp.a=a/x;
    temp.b=b;
    return temp;
}

int main(){
    CDonThuc x,y,kq;
    x.Nhap();
    y.Nhap();
    kq=x*y;
    cout<<"a*b: ";
    kq.Xuat();
    kq=x/y;
    cout<<"a/b: ";
    kq.Xuat();
    kq=x*=315;
    cout<<"a*=315: ";
    kq.Xuat();
    kq=x/=315;
    cout<<"a/=315: ";
    kq.Xuat();
    return 0;
}
