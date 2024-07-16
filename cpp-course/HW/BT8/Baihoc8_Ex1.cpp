#include<iostream>
using namespace std;
class CHocSinh
{
	private:
		string hoten;
		int toan;
		int van;
		float dtb;
	public:
		int operator>(CHocSinh&);
		friend istream& operator>>(istream&, CHocSinh&);
		friend ostream& operator<<(ostream&, CHocSinh&);
		float dtbinh();
};
istream& operator>>(istream&is, CHocSinh &x)
{
	cout<<"Ho ten ban la gi: ";
	is>>x.hoten;
	cout<<"Nhap diem toan: ";
	is>>x.toan;
	cout<<"Nhap diem van: ";
	is>>x.van;
	return is;
}
ostream& operator<<(ostream&os, CHocSinh &x)
{
	os<<"Ho ten cua ban la:"<<x.hoten;
	os<<x.toan<<"va"<<x.van;
	return os;
}
int CHocSinh::operator>(CHocSinh&x)
{
	if (this->dtbinh() > x.dtbinh())
		return 1;
	return 0;
}
float CHocSinh::dtbinh()
{
	dtb=(toan+van)/2;
	return dtb;
}
int main()
{
	CHocSinh a,b;
	cin>>a>>b;
	if (a>b)
		cout<<"DTB a lon hon DTB b ";
	else
		cout<<"DTB a khong lon hon DTB b";
	return 0;
}
