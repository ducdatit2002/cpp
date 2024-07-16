#include <iostream>
using namespace std;

class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		void Nhap();
		void Xuat();
		int XetDau();
};
int main()
{
	CPhanSo a;
	a.Nhap();
	int kq = a.XetDau();
	switch(kq)
	{
		case 1:cout<<"Phan so duong";
			break;
		case -1:cout<<"Phan so am";
			break;
		case 0:cout<<"Phan so bang khong.";
			break;
	}
	return 1;
}
int CPhanSo::XetDau()
{
	if(tu * mau >0)
		return 1;
	if(tu * mau <0)
		return -1;
	return 0;
}
void CPhanSo::Nhap()
{
	cout<<"Nhap tu:";
	cin>>tu;
	cout<<"Nhap mau:";
	cin>>mau;
}
void CPhanSo::Xuat()
{
	cout<<"\n Tu: "<<tu;
	cout<<"\n Mau: "<<mau;
}
