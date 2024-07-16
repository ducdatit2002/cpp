#include<iostream>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		CPhanSo operator+ (CPhanSo &);
		CPhanSo operator- (CPhanSo &);
		CPhanSo operator* (CPhanSo &);
		CPhanSo operator/ (CPhanSo &);
		CPhanSo operator+=(int);
		CPhanSo operator-=(int);
		CPhanSo operator*=(int);
		CPhanSo operator/=(int);
		CPhanSo& operator++();
		CPhanSo operator++(int);
		CPhanSo& operator--();
		CPhanSo operator--(int);
};
void CPhanSo::Nhap()
{
	cout<<"Nhap tu so nhe: ";
	cin>>tu;
	cout<<"Nhap mau so ne: ";
	cin>>mau;
}
void CPhanSo::Xuat()
{
	cout<<tu<<"/"<<mau<<endl;
}
CPhanSo CPhanSo::operator+(CPhanSo &x)
{
	CPhanSo temp;
	temp.tu=tu*x.mau+x.tu*mau;
	temp.mau=mau*x.mau;
	return temp;
}
CPhanSo CPhanSo::operator-(CPhanSo &x)
{
	CPhanSo temp;
	temp.tu=tu*x.mau-x.tu*mau;
	temp.mau=mau*x.mau;
	return temp;
}
CPhanSo CPhanSo::operator*(CPhanSo &x)
{
	CPhanSo temp;
	temp.tu=tu*x.tu;
	temp.mau=mau*x.mau;
	return temp;
}
CPhanSo CPhanSo::operator/(CPhanSo &x)
{
	CPhanSo temp;
	temp.tu=tu*x.mau;
	temp.mau=mau*x.tu;
}
CPhanSo CPhanSo::operator+=(int phanso)
{
	CPhanSo temp;
	temp.tu=tu+mau*(phanso);
	temp.mau=mau;
	return temp;
}
CPhanSo CPhanSo::operator-=(int phanso)
{
	CPhanSo temp;
	temp.tu=tu-mau*(phanso);
	temp.mau=mau;
	return temp;
}
CPhanSo CPhanSo::operator*=(int phanso)
{
	CPhanSo temp;
	temp.tu=tu*phanso;
	temp.mau=mau;
	return temp;
}
CPhanSo CPhanSo::operator/=(int phanso)
{
	CPhanSo temp;
	temp.tu=tu;
	temp.mau=mau*phanso;
	return temp;
}
CPhanSo& CPhanSo::operator++()
{
	this->tu=this->tu+this->mau;
	return *this;
}
CPhanSo CPhanSo::operator++(int)
{
	CPhanSo temp=*this;
	++*this;
	return temp;
}
CPhanSo& CPhanSo::operator--(){
    this->tu=this->tu-this->mau;
    return *this;
}

CPhanSo CPhanSo::operator--(int){
    CPhanSo temp=*this;
    --*this;
    return temp;
}
int main(){
    CPhanSo a,b,kq;
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
    kq.Xuat();
    kq=a/b;
    cout<<"a/b: ";
    kq.Xuat();
    kq=(a+=8);
    cout<<"a+=8: ";
    kq.Xuat();
    kq=(a-=8);
    cout<<"a-=8: ";
    kq.Xuat();
    kq=(a*=8);
    cout<<"a*=8: ";
    kq.Xuat();
    kq=(a/=8);
    cout<<"a/=8: ";
    kq.Xuat();
    kq=a++;
    cout<<"a++: ";
    kq.Xuat();
    kq=a--;
    cout<<"a--: ";
    kq.Xuat();  
    kq=++a;
    cout<<"++a: ";
    kq.Xuat();
    kq=--a;
    cout<<"--a: ";
    kq.Xuat(); 
    return 0;
} 
