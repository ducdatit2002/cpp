#include<iostream>
using namespace std;
class CDiem
{
	private:
		int x;
		int y;
	public:
		void Nhap();
		void Xuat();
		CDiem& operator=(CDiem &);
};
void CDiem::Nhap()
{
	cout<<"Nhap hoanh do ne: ";
	cin>>x;
	cout<<"Nhap tung do nha: ";
	cin>>y;
}
void CDiem::Xuat()
{
	cout<<"Diem D("<<x<<","<<y<<")";
}
CDiem& CDiem::operator=(CDiem &a)
{
	x=a.x;
	y=a.y;
	return *this;
}
int main()
{
	CDiem a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}
