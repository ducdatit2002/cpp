#include <iostream>
#include <cmath>
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
		float KhoangCach(CDiemKhongGian);
};
int main()
{
	CDiemKhongGian A,B;
	A.Nhap();
	B.Nhap();
	float kq = A.KhoangCach(B);
	A.Xuat();
	B.Xuat();
	cout<<"\n Ket qua: "<<kq;
	return 1;
}
float CDiemKhongGian::KhoangCach(CDiemKhongGian P)
{
	return sqrt((x-P.x)*(x-P.x)+(y-P.y)*(y-P.y)+(z-P.z)*(z-P.z));
}
void CDiemKhongGian::Xuat()
{
	cout<<"\n x= "<<x;
	cout<<"\n y= "<<y;
	cout<<"\n z= "<<z;
}
void CDiemKhongGian::Nhap()
{
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	cout<<"Nhap z: ";
	cin>>z;
}
