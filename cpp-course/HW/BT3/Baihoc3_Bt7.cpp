#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>
using namespace std;
class CDiem
{
	private:
		float x;
		float y;
	public:
		void Nhap();
		void Xuat();
		float KhoangCach(CDiem);
};
class CTamGiac
{
	private:
		CDiem A;
		CDiem B;
		CDiem C;
	public:
		void Nhap();
		void Xuat();
		float ChuVi();
		float DienTich();
		CDiem TrongTam();
};
int main()
{
	CTamGiac tg;
	tg.Nhap();
	tg.Xuat();
	float cv = tg.ChuVi() ;
	cout<<"\n Chu vi la: "<<cv;
	float dt = tg.DienTich();
	cout<<"\n Dien tich la: "<<dt;
	CDiem G = tg.TrongTam();
	cout<<"\n Trong Tam la:";
	G.Xuat();
	return 1;
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
void CTamGiac::Nhap()
{
	cout<<"Nhap A: ";
	A.Nhap();
	cout<<"Nhap B: ";
	B.Nhap();
	cout<<"Nhap C: ";
	C.Nhap();
}
void CDiem::Xuat()
{
	cout<<"\n x la: "<<x;
	cout<<"\n y la: "<<y;
}
void CTamGiac::Xuat()
{
	cout<<"\n A:";
	A.Xuat();
	cout<<"\n B:";
	B.Xuat();
	cout<<"\n C:";
	C.Xuat();
}
float CDiem::KhoangCach(CDiem P)
{
	return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y));
}
float CTamGiac::ChuVi()
{
	float a=B.KhoangCach(C);
	float b=C.KhoangCach(A);
	float c=A.KhoangCach(B);
	return (a+b+c);
}
float CTamGiac::DienTich()
{
	float a=B.KhoangCach(C);
	float b=C.KhoangCach(A);
	float c=A.KhoangCach(B);
	float p=(a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
CDiem CTamGiac::TrongTam()
{
	CDiem temp;
	temp.x = (A.x+B.x+C.x)/3;
	temp.y = (A.y+B.y+C.y)/3;
	return temp;
}
