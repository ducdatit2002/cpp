#include<iostream>
using namespace std;
class CDonThuc
{
	private:
		float a;
		float b;
	public:
		friend istream& operator>>(istream&, CDonThuc &);
		friend ostream& operator<<(ostream&, CDonThuc &);
};
istream& operator>>(istream &is, CDonThuc &x)
{
	cout<<"Nhap a nhe:";
	is>>x.a;
	cout<<"Nhap mu b:";
	is>>x.b;
	return is;
}
ostream& operator<<(ostream &os, CDonThuc &x)
{
	os<<x.a<<"x"<<"^"<<x.b;
	return os;
}
int main()
{
	CDonThuc a;
	cin>>a;
	cout<<a;
	return 1;
}
