#include<iostream>
using namespace std;
class CHonSo
{
	private:
		float tu;
		float nguyen;
		float mau;
	public:
		void Nhap();
		void Xuat();
		CHonSo& operator=(CHonSo &);
};
void CHonSo::Nhap()
{
	cout<<"Nhap phan nguyen: ";
	cin>>nguyen;
	while (nguyen==0)
	{
		cin>>nguyen;
	}
	cout<<"Nhap tu so: ";
	cin>>tu;
	cout<<"Nhap mau so: ";
	cin>>mau;
	while (mau==0)
	{
		cout<<"Mau phai khac khong, nhap lai di ban oi";
		cin>>mau;
	}
}
void CHonSo::Xuat()
{
	cout<<"Phan nguyen la: "<<nguyen<<endl;
	cout<<"Tu so la: "<<tu<<endl;
	cout<<"Mau so la: "<<mau<<endl;
}
CHonSo& CHonSo::operator=(CHonSo &x)
{
	nguyen=x.nguyen;
	tu=x.tu;
	mau=x.mau;
	return *this;
}
int main()
{
	CHonSo a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
