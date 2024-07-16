#include<iostream>
using namespace std;
class CNgay
{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		friend istream& operator>>(istream &, CNgay &);
		friend ostream& operator<<(ostream &, CNgay &);
};
istream& operator>>(istream &is, CNgay &x)
{
	cout<<"Hom nay la ngay may:";
	is>>x.ngay;
	cout<<"Hom nay la thang may z ban iu:";
	is>>x.thang;
	cout<<"Ua cho hoi nam nay la nam bao nhieu:";
	is>>x.nam;
	return is;
}
ostream& operator<<(ostream &os, CNgay &x)
{
	os<<x.ngay<<"/"<<x.thang<<"/"<<x.nam;
	return os;
}
int main()
{
	CNgay a;
	cin>>a;
	cout<<a;
	return 1;
}
