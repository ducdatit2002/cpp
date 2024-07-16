#include<iostream>
using namespace std;
class CHonSo
{
	private:
		float tu;
		float mau;
		float nguyen;
	public:
		friend istream& operator>>(istream &,CHonSo &);
		friend ostream& operator<<(ostream &,CHonSo &);
};
istream& operator>>(istream &is, CHonSo &a)
{
	cout<<"Nhap phan nguyen di:";
	is>>a.nguyen;
	cout<<"Nhap tu dum lun:";
	is>>a.tu;
	cout<<"Nhap mau ne:";
	is>>a.mau;
	return is;
}
ostream& operator<<(ostream &os, CHonSo &a)
{
	os<<"\n Hon so co so nguyen la: "<<a.nguyen;
	os<<"\n Tu so la: "<<a.tu;
	os<<"\n Mau so la: "<<a.mau;
	return os;
}
int main()
{
	CHonSo a;
	cin>>a;
	cout<<a;
	return 1;
}

