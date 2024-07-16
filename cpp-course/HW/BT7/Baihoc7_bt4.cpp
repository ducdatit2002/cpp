#include <iostream>
using namespace std;

class CDaThuc {
    private:
    float a, b, c, d, e, f;
    public:
    void Nhap();
    void Xuat();
    void Xuatnhan();
    void Xuatchia();
    CDaThuc operator+(CDaThuc &);
    CDaThuc operator-(CDaThuc &);
    CDaThuc operator*(CDaThuc &);
    CDaThuc operator/(CDaThuc &);
    CDaThuc operator+=(int);
    CDaThuc operator-=(int);
    CDaThuc operator*=(int);
    CDaThuc operator/=(int);
};

void CDaThuc::Nhap(){
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    cout<<"Nhap c: ";
    cin>>c;
}

void CDaThuc::Xuat(){
    cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
}

void CDaThuc::Xuatnhan(){
    cout<<a<<"x^4+"<<b<<"x^3+"<<c<<"x^2+"<<d<<"x+"<<e<<endl;
}

void CDaThuc::Xuatchia(){
    cout<<a<<"+["<<b<<"x+"<<c<<"]/["<<d<<"x^2"<<"+"<<e<<"x"<<"+"<<f<<"]"<<endl;
}

CDaThuc CDaThuc::operator+(CDaThuc &x){
    CDaThuc temp;
    temp.a=a+x.a;
    temp.b=b+x.b;
    temp.c=c+x.c;
    return temp;
}

CDaThuc CDaThuc::operator-(CDaThuc &x){
    CDaThuc temp;
    temp.a=a-x.a;
    temp.b=b-x.b;
    temp.c=c-x.c;
    return temp;
}

CDaThuc CDaThuc::operator*(CDaThuc &x){
    CDaThuc temp;
    temp.a=a*x.a;
    temp.b=a*x.b+x.a*b;
    temp.c=a*x.c+x.b*b+c*x.a;
    temp.d=b*x.c+c*x.b;
    temp.e=c*x.c;
    return temp;
}

CDaThuc CDaThuc::operator/(CDaThuc &x){
    CDaThuc temp;
    temp.a=a/x.a;
    temp.b=b-((x.b*a)/x.a);
    temp.c=c-((a*x.c)/x.a);
    temp.d=x.a;
    temp.e=x.b;
    temp.f=x.c;
    return temp;
}

CDaThuc CDaThuc::operator+=(int q){
    CDaThuc temp;
    temp.a=a;
    temp.b=b;
    temp.c=c+q;
    return temp;
}

CDaThuc CDaThuc::operator-=(int q){
    CDaThuc temp;
    temp.a=a;
    temp.b=b;
    temp.c=c-q;
    return temp;
}


CDaThuc CDaThuc::operator*=(int q){
    CDaThuc temp;
    temp.a=a*q;
    temp.b=b*q;
    temp.c=c*q;
    return temp;
}

CDaThuc CDaThuc::operator/=(int q){
    CDaThuc temp;
    temp.a=a/q;
    temp.b=b/q;
    temp.c=c/q;
    return temp;
}


int main(){
    CDaThuc a,b,kq;
    a.Nhap();
    b.Nhap();
    kq=a+b;
    cout<<"a+b: ";
    kq.Xuat();
    kq=a-b;
    cout<<"a-b: ";
    kq.Xuat();
    kq=a*b;
    cout<<"a*b: ";
    kq.Xuatnhan();
    kq=a/b;
    cout<<"a/b: ";
    kq.Xuatchia();
    kq=(a+=4);
    cout<<"a+=4: ";
    kq.Xuat();
    kq=(a-=4);
    cout<<"a-=4: ";
    kq.Xuat();
    kq=(a*=4);
    cout<<"a*=4: ";
    kq.Xuat();
    kq=(a/=4);
    cout<<"a/=4: ";
    kq.Xuat();
    return 0;
} 
