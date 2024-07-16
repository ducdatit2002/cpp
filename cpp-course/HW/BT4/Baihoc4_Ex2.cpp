#include <iostream>
struct phanso
{
	int tu;
	int mau;
};
void Nhap(phanso &x)
{
	cout<<"Nhap tu: ";
	cin>>x.tu;
	cout<<"Nhap mau: ";
	cin>>x.mau;
}
void Xuat(phanso x)
{
	cout<<x.tu<<"/"<<x.mau;
}
