#include<iostream>
using namespace std;
class CDonThuc
{
	private:
		float a;
		float b;
	public:
		void Nhap();
		void Xuat();
		CDonThuc& operator=(CDonThuc &);
};
void CDonThuc::Nhap()
{
	cout<<"Nhap a: ";
	cin>>a;
	while(a==0)
	{
		cout<<"Nhap sai roi, nhap lai di";
		cin>>a;
	}
	cout<<"Nhap so mu b ne:";
	cin>>b;
}
void CDonThuc::Xuat()
{
	cout<<a<<"x^("<<b<<")";
}
CDonThuc& CDonThuc::operator=(CDonThuc &x)
{
	a=x.a;
	b=x.b;
	return *this;
}
int main()
{
	CDonThuc x,y;
	x.Nhap();
	y=x;
	y.Xuat();
}
