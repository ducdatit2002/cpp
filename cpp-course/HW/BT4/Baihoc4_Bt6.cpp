#include<iostream>
using namespace std;
class CDiemKhongGian
{
	private:
		float x;
		float y;
		float z;
	public:
		friend istream& operator>>(istream &, CDiemKhongGian &);
		friend ostream& operator<<(ostream &, CDiemKhongGian &);
};
istream& operator>>(istream &is, CDiemKhongGian &a)
{
	cout<<"Nhap hoanh do di ne:";
	is>>a.x;
	cout<<"Nhap tung do di ne:";
	is>>a.y;
	cout<<"Nhap cao do di ne:";
	is>>a.z;
	return is;
}
ostream& operator<<(ostream &os, CDiemKhongGian &a)
{
	os<<"A("<<a.x<<","<<a.y<<","<<a.z<<")";
	return os;
}
int main()
{
	CDiemKhongGian a;
	cin>>a;
	cout<<a;
	return 1;
}
