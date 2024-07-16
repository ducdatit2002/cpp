#include<iostream>
using namespace std;

class Ngaytrongnam
{
    private:
    int ngay,thang,nam;
    public:
    void Nhapngay();
    void Xuat();
    int ktNhuan(int);
    Ngaytrongnam Ngayketiep();
    Ngaytrongnam Homqua();
};

int main(){
    Ngaytrongnam a,b,c;
    a.Nhapngay();
    b=a.Ngayketiep();
    c=a.Homqua();
    cout<<"Ngay ke tiep "<<endl;
    b.Xuat();
    return 0;
}

void Ngaytrongnam::Nhapngay()
{
   cout<<"Nhap ngay ";
        cin>>ngay;
        while(ngay>31 || ngay<1){
            cout<<"Nhap sai, nhap lai ";
            cin>>ngay;
        }
        cout<<"Nhap thang ";
        cin>>thang;
        while(thang>12 || thang<1){
            cout<<"Nhap sai, nhap lai ";
            cin>>thang;
        }
        cout<<"Nhap nam ";
        cin>>nam;
        while(nam<0){
            cout<<"Nhap sai, nhap lai ";
            cin>>nam;
        }
    }

void Ngaytrongnam::Xuat()
{
    cout<< " Ngay " << ngay << endl;
    cout<< " Thang " << thang << endl;
    cout<< " Nam " << nam << endl;
}

int Ngaytrongnam::ktNhuan(int nam)
{
    if(nam%4==0 && nam%100!=0)
       return 1;
    if (nam%400==0)
       return 1;
    return 0;
}

Ngaytrongnam Ngaytrongnam::Ngayketiep()
{
        Ngaytrongnam nextday;
        int NgayThang[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if (ktNhuan(nam)==1){
        NgayThang[1] = 29;
        }
    nextday.ngay=ngay+1;
    nextday.thang=thang;
    nextday.nam=nam;
    if (nextday.ngay>NgayThang[thang-1])
    {
        nextday.thang++;
        if(nextday.thang>12)
        {
            nextday.nam=nam+1;
            nextday.thang=1;
        }
        nextday.ngay=1;
    }
    return nextday;
}

Ngaytrongnam Ngaytrongnam::Homqua()
{
        Ngaytrongnam homqua;
        int NgayThang[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    if (ktNhuan(nam)==1){
        NgayThang[1] = 29;
        }
    homqua.ngay=ngay-1;
    homqua.thang=thang;
    homqua.nam=nam;
    if(ngay==0)
    {   ngay=NgayThang[thang-2];
        homqua.thang--;
        if(homqua.thang==0)
        {
            homqua.thang=12;
            homqua.nam=nam-1;
        }
        
    }
    return homqua;
}
