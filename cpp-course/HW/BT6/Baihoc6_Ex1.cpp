#include<iostream>
using namespace std; 
class CHocSinh
{
	private:
		string hoten;
		int toan;
		int van;
		float dtb;
	public:
		CHocSinh& operator=(CHocSinh &);
		void Nhap();
		void Xuat();
};
CHocSinh& CHocSinh::operator=(CHocSinh &x)
{
	hoten=x.hoten;
	toan=x.toan;
	van=x.van;
	dtb=x.dtb;
	return *this;
}
void CHocSinh::Nhap()
{
	cout<<"Cho hoi la baby ten gi? "<<endl;
	getline(cin, hoten);
	cout<<"Ghi ho minh cai diem mon toan:"<<endl;
	cin>>toan;
	while (toan<0 || toan>10)
	{
		cout<<"Nhap sai, nhap lai diem toan di ban oi";
		cin>>toan;
	}
	cout<<"Nhap lun diem van ne:"<<endl;
	cin>>van;
	while (van<0 || van>10)
	{
		cout<<"Ua gi sai quai, nhap lai diem van di";
		cin>>van;
	}
}
void CHocSinh::Xuat()
{
	cout<<"Ho ten hoc sinh la: "<<hoten<<endl;
	dtb=(toan+van)/2;
	cout<<"Diem toan cua baby la: "<<toan<<", diem van la: "<<van<<", diem trung binh cua be la: "<<dtb<<endl;
}
int main()
{
	CHocSinh a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
