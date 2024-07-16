#include<iostream>
using namespace std;
class CDuongThang
{
	private:
		float a;
		float b;
	public:
		friend istream& operator>>(istream &, CDuongThang &);
		friend ostream& operator<<(ostream &, CDuongThang &);
};
istream& operator>>(istream &is, CDuongThang &x)
{
	cout<<"Nhap a ne:";
	is>>x.a;
	cout<<"Nhap b ne:";
	is>>x.b;
	return is;
}
ostream& operator<<(ostream &os, CDuongThang &x)
{
	os<<x.a<<"x+("<<x.b<<")";
	return os;
}
int main()
{
	CDuongThang x;
	cin>>x;
	cout<<x;
	return 1;
}
