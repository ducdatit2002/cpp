#include <iostream>
using namespace std;

class CHinhCau {
    private:
    float a,b,R;
    public:
    CHinhCau();
    CHinhCau(int, int, int);
    CHinhCau(const CHinhCau &);
    ~CHinhCau();
    friend ostream& operator<<(ostream &, CHinhCau &);
};

CHinhCau::CHinhCau(){
    a=8;
    b=4;
    R=2002;
}

CHinhCau::CHinhCau(int A, int B, int r){
    a=A;
    b=B;
    R=r;
}

CHinhCau::CHinhCau(const CHinhCau &x){
    a=x.a;
    b=x.b;
    R=x.R;
}

CHinhCau::~CHinhCau(){
    return;
}

ostream& operator<<(ostream &os, CHinhCau &x){
    os<<"Hinh cau co Tam I("<<x.a<<","<<x.b<<") va ban kinh R="<<x.R;
    return os;
}

int main(){
    CHinhCau hc;
    CHinhCau hc1(31,5,2002);
    cout<<hc<<endl<<hc1<<endl;
    return 0;
}
