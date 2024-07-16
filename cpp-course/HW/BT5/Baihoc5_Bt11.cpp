#include <iostream>
using namespace std;

class CTamGiac {
    private:
    float a,b,c,d,e,f;
    public:
    CTamGiac();
    CTamGiac(int, int, int, int, int, int);
    CTamGiac(const CTamGiac &);
    ~CTamGiac();
    friend ostream& operator<<(ostream &, CTamGiac &);
};

CTamGiac::CTamGiac(){
    a=8;
    b=4;
    c=2002;
    d=31;
    e=5;
    f=2002;
}

CTamGiac::CTamGiac(int A, int B, int C, int D, int E, int F){
    a=A;
    b=B;
    c=C;
    d=D;
    e=E;
    f=F;
}

CTamGiac::CTamGiac(const CTamGiac &x){
    a=x.a;
    b=x.b;
    c=x.c;
    d=x.d;
    e=x.e;
    f=x.f;
}

CTamGiac::~CTamGiac(){
    return;
}

ostream& operator<<(ostream &os, CTamGiac &x){
    os<<"Tam giac co toa do diem ";
    os<<"A("<<x.a<<","<<x.b<<"), B("<<x.c<<","<<x.d<<"), C("<<x.e<<","<<x.f<<")";
    return os;
}

int main(){
    CTamGiac tg;
    CTamGiac tg1(1,2,3,4,5,6);
    cout<<tg<<endl<<tg1<<endl;
    return 0;
}
