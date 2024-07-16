#include<iostream>
using namespace std;
class CSoPhuc
{
	private:
		float thuc;
		float ao;
	public:
		friend istream& operator>>(istream&, CSoPhuc &);
		friend ostream& operator<<(ostream&, CSoPhuc &);
};
istream& operator>>(istream &is, CSoPhuc &a)
{
	cout<<"Nhap phan thuc ne:";
	is>>a.thuc;
	cout<<"Nhap ao lun nha:";
	is>>a.ao;
	return is;
}
ostream& operator<<(ostream &os, CSoPhuc &a)
{
	os<<"x="<<a.thuc<<"+"<<a.ao<<"i";
	return os;
}
int main()
{
	CSoPhuc a;
	cin>>a;
	cout<<a;
	return 1;
}
