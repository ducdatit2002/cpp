#include<iostream>
using namespace std;
class CNgay
{
	private:
		int nam;
		int thang;
		int ngay;
	public:
		void Nhap();
		void Xuat();
		CNgay& operator=(CNgay &);
};
void CNgay::Nhap()
{
	cout<<"Nhap ngay: ";
	cin>>ngay;
	while(ngay<0 ||ngay>31)
	{
		cout<<"Nhap ngay sai roi, nhap lai di";
		cin>>ngay;
	}
	cout<<"Nhap thang: ";
	cin>>thang;
	while(thang<0 ||thang>12)
	{
		cout<<"Nhap thang sai roi, nhap lai";
		cin>>thang;
	}
	cout<<"Nhap nam lun ne: ";
	cin>>nam;
}
void CNgay::Xuat()
{
	cout<<ngay<<"/"<<thang<<"/"<<nam;
}
CNgay& CNgay::operator=(CNgay &x)
{
	ngay=x.ngay;
	thang=x.thang;
	nam=x.nam;
	return *this;
}
int main()
{
	CNgay a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}

