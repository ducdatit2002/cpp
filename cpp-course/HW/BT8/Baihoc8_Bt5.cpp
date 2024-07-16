#include<iostream>
using namespace std;
class CThoiGian
{
	private:
		int h;
		int m;
		int s;
	public:
		int operator!=(const CThoiGian &);
		int operator==(const CThoiGian &);
		friend istream& operator>>(istream&, CThoiGian&);
		friend ostream& operator<<(ostream&, CThoiGian&);
};
istream& operator>>(istream&is, CThoiGian &x)
{
	cout<<"Nhap gio: ";
	is>>x.h;
	cout<<"Nhap phut: ";
	is>>x.m;
	cout<<"Nhap giay: ";
	is>>x.s;
	return is;
}
ostream& operator<<(ostream&os, CThoiGian&x)
{
	os<<x.h<<":"<<x.m<<":"<<x.s;
	return os;
}
int CThoiGian::operator!=(const CThoiGian &x)
{
	if(h!=x.h && m!=x.m && s!=x.s)
		return 1;
	else
		return 0;
}
int CThoiGian::operator==(const CThoiGian &x)
{
	if(h==x.h && m==x.m && s==x.s)
		return 1;
	else
		return 0;
}
int main()
{
	CThoiGian a,b;
	cin>>a>>b;
	if(a==b)
	cout<<"THoi gian a va b giong nhau";
	if(a!=b)
	cout<<"THoi gian a va b khac nhau ";
	return 0;
}
