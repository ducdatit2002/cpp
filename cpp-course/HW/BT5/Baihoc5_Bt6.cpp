#include<iostream>
using namespace std;
class CDiemKhongGian
{
	private:
		float a;
		float b;
		float c;
	public:
		CDiemKhongGian();
		CDiemKhongGian(int, int, int);
		CDiemKhongGian(const CDiemKhongGian &);
		~CDiemKhongGian();
		friend ostream& operator<<(ostream &, CDiemKhongGian &);
};
CDiemKhongGian::CDiemKhongGian()
{
	a=8;
	b=4;
	c=2002;
}
CDiemKhongGian::CDiemKhongGian(int A,int B,int C)
{
	a=A;
	b=B;
	c=C;
}
CDiemKhongGian::CDiemKhongGian(const CDiemKhongGian &x)
{
	a=x.a;
	b=x.b;
	c=x.c;
}
CDiemKhongGian::~CDiemKhongGian()
{
	return;
}
ostream& operator<<(ostream &os, CDiemKhongGian &x)
{
	os<<"("<<x.a<<","<<x.b<<","<<x.c<<")";
	return os;
}
int main()
{
	CDiemKhongGian dkg;
	CDiemKhongGian dkg1(31,5,2002);
	cout<<dkg<<endl;
	cout<<dkg1<<endl;
	return 0;
}
