#include<iostream>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		friend istream& operator>>(istream&, CPhanSo&);
		friend ostream& operator<<(ostream&, CPhanSo&);
};
istream& operator>>(istream &is, CPhanSo &x)
{
	cout<<"Nhap tu:";
	is>>x.tu;
	cout<<"Nhap mau:";
	is>>x.mau;
	return is;
}
ostream& operator<<(ostream &os, CPhanSo &x)
{
	os<<x.tu<<"/"<<x.mau;
	return os;
}
int main()
{
	CPhanSo a;
	cin>>a;
	cout<<a;
	return 1;
}
