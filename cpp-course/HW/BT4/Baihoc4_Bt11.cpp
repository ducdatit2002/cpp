#include <iostream>
using namespace std;

class tamgiac{
    private:
    float x,y,m,n,o,p;
    public:
    friend istream& operator>>(istream &, tamgiac &);
    friend ostream& operator<<(ostream &, tamgiac &);
};

istream& operator>>(istream &is, tamgiac &a){
    cout<<"Nhap x cho A: ";
    is>>a.x;
    cout<<"Nhap y cho A: ";
    is>>a.y;
    cout<<"Nhap x cho B: ";
    is>>a.m;
    cout<<"Nhap y cho B: ";
    is>>a.n;
    cout<<"Nhap x cho C: ";
    is>>a.o;
    cout<<"Nhap y cho C: ";
    is>>a.p;
    return is;
}

ostream& operator<<(ostream &os, tamgiac &a){
    os<<"Tam giac co toa do diem ";
    os<<"A("<<a.x<<","<<a.y<<"), B("<<a.m<<","<<a.n<<"), C("<<a.o<<","<<a.p<<")";
    return os;
}


int main(){
    tamgiac tg;
    cin>>tg;
    cout<<tg;
    return 1;
}
