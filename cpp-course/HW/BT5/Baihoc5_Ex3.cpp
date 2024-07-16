#include<iostream>
using namespace std;
class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		CPhanSo();
		~CPhanSo();
		friend ostream& operator<<(ostream &, CPhanSo &);
};
CPhanSo::CPhanSo()
{
	mau=8;
	tu=4;
}
CPhanSo::~CPhanSo()
{
	return;
}
ostream& operator<<(ostream &os, CPhanSo &x)
{
	os<<x.tu<<"/"<<x.mau;
	return os;
}
int main()
{
	CPhanSo PS;
	cout<<PS;
	return 0;
}
