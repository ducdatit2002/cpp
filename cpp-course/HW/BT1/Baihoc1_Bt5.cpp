#include<iostream>
using namespace std;
struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
int main()
{
	SOPHUC a,b,kq;
	cout<<"\n Nhap...:";
	Nhap(a);
	cout<<"\n Nhap...:";
	Nhap(b);
	kq = Tong(a,b);
	cout<<"\n Tong...:";
	Xuat(kq);
	kq = Hieu(a,b);
	cout<<"\n Hieu...:";
	Xuat(kq);
	kq = Tich(a,b);
	cout<<"\n Tich...:";
	Xuat(kq);
	return 1;
}
SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC temp;
	temp.thuc=a.thuc + b.thuc;
	temp.ao=a.ao + b.ao;
	return temp;
}
SOPHUC Hieu(SOPHUC a,SOPHUC b)
{
	SOPHUC temp;
	temp.thuc=a.thuc-b.thuc;
	temp.ao=a.ao-b.ao;
	return temp;
}
SOPHUC Tich(SOPHUC a,SOPHUC b)
{
	SOPHUC temp;
	temp.thuc=a.thuc*b.thuc-a.ao*b.ao;
	temp.ao=a.thuc*b.ao+a.ao*b.thuc;
	return temp;
}
void Xuat(SOPHUC x)
{
	cout<<"\nThuc= "<<x.thuc;
	cout<<"\nAo= "<<x.ao;
}
void Nhap(SOPHUC &x)
{
	cout<<"\nNhap thuc: ";
	cin>>x.thuc;
	cout<<"\nNhap ao: ";
	cin>>x.ao;
}
