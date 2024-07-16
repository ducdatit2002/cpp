#include <iostream>
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
int main()
{
	CDiem A,B;
	A.Nhap();
	B.Nhap();
	float kq = B.KhoangCach(A);
	A.Xuat();
	B.Xuat();
	cout<<"\n Khoang cach la: "<<kq;
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
void CDiem::Xuat()
{
	cout<<"\n x ="<<x;
	cout<<"\n y ="<<y;
}
float CDiem::KhoangCach(CDiem P)
{
	return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y));
}

