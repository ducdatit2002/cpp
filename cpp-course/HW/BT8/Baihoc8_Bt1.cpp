#include<iostream>
using namespace std;
class CHonSo
{
	private:
		int tu;
		int mau;
		int nguyen;
	public:
		int operator>(const CHonSo &);
		int operator<(const CHonSo &);
		int operator>=(const CHonSo &);
		int operator<=(const CHonSo &);
		int operator!=(const CHonSo &);
		int operator==(const CHonSo &);
		friend istream& operator>>(istream&, CHonSo&);
		friend ostream& operator<<(ostream&, CHonSo&);
};
int CHonSo::operator>(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)>0 && nguyen>x.nguyen)
		return 1;
	else 
		return 0;
}
int CHonSo::operator<(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)<0 && nguyen<x.nguyen)
		return 1;
	else 
		return 0;
}
int CHonSo::operator>=(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)>=0 && nguyen>=x.nguyen)
		return 1;
	else 
		return 0;
}
int CHonSo::operator<=(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)<=0 && nguyen<=x.nguyen)
		return 1;
	else 
		return 0;
}
int CHonSo::operator==(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)==0 && nguyen==x.nguyen)
		return 1;
	else 
		return 0;
}
int CHonSo::operator!=(const CHonSo &x)
{
	float hieu=(tu*x.mau-x.tu*mau)/1.0*(x.mau*mau);
	if(((float)hieu)!=0 && nguyen!=x.nguyen)
		return 1;
	else 
		return 0;
}
istream& operator>>(istream&is, CHonSo &x)
{
	cout<<"Nhap phan nguyen:";
	is>>x.nguyen;
	cout<<"Nhap tu so: ";
	is>>x.tu;
	cout<<"Nhap mau so: ";
	is>>x.mau;
	return is;
}
ostream& operator<<(ostream&os, CHonSo&x)
{
	os<<x.nguyen<<"("<<x.tu<<"/"<<x.mau<<")";
	return os;
}
int main()
{
	CHonSo a,b;
	cin>>a>>b;
	if(a>b)
	cout<<"a lon hon b ";
	if(a<b)
	cout<<"a be hon b ";
	if(a==b)
	cout<<"a bang b ";
	if(a!=b)
	cout<<"a khac b ";
	if(a>=b)
	cout<<"a lon hon va bang b ";
	if(a<=b)
	cout<<"a be hon va bang b ";
	return 0;
}
