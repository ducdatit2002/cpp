#include<iostream>
using namespace std;
class CDiemKhongGian
{
	private:
		float x;
		float y;
		float z;
	public:
		void Nhap();
		void Xuat();
		CDiemKhongGian& operator=(CDiemKhongGian &);
};
void CDiemKhongGian::Nhap()
{
	cout<<"Nhap hoanh do: ";
	cin>>x;
	cout<<"Nhap tung do: ";
	cin>>y;
	cout<<"Nhap cao do: ";
	cin>>z;
}
void CDiemKhongGian::Xuat()
{
	cout<<"Diem A("<<x<<","<<y<<","<<z<<")";
}
CDiemKhongGian& CDiemKhongGian::operator=(CDiemKhongGian &a)
{
	x=a.x;
	y=a.y;
	z=a.z;
	return *this;
}
int main()
{
	CDiemKhongGian a,b;
	a.Nhap();
	b=a;
	b.Xuat();
}

