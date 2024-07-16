#include<iostream>
using namespace std;
class CNgay
{
	private:
		int d;
		int m;
		int y;
	public:
		int operator!=(const CNgay &);
		int operator==(const CNgay &);
		friend istream& operator>>(istream&, CNgay&);
		friend ostream& operator<<(ostream&, CNgay&);
};
istream& operator>>(istream&is, CNgay &x)
{
	cout<<"Nhap ngay: ";
	is>>x.d;
	cout<<"Nhap thang: ";
	is>>x.m;
	cout<<"Nhap nam: ";
	is>>x.y;
	return is;
}
ostream& operator<<(ostream&os, CNgay&x)
{
	os<<x.d<<"/"<<x.m<<"/"<<x.y;
	return os;
}
int CNgay::operator!=(const CNgay &x)
{
	if(d!=x.d && m!=x.m && y!=x.y)
		return 1;
	else
		return 0;
}
int CNgay::operator==(const CNgay &x)
{
	if(d==x.d && m==x.m && y==x.y)
		return 1;
	else
		return 0;
}
int main()
{
	CNgay a,b;
	cin>>a>>b;
	if(a==b)
	cout<<"Hai ngay a va b la cung mot ngay ";
	if(a!=b)
	cout<<"Hai ngay a va b la khac nhau ";
	return 0;
}
