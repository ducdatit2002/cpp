#include <iostream>
using namespace std;
class CSoPhuc
{
	private:
		float thuc;
		float ao;
	public:
		void Nhap();
		void Xuat();
		CSoPhuc Tong(CSoPhuc);
		CSoPhuc Hieu(CSoPhuc);
		CSoPhuc Tich(CSoPhuc);
		CSoPhuc Thuong(CSoPhuc);
};
int main()
{
	CSoPhuc a,b,kq;
	cout<<"\n Nhap so phuc a:";
	a.Nhap();
	cout<<"\n Nhap so phuc b:";
	b.Nhap();
	kq = a.Tong(b);
	cout<<"\n Tong la:";
	kq.Xuat();
	kq = a.Hieu(b);
	cout<<"\n Hieu la:";
	kq.Xuat();
	kq = a.Tich(b);
	cout<<"\n Tich la:";
	kq.Xuat();
	return 1;
}
void CSoPhuc::Nhap()
{
	float temp;
	cout<<"\n Nhap thuc:";
	cin>>temp;
	thuc = temp;
	cout<<"\n Nhap ao: ";
	cin>>temp;
	ao = temp;
}
void CSoPhuc::Xuat()
{
	cout<<"\n Thuc la: "<<thuc;
	cout<<"\n Ao la: "<<ao;
}
CSoPhuc CSoPhuc::Tong(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc + x.thuc;
	temp.ao = ao + x.ao;
	return temp; 
}
CSoPhuc CSoPhuc::Hieu(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc - x.thuc;
	temp.ao = ao - x.ao;
	return temp;
}
CSoPhuc CSoPhuc::Tich(CSoPhuc x)
{
	CSoPhuc temp;
	temp.thuc = thuc*x.thuc - ao*x.ao;
	temp.ao = thuc*x.ao + ao*x.thuc;
	return temp;
}
