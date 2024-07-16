#include<iostream>
using namespace std;
class CThoiGian
{
	private:
		int gio;
		int phut;
		int giay;
	public:
		CThoiGian();
		CThoiGian(int,int,int);
		CThoiGian(const CThoiGian&);
		~CThoiGian();
		friend ostream& operator<<(ostream &, CThoiGian &);
};
CThoiGian::CThoiGian()
{
	gio=8;
	phut=4;
	giay=48;
}
CThoiGian::CThoiGian(int g,int p, int gi)
{
	gio=g;
	phut=p;
	giay=gi;
}
CThoiGian::CThoiGian(const CThoiGian&x)
{
	gio=x.gio;
	phut=x.phut;
	giay=x.giay;
}
CThoiGian::~CThoiGian()
{
	return;
}
ostream& operator<<(ostream &os, CThoiGian&x)
{
	os<<x.gio<<":"<<x.phut<<":"<<x.giay;
	return os;
}
int main()
{
	CThoiGian tg;
	CThoiGian tg1(5,24,44);
	cout<<tg<<endl;
	cout<<tg1<<endl;
}
