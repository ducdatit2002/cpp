#include<iostream>
using namespace std;
class CDuongTron
{
	private:
		float x;
		float y;
		float R;
	public:
		friend istream& operator>>(istream &,CDuongTron &);
		friend ostream& operator<<(ostream &,CDuongTron &);
};
istream& operator>>(istream &is, CDuongTron &a)
{
	cout<<"Nhap x ne: ";
	is>>a.x;
	cout<<"Nhap y lun: ";
	is>>a.y;
	cout<<"Nhap R: ";
	is>>a.R;
	return is;
}
ostream& operator<<(ostream &os, CDuongTron &a)
{
	os<<"Duong tron co tam I ("<<a.x<<","<<a.y<<") va ban kinh R="<<a.R;
	return os;
}
int main()
{
	CDuongTron a;
	cin>>a;
	cout<<a;
	return 1;
}
