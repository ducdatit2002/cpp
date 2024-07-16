#include <iostream>
using namespace std;
class CPhanSo
{
	private: 
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		CPhanSo Tong(CPhanSo);
		CPhanSo Hieu(CPhanSo);
		CPhanSo Thuong(CPhanSo);
		CPhanSo Tich(CPhanSo);
};
int main()
{
	CPhanSo a,b,kq;
	cout<<"\n Nhap phan so thu 1:";
	a.Nhap();
	cout<<"\n Nhap phan so thu 2:";
	b.Nhap();
	kq = a.Tong(b);
	cout<<"\n Tong hai phan so la:";
	kq.Xuat();
	kq = a.Hieu(b);
	cout<<"\n Hieu hai phan so la:";
	kq.Xuat();
	kq = a.Tich(b);
	cout<<"\n Tich hai phan so la:";
	kq.Xuat();
	kq = a.Thuong(b);
	cout<<"\n Thuong hai phan so la:";
	kq.Xuat();
	return 1;
}
void CPhanSo::Nhap()
{
	cout<<"\nNhap tu:";
	cin>>tu;
	cout<<"\nNhap mau:";
	cin>>mau;
}
void CPhanSo::Xuat()
{
	cout<<"\n Tu:"<<tu;
	cout<<"\n Mau:"<<mau;
}
CPhanSo CPhanSo::Tong(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu*x.mau + mau*x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
CPhanSo CPhanSo::Hieu(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu*x.mau - mau*x.tu;
	temp.mau = mau * x.mau;
	return temp;
}
CPhanSo CPhanSo::Tich(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.tu;
	temp.mau = mau *x.mau;
	return temp;
}
CPhanSo CPhanSo::Thuong(CPhanSo x)
{
	CPhanSo temp;
	temp.tu = tu * x.mau;
	temp.mau = mau * x.tu;
	return temp;
}
