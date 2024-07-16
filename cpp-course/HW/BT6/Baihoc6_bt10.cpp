#include<iostream>
using namespace std;
class CDuongTron
{
	private:
		float x,y,r;
	public:
		void Nhap();
		void Xuat();
		CDuongTron& operator=(CDuongTron &);
};
void CDuongTron::Nhap()
{
	cout<<"Nhap hoanh do x cho tam I: ";
	cin>>x;
	cout<<"Nhap tung do y cho tam I: ";
	cin>>y;
	cout<<"Nhap ban kinh R cho duong tron: ";
	cin>>r;
	while (r==0)
	{
		cout<<"Ban kinh khong the la 0, nhap la di ne";
		cin>>r;
	}
}
void CDuongTron::Xuat()
{
	cout<<"Duong tron co tam I ("<<x<<","<<y<<"), ban kinh R="<<r<<endl;
}
CDuongTron& CDuongTron::operator=(CDuongTron &a)
{
	x=a.x;
	y=a.y;
	r=a.r;
	return *this;
}
int main()
{
	CDuongTron a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
