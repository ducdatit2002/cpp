#include<iostream>
using namespace std;
class CNgay
{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		CNgay();
		CNgay(int, int, int);
		CNgay(const CNgay&);
		friend ostream& operator<<(ostream &, CNgay &);
};
CNgay::CNgay()
{
	ngay=8;
	thang=4;
	nam=2002;
}
CNgay::CNgay(int n,int t, int nm)
{
	ngay = n;
	thang = t;
	nam = nm;
}
CNgay::CNgay(const CNgay &x)
{
	ngay=x.ngay;
	thang=x.thang;
	nam=x.nam;
}
ostream& operator<<(ostream &os, CNgay &x)
{
	os<<x.ngay<<"/"<<x.thang<<"/"<<x.nam;
	return os;
}
int main()
{
	CNgay SNDucDat;
	CNgay SNThao(31,5,2002);
	cout<<SNDucDat<<endl;
	cout<<SNThao<<endl;
	return 0;
}
