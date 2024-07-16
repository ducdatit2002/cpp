#include <iostream>
#include <string>
using namespace std;
class CHocSinh
{
	private:
		string hoten;
		int toan;
		int van;
		float dtb;
	public:
		void Nhap();
		void Xuat();
		void XuLy();
};
int main()
{
	CHocSinh hs;
	hs.Nhap();
	hs.XuLy();
	hs.Xuat(); 
	return 1;
}
void CHocSinh::Nhap()
{
	cout<<"Nhap ho ten:";
	getline(cin,hoten);
	cout<<"Nhap toan:";
	cin>>toan;
	cout<<"Nhap van:";
	cin>>van;
}
void CHocSinh::XuLy()
{
	dtb = (float)(toan + van)/2;
}
void CHocSinh::Xuat()
{
	cout<<"\nHo ten: "<<hoten;
	cout<<"\nToan: "<<toan;
	cout<<"\nVan: "<<van;
	cout<<"\nDTB: "<<dtb;
}

