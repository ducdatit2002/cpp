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
		CPhanSo Tong(CPhanSo);
};
void CPhanSo::Nhap()
{
	cout<<"Nhap tu so:";
	cin>>tu;
	cout<<"Nhap mau so: ";
	cin>>mau;
}
void CPhanSo::Xuat()
{
	cout<<tu<<"/"<<mau;
}
CPhanSo CPhanSo::Tong(CPhanSo x)
{
	CPhanSo temp;
	temp.tu=tu*x.mau+x.tu*mau;
	temp.mau=mau*x.mau;
	return temp;
}
int main()
{
	CPhanSo a,b,kq;
	a.Nhap();
	b.Nhap();
	kq=a.Tong(b);
	cout<<"Tong la: ";
	kq.Xuat();
	return 0;
}
