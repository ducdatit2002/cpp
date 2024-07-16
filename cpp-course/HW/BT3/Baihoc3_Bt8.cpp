#include <iostream>
using namespace std;
class CDiem
{
	private:
		float x;
		float y;
	public:
		void Nhap();
		void Xuat();
};
class CDuongTron
{
	private:
		CDiem I;
		float R;
	public:
		void Nhap();
		void Xuat();
		float ChuVi();
		float DienTich();
};
int main()
{
	CDuongTron c;
	c.Nhap();
	c.Xuat();
	float cv = c.ChuVi();
	cout<<"\n Chu vi la:"<<cv;
	float dt = c.DienTich();
	cout<<"\n Dien tich la:"<<dt;
}
void CDiem::Nhap()
{
	float temp;
	cout<<"Nhap x: ";
	cin>>temp;
	x = temp;
	cout<<"Nhap y: ";
	cin>>temp;
	y = temp;
}
void CDuongTron::Nhap()
{
	float temp;
	cout<<"Nhap tam: ";
	I.Nhap();
	cout<<"Nhap ban kinh:";
	cin>>temp;
	R = temp;
}
void CDiem::Xuat()
{
	cout<<"\n x la: "<<x;
	cout<<"\n y la: "<<y;
}
void CDuongTron::Xuat()
{
	cout<<"\n Tam la: ";
	I.Xuat();
	cout<<"Ban kinh la: "<<R;
}
float CDuongTron::ChuVi()
{
	return 2*3.14*R;
}
float CDuongTron::DienTich()
{
	return 3.14*R*R;
}
