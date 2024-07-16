#include <iostream>
using namespace std;

class CHinhCau
{
    private:
    float x,y;
    float R;
    public:
    friend istream& operator>>(istream &, CHinhCau &);
    friend ostream& operator<<(ostream &, CHinhCau &);
};

istream& operator>>(istream &is, CHinhCau &a)
{
   cout<<"Nhap x ";
   is>>a.x;
   cout<<"Nhap y ";
   is>>a.y;
   cout<<"Nhap R ";
   is>>a.R;
   return is;
}

ostream& operator<<(ostream &os, CHinhCau &a)
{
    os<<"Hinh cau co tam I("<<a.x<<","<<a.y<<") va ban kinh R "<<a.R;
    return os;
}

int main()
{
    CHinhCau a;
    cin>>a;
    cout<<a;
    return 1;
}
