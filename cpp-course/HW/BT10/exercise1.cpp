#include <iostream>
using namespace std;

class CChiTiet {
    protected:
    long maso;
    public:
    virtual void Nhap();
    virtual void Xuat();
    virtual float TinhTien();
    virtual CChiTiet* TimKiem(long);
};

class CChiTietDon:public CChiTiet{
    protected:c 
    float giatien;
    public:
    void Nhap();
    void Xuat();
    float TinhTien();
    CChiTiet* TimKiem(long);
};

class CChiTietPhuc:public CChiTiet{
    protected:
    int n;
    CChiTiet* ds[100];
    public:
    void Nhap();
    void Xuat();
    float TinhTien();
    CChiTiet* TimKiem(long);
};

class CMay {
    protected:
    int n;
    CChiTiet* ds[100];
    public:
    void Nhap();
    void Xuat();
    float TinhTien();
    CChiTiet* TimKiem(long);
};

void CChiTiet::Nhap(){
    return;
}

void CChiTiet::Xuat(){
    return;
}

float CChiTiet::TinhTien(){
    return 0;
}

CChiTiet* CChiTiet::TimKiem(long ms){
    if(maso==ms)
      return this;
    return NULL;
}

void CChiTietDon::Nhap(){
    cout<<"Nhap ma so: ";
    cin>>maso;
    cout<<"Nhap gia tien: ";
    cin>>giatien;
}

void CChiTietDon::Xuat(){
    cout<<"Ma so:"<<maso;
    cout<<"Gia tien:"<<giatien;
}

float CChiTietDon::TinhTien(){
    return giatien;
}

CChiTiet* CChiTietDon::TimKiem(long ms){
    if(maso==ms)
      return this;
    return NULL;
}

void CChiTietPhuc::Nhap(){
    cout<<"Nhap ma so:";
    cin>>maso;
    cout<<"Nhap so luong chi tiet thanh phan:";
    cin>>n;
    for(int i=0; i<n; i++){
        int loai;
        cout<<"Nhap loai (0 la don, 1 la phuc):";
        cin>>loai;
        switch(loai){
           case 0:
           ds[i] = new CChiTietDon;
           break;
           case 1:
           ds[i] = new CChiTietPhuc;
           break;
        }
        ds[i]->Nhap();
    }
}

void CChiTietPhuc::Xuat(){
    cout<<"\nMa so:"<<maso;
    cout<<"\nSo luong cac chi tiet thanh phan:"<<n;
    for(int i=0;i<n;i++)
       ds[i]->Xuat();
}

float CChiTietPhuc::TinhTien(){
    float s=0;
    for(int i=0;i<n;i++)
      s=s+ ds[i]->TinhTien();
    return s;
}

CChiTiet* CChiTietPhuc::TimKiem(long ms){
    if(maso==ms)
      return this;
    for(int i=0;i<n;i++){
        CChiTiet* kq= ds[i]->TimKiem(ms);
        if(kq!=NULL)
           return kq;
    }
    return NULL;
}

void CMay::Nhap(){
    cout<<"Nhap so luong chi tiet thanh phan:";
    cin>>n;
    for(int i=0; i<n; i++){
        int loai;
        cout<<"Nhap loai (0 la don, 1 la phuc):";
        cin>>loai;
        switch(loai){
           case 0:
           ds[i] = new CChiTietDon;
           break;
           case 1:
           ds[i] = new CChiTietPhuc;
           break;
        }
        ds[i]->Nhap();
    }
}

void CMay::Xuat(){
    cout<<"\nSo luong cac chi tiet thanh phan:"<<n;
    for(int i=0;i<n;i++)
       ds[i]->Xuat();
}

CChiTiet* CMay::TimKiem(long ms){
    for(int i=0;i<n;i++){
        CChiTiet* kq= ds[i]->TimKiem(ms);
        if(kq!=NULL)
           return kq;
    }
    return NULL;
}

int main(){
    CMay* pt = new CMay;
    pt -> Nhap();
    pt -> Xuat();
    cout<<"\tong so tien:" << pt->TinhTien();
    cout<<"\n so may don: " << pt->TimKiem();

    long maso;
    cout <<"\n Nhap ma so can tim:";
    cin>>maso;
    CChiTietPhuc* ptr = pt->TimKiem(maso);
    if(ptr == nullptr)
    {
        cout<<"\n khong co may so can tim";
    }
    else
    {
        cout<<"\n co may can tim";
        ptr->outp;
    }

    delete pt;
    return 0;