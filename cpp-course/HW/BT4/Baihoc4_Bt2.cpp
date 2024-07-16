#include<iostream>
using namespace std;
class CDiem
{
	private:
		float x;
		float y;
	public:
		friend istream& operator>>(istream &, CDiem &);
		friend ostream& operator<<(ostream &, CDiem &);
};
istream& operator>>(istream &is, CDiem &a)
{
	cout<<"Nhap hoanh do di ban oi: ";
	is>>a.x;
	cout<<"Nhap tung do di cho keo ne: ";
	is>>a.y;
	return is;
}
ostream& operator<<(ostream &os, CDiem &a)
{
	os<<"A("<<a.x<<","<<a.y<<")";
	return os;
}
int main()
{
	CDiem a;
	cin>>a;
	cout<<a;
	return 1;
}
