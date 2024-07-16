#include<iostream>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		CPhanSo();
		CPhanSo(int, int);
		CPhanSo(const CPhanSo&);
		friend ostream& operator<<(ostream &, CPhanSo &);
		~CPhanSo();
};
CPhanSo::CPhanSo()
{
	tu=8;
	mau=4;
}
CPhanSo::CPhanSo(int t, int m)
{
	tu=t;
	mau=m;
}
CPhanSo::CPhanSo(const CPhanSo&x)
{
	tu=x.tu;
	mau=x.mau;
}
ostream& operator<<(ostream &os, CPhanSo &x)
{
	os<<x.tu<<"/"<<x.mau;
	return os;
}
CPhanSo::~CPhanSo()
{
	return;
}
int main()
{
	CPhanSo DucDat;
	CPhanSo Thao(31,5);
	cout<<DucDat<<endl;
	cout<<Thao<<endl;
	return 0;
}
