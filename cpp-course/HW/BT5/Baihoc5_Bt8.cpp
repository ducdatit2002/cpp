#include<iostream>
using namespace std;
class CHonSo
{
	private:
		float tu;
		float mau;
		float nguyen;
	public:
		CHonSo();
		CHonSo(float, float, float);
		CHonSo(const CHonSo &);
		~CHonSo();
		friend ostream& operator<<(ostream &, CHonSo &);
};
CHonSo::CHonSo()
{
	tu=8;
	mau=4;
	nguyen=2002;
}
CHonSo::CHonSo(float t,float m,float n)
{
	tu=t;
	mau=m;
	nguyen=n;
}
CHonSo::CHonSo(const CHonSo &x)
{
	tu=x.tu;
	mau=x.mau;
	nguyen=x.nguyen;
}
CHonSo::~CHonSo()
{
	return;
}
ostream& operator<<(ostream &os, CHonSo &a)
{
	os<<"\n Phan nguyen la:"<<a.nguyen;
	os<<"\n Tu so la:"<<a.tu;
	os<<"\n Mau so la: "<<a.mau;
}
int main ()
{
	CHonSo honso;
	CHonSo honso1(31,5,2002);
	cout<<honso<<endl<<honso1<<endl;
	return 0;
}
