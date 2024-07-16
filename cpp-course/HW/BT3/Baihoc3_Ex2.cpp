#include <iostream>
#include <math.h>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		void RutGon();
};
int main()
{
	CPhanSo ps;
	ps.Nhap();
	cout<<"\n Phan so ban dau: ";
	ps.Xuat();
	ps.RutGon();
	cout<<"\n Phan so sau khi rut gon: ";
	ps.Xuat();
	return 1;
}
void CPhanSo::Nhap()
{
	cout<<"Nhap tu: ";
	cin>>tu;
	cout<<"Nhap mau: ";
	cin>>mau;
}
void CPhanSo::Xuat()
{
	cout<<"\n Tu: "<<tu;
	cout<<"\n Mau: "<<mau;
}
void CPhanSo::RutGon()
{
	int a = abs(tu);
	int b = abs(mau);
	while(a*b!=0)
	{
		if(a>b)
			a = a - b;
		else
			b = b - a;
	}
	tu = tu/(a+b);
	mau = mau/(a+b);
}
