#include<iostream>
using namespace std;
struct phanso
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
int SoSanh(PHANSO, PHANSO);
int main()
{
	PHANSO a,b;
	cout<<"\n Nhap phan so thu 1: \n";
	Nhap(a);
	cout<<"\n Nhap phan so thu 2: \n";
	Nhap(b);
	int kq = SoSanh(a,b);
	cout<<"\n Phan so lon nhat la: ";
	if(kq >= 0)
		Xuat(a);
	else
		Xuat(b);
	return 1;
}
int SoSanh(PHANSO x,PHANSO y)
{
	float a=(float)x.tu/x.mau;
	float b=(float)y.tu/y.mau;
	if(a>b)
		return 1;
	if(a<b)
		return -1;
	return 0;
}
void Xuat(PHANSO x)
{
	cout<<"\n Tu: "<<x.tu;
	cout<<"\n Mau: "<<x.mau;
}
void Nhap(PHANSO &x)
{
	cout<<"Nhap tu: ";
	cin>>x.tu;
	cout<<"Nhap mau: ";
	cin>>x.mau;
}
