#include <iostream>
using namespace std;

class CDiem {
    private:
    float x,y;
    public:
    void Nhapdiem();
    void Xuatdiem();
};

class CTamGiac {
    private:
    CDiem A;
    CDiem B;
    CDiem C;
    public:
    void Nhap();
    void Xuat();
    CTamGiac& operator=(CTamGiac &);
};

void CDiem::Nhapdiem(){
    float temp;
    cout<<"Nhap hoanh do x: ";
    cin>>temp;
    x=temp;
    cout<<"Nhap tung do y: ";
    cin>>temp;
    y=temp;
}

void CDiem::Xuatdiem(){
    cout<<"("<<x<<","<<y<<")";
}

void CTamGiac::Nhap(){
    cout<<"Nhap toa do diem A "<<endl;
    A.Nhapdiem();
    cout<<"Nhap toa do diem B "<<endl;
    B.Nhapdiem();
    cout<<"Nhap toa do diem C "<<endl;
    C.Nhapdiem();
}
void CTamGiac::Xuat(){
    cout<<"A";
    A.Xuatdiem();
    cout<<"\nB";
    B.Xuatdiem();
    cout<<"\nC";
    C.Xuatdiem();

}
CTamGiac& CTamGiac::operator=(CTamGiac &a){
    A=a.A;
    B=a.B;
    C=a.C;
    return *this;
}

int main(){
    CTamGiac a,b;
    a.Nhap();
    b=a;
    b.Xuat();
}


