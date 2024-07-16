#include<iostream>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		CPhanSo();
		CPhanSo(int,int);
		CPhanSo(const CPhanSo&);
		friend ostream& operator<<(ostream &, CPhanSo &);
};
CPhanSo::CPhanSo()
{
	tu = 0;
	mau = 1;
}
CPhanSo::CPhanSo(int t,int m)
{
	tu = t;
	mau = m;
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
int main()
{
	CPhanSo PS;
	CPhanSo PS100(8,4);
	cout<<PS<<endl;
	cout<<PS100<<endl;
}
