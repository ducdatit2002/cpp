#include<iostream>
class CNgay
{
	private:
		int ng;
		int th;
		int nm;
	public:
		friend istream& operator >>(istream &, CNgay &);
		friend ostream& operator <<(ostream &, CNgay &);
};
istream& operator>>(istream &is,CNgay &x)
{
	cout<<"Nhap ngay:";
	is>>x.ng;
	cout<<"Nhap thang: ";
	is>>x.th;
	cout<<"Nhap nam: ";
	is>>x.nm;
	return is;
}
ostream& operator<<(ostream &os,CNgay &x)
{
	os<<"\n Ngay:"<<x.ng;
	os<<"\n Thang:"<<x.th;
	os<<"\n Nam: "<<x.nm;
	return os;
}
