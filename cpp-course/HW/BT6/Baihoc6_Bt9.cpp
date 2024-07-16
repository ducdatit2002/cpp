#include<iostream>
using namespace std;
class CSoPhuc
{
	private:
		float thuc;
		float ao;
	public:
		void Nhap();
		void Xuat();
		CSoPhuc& operator=(CSoPhuc &);
};
void CSoPhuc::Nhap()
{
	cout<<"Nhap phan thuc di ne ban oi: ";
	cin>>thuc;
	cout<<"Nhap phan ao lun nha: ";
	cin>>ao;
}
void CSoPhuc::Xuat()
{
	cout<<"y="<<thuc<<"+"<<ao<<"i";
}
CSoPhuc& CSoPhuc::operator=(CSoPhuc &x)
{
	thuc=x.thuc;
	ao=x.ao;
	return *this;
}
int main()
{
	CSoPhuc a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
