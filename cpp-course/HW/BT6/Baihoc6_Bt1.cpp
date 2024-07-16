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
		CPhanSo& operator=(CPhanSo &);
};
void CPhanSo::Nhap()
{
	cout<<"Nhap tu ne ";
	cin>>tu;
	cout<<"Nhap mau ne "<<endl;
	cin>>mau;
	while (mau==0)
	{
		cout<<"Nhap sai roi, nhap lai di ne";
		cin>>mau;
	}
}
void CPhanSo::Xuat()
{
	cout<<tu<<"/"<<mau<<endl;
}
CPhanSo& CPhanSo::operator=(CPhanSo &x)
{
	tu=x.tu;
	mau=x.mau;
	return *this;
}
int main()
{
	CPhanSo a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
