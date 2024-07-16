#include <iostream>
using namespace std;

class CHinhCau {
    private:
    float x,y,r;
    public:
    void Nhap();
    void Xuat();
    CHinhCau& operator=(CHinhCau &);
};

void CHinhCau::Nhap(){
    cout<<"Nhap hoanh do x cho tam: ";
    cin>>x;
    cout<<"Nhap tung do y cho tam: ";
    cin>>y;
    cout<<"Nhap ban kinh R cho tam: ";
    cin>>r;
    while(r==0){
        cout<<"Ban kinh khong the bang khong, xin nhap lai: ";
        cin>>r;
    }
}

void CHinhCau::Xuat(){
    cout<<"Hinh cau co tam I("<<x<<","<<y<<") ban kinh R="<<r<<endl;
}

CHinhCau& CHinhCau::operator=(CHinhCau &a){
    x=a.x;
    y=a.y;
    r=a.r;
    return *this;
}

int main(){
    CHinhCau a,b;
    a.Nhap();
    b=a;
    b.Xuat();
}
