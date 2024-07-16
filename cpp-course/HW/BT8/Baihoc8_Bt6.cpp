#include<iostream>
using namespace std;
class CDonThuc
{
	private:
		int a;
		int b;
	public:
		int operator!=(const CDonThuc &);
		int operator==(const CDonThuc &);
		friend istream& operator>>(istream&, CDonThuc&);
		friend ostream& operator<<(ostream&, CDonThuc&);
};
istream& operator>>(istream&is, CDonThuc &x)
{
	cout<<"Nhap co so a: ";
	is>>x.a;
	cout<<"Nhap so mu b: ";
	is>>x.b;
	return is;
}
ostream& operator<<(ostream&os, CDonThuc&x)
{
	os<<"y="<<x.a<<"x+"<<x.b;
	return os;
}
int CDonThuc::operator!=(const CDonThuc &x)
{
	if(a!=x.a && b!=x.b)
		return 1;
	else
		return 0;
}
int CDonThuc::operator==(const CDonThuc &x)
{
	if(b==x.b && b==x.b)
		return 1;
	else
		return 0;
}
int main()
{
	CDonThuc a,b;
	cin>>a>>b;
	if(a==b)
	cout<<"Don thuc a bang don thuc b";
	if(a!=b)
	cout<<"Don thuc a  khac don thuc b";
	return 0;
}
