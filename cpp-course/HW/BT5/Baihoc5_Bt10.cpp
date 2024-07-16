#include<iostream>
using namespace std;
class CDuongTron
{
	private:
		float a;
		float b;
		float R;
	public:
		CDuongTron();
		CDuongTron(int, int, int);
		CDuongTron(const CDuongTron &);
		~CDuongTron();
		friend ostream& operator<<(ostream &,CDuongTron &);
};
CDuongTron::CDuongTron()
{
	a=8;
	b=4;
	R=2002;
}
CDuongTron::CDuongTron(int A, int B, int r)
{
	a=A;
	b=B;
	R=r;
}
CDuongTron::CDuongTron(const CDuongTron &x)
{
	a=x.a;
	b=x.b;
	R=x.R;
}
CDuongTron::~CDuongTron()
{
	return;
}
ostream& operator<<(ostream &os, CDuongTron &x)
{
	os<<"Duong tron co tam O ("<<x.a<<","<<x.b<<") va ban kinh R="<<x.R;
	return os;
}
int main()
{
	CDuongTron dt;
	CDuongTron dt1(31,5,2002);
	cout<<dt<<endl<<dt1<<endl;
	return 0;
}
