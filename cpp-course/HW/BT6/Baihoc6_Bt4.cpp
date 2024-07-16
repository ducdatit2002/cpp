#include<iostream>
using namespace std;
class CThoiGian
{
	private:
		int gio;
		int phut;
		int giay;
	public:
		void Nhap();
		void Xuat();
		CThoiGian& operator=(CThoiGian &);
};
void CThoiGian::Nhap()
{
	cout<<"Cho hoi la may gio ne? ";
	cin>>gio;
	while(gio<0||gio>24)
	{
		cout<<"Sai roi nhap lai di ban oi";
		cin>>gio;
	}
	cout<<"Nhap phut lun ne hihi: ";
	cin>>phut;
	while(phut<0 ||phut>60)
	{
		cout<<"Sai lun roi nha, nhap lai di";
		cin>>phut;
	}
	cout<<"Nhap giay di ne: ";
	cin>>giay;
	while(giay<0 ||giay>60)
	{
		cout<<"Nhap giay sai roi, nhap lai";
		cin>>giay;
	}
}
void CThoiGian::Xuat()
{
	cout<<gio<<":"<<phut<<":"<<giay;
}
CThoiGian& CThoiGian::operator=(CThoiGian &x)
{
	gio=x.gio;
	phut=x.phut;
	giay=x.giay;
	return *this;
}
int main()
{
	CThoiGian a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
