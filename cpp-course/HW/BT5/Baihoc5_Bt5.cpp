#include<iostream>
using namespace std; 
class CDonThuc
{
	private:
		float a;
		float b;
	public:
		CDonThuc();
		CDonThuc(int, int);
		CDonThuc(const CDonThuc &);
		~CDonThuc();
		friend ostream& operator<<(ostream &, CDonThuc &);
};
CDonThuc::CDonThuc()
{
	a=8;
	b=4;
}
CDonThuc::CDonThuc(int A, int B)
{
	a=A;
	b=B;
}
CDonThuc::CDonThuc(const CDonThuc &x)
{
	a=x.a;
	b=x.b;
}
CDonThuc::~CDonThuc()
{
	return;
}
ostream& operator<<(ostream &os, CDonThuc &x)
{
	os<<x.a<<"x^"<<x.b;
	return os;
}
int main()
{
	CDonThuc dt;
	CDonThuc dt1(31,5);
	cout<<dt<<endl;
	cout<<dt1<<endl;
	return 0;
}
