#include<iostream>
using namespace std;
class CDuongThang
{
	private:
		float a;
		float b;
	public:
		void Nhap();
		void Xuat();
		CDuongThang& operator=(CDuongThang &);
};
void CDuongThang::Nhap()
{
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
}
void CDuongThang::Xuat()
{
	cout<<"y="<<a<<"x+"<<b;
}
CDuongThang& CDuongThang::operator=(CDuongThang &x)
{
	a=x.a;
	b=x.b;
	return *this;
}
int main()
{
	CDuongThang x,y;
	x.Nhap();
	y=x;
	y.Xuat();
}
