#include<iostream>
using namespace std;
class CThoiGian
{
	private:
		int gio;
		int phut;
		int giay;
	public:
		friend istream& operator>>(istream &, CThoiGian &);
		friend ostream& operator<<(ostream &, CThoiGian &);
};
istream& operator>>(istream &is, CThoiGian &a)
{
	cout<<"Cho hoi la may gio roi:";
	is>>a.gio;
	while(a.gio<0||a.gio>23)
	{
		cout<<"Sai goi ma oi, nhap lai gio dum cai";
		is>>a.gio;
	}
	cout<<"Ua sao noi gio roi hong noi phut, may phut roi?";
	is>>a.phut;
	while(a.phut<0||a.phut>59)
	{
		cout<<"Ua sai gi sai quai z, nhap phut lai dum";
		is>>a.phut;
	}
	cout<<"Nhap giay lun di ne:";
	is>>a.giay;
	while(a.giay<0||a.giay>59)
	{
		cout<<"Nhap lai dum nha";
		is>>a.giay;
	}
	return is;
}
ostream& operator<<(ostream &os, CThoiGian &a)
{
	os<<a.gio<<":"<<a.phut<<":"<<a.giay;
	return os;
}
int main()
{
	CThoiGian a;
	cin>>a;
	cout<<a;
	return 1;
}
