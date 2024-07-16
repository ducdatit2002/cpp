#include <iostream>
#include<cstring>
using namespace std;

class CNgay{
    private:
    int ngay, thang, nam;
    public:
    void Nhap(){
        cout<<"Nhap ngay sinh";
        cin>>ngay;
        cout<<"Nhap thang sinh";
        cin>>thang;
        cout<<"Nhap nam sinh";
        cin>>nam;
    }
    void Xuat(){
        cout<<ngay<<"/"<<thang<<"/"<<nam;
    }
};

class CNhanVien {
    protected:
    CNgay NgaySinh;
    string HoTen;
    float Luong;
    float LuongCoBan;
    public:
    virtual void Nhap();
    virtual void TinhLuong();
    virtual void Xuat();
    virtual float LayLuong();
    virtual CNhanVien* TimKiem(string);
};

class CSanXuat:public CNhanVien{
    protected:
    int SoSanPham;
    public:
    void Nhap();
    void TinhLuong();
    void Xuat();
    float LayLuong();
    CNhanVien* TimKiem(string);
};

class CVanPhong:public CNhanVien{
    protected:
    int SoNgayLamViec;
    float TroCap;
    public:
    void Nhap();
    void TinhLuong();
    void Xuat();
    float LayLuong();
    CNhanVien* TimKiem(string);
};

class CQuanLy:public CNhanVien{
    protected:
    float HeSoChucVu;
    float Thuong;
    public:
    void Nhap();
    void TinhLuong();
    void Xuat();
    float LayLuong();
    CNhanVien* TimKiem(string);
};

class CCongTy{
    protected:
    int n;
    CNhanVien* ds[100];
    public:
    void Nhap();
    void TinhLuong();
    void Xuat();
    float TongLuong();
    CNhanVien* TimKiem(string);
};

void CNhanVien::Nhap(){
    return;
}

void CNhanVien::Xuat(){
    return;
}

void CNhanVien::TinhLuong(){
    return;
}

float CNhanVien::LayLuong(){
    return Luong;
}

CNhanVien* CNhanVien::TimKiem(string str){
    if(strcmp(HoTen,str)==0)
        return this;
    return NULL;
}

void CSanXuat::Nhap(){
    cout<<"Nhap ho ten: ";
    cin>>HoTen;
    cout<<"Nhap ngay sinh: ";
    NgaySinh.Nhap();
    cout<<"Nhap luong co ban: ";
    cin>>LuongCoBan;
    cout<<"Nhap so san pham: ";
    cin>>SoSanPham;
}

void CSanXuat::Xuat(){
    cout<<"Ho ten: ";
    cout<<HoTen;
    cout<<"Ngay sinh: ";
    NgaySinh.Xuat();
    cout<<"Luong co ban: ";
    cout<<LuongCoBan;
    cout<<"So san pham: ";
    cout<<SoSanPham;
}

void CSanXuat::TinhLuong(){
    Luong=LuongCoBan+SoSanPham*2000;
}

float CSanXuat::LayLuong(){
    return Luong;
}

CNhanVien* CSanXuat::TimKiem(string str){
    if(strcmp(HoTen,str)==0)
        return this;
    return NULL;
}

void CVanPhong::Nhap(){
    cout<<"Nhap ho ten: ";
    cin>>HoTen;
    cout<<"Nhap ngay sinh: ";
    NgaySinh.Nhap();
    cout<<"Nhap luong co ban: ";
    cin>>LuongCoBan;
    cout<<"Nhap so ngay lam viec: ";
    cin>>SoNgayLamViec;
    cout<<"Nhap tro cap: ";
    cin>>TroCap;
}

void CVanPhong::Xuat(){
    cout<<"Ho ten: ";
    cout<<HoTen;
    cout<<"Ngay sinh: ";
    NgaySinh.Xuat();
    cout<<"Luong co ban: ";
    cout<<LuongCoBan;
    cout<<"So ngay lam viec: ";
    cout<<SoNgayLamViec;
    cout<<"Tro cap: ";
    cout<<TroCap;
    cout<<"Luong: ";
    cout<<Luong;
}

void CVanPhong::TinhLuong(){
    Luong=LuongCoBan+SoNgayLamViec*100000+TroCap;
}

float CVanPhong::LayLuong(){
    return Luong;
}

CNhanVien* CVanPhong::TimKiem(string str){
    if(strcmp(HoTen,str)==0)
        return this;
    return NULL;
}

void CQuanLy::Nhap(){
    cout<<"Nhap ho ten: ";
    cin>>HoTen;
    cout<<"Nhap ngay sinh: ";
    NgaySinh.Nhap();
    cout<<"Nhap luong co ban: ";
    cin>>LuongCoBan;
    cout<<"Nhap he so chuc vu: ";
    cin>>HeSoChucVu;
    cout<<"Nhap tien thuong: ";
    cin>>Thuong;
}

void CQuanLy::Xuat(){
    cout<<"Ho ten: ";
    cout<<HoTen;
    cout<<"Ngay sinh: ";
    NgaySinh.Xuat();
    cout<<"Luong co ban: ";
    cout<<LuongCoBan;
    cout<<"He So Chuc Vu: ";
    cout<<HeSoChucVu;
    cout<<"Tien Thuong: ";
    cout<<Thuong;
    cout<<"Luong: ";
    cout<<Luong;
}

void CQuanLy::TinhLuong(){
    Luong=LuongCoBan*HeSoChucVu+Thuong;
}

float CQuanLy::LayLuong(){
    return Luong;
}

CNhanVien* CQuanLy::TimKiem(string str){
    if(strcmp(HoTen,str)==0)
        return this;
    return NULL;
}

void CCongTy::Nhap(){
    cout<<"Nhap so luong nhan vien: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int loai;
        cout<<"Nhap loai (0. San xuat, 1. Van Phong, 2. Quan Ly): ";
        cin>>loai;
        switch(loai){
            case 0: ds[i]=new CSanXuat;
            break;
            case 1: ds[i]=new CVanPhong;
            break;
            case2: ds[i]=new CQuanLy;
            break;
        }
        ds[i]->Nhap();
    }
}

void CCongTy::Xuat(){
    cout<<"\n So luong nhan vien: "<<n;
    for(int i=0;i<n;i++)
       ds[i]->Xuat();
}

float CCongTy::TongLuong(){
    float s=0;
    for(int i=0;i<n;i++)
       s=s+ds[i]->LayLuong();
    return s;
}

CNhanVien* CCongTy::TimKiem(string str){
    for(int i=0; i<n; i++){
        CNhanVien* kq=ds[i]->TimKiem(str);
        if(kq!=null)
           return kq;
    }
    return NULL;
}
int main()
{
    CNhanVien NV;
    CVanPhong NVVP;
    NVVP.Nhap();
    NVVP.Xuat();
    CSanXuat NVSX;
    NVSX.Nhap();
    NVSX.Xuat();
    CQuanLy NVQL;
    NVQL.Nhap();
    NVQL.Xuat();
    float Luong = NVQL.TinhLuong();
    cout<<"\n "<<(size_t)Luong;
    system("pause");
    return 0;
}






