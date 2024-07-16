#include<iostream>
#include<math.h>
using namespace std;
class CSoPhuc
{
	private:
		float thuc;
		float ao;
	public:
		void Nhap();
		void Xuat();
		CSoPhuc operator+(CSoPhuc &);
		CSoPhuc operator-(CSoPhuc &);
		CSoPhuc operator*(CSoPhuc &);
		CSoPhuc operator/(CSoPhuc &);
		CSoPhuc operator+=(int);
		CSoPhuc operator-=(int);
		CSoPhuc operator*=(int);
		CSoPhuc operator/=(int);
};
void CSoPhuc::Nhap()
{
	cout<<"Nhap phan thuc:";
	cin>>thuc;
	cout<<"Nhap phan ao lun: ";
	cin>>ao;
}
void CSoPhuc::Xuat()
{
	cout<<"y="<<thuc<<"+"<<ao<<"i"<<endl;
}
CSoPhuc CSoPhuc::operator+(CSoPhuc &x)
{
	CSoPhuc temp;
	temp.thuc=thuc+x.thuc;
	temp.ao=ao+x.ao;
	return temp;
}
CSoPhuc CSoPhuc::operator-(CSoPhuc &x)
{
	CSoPhuc temp;
	temp.thuc=thuc-x.thuc;
	temp.ao=ao-x.ao;
	return temp;
}
CSoPhuc CSoPhuc::operator*(CSoPhuc &x)
{
	CSoPhuc temp;
	temp.thuc=thuc*x.thuc-ao*x.ao;
	temp.ao=thuc*x.ao+ao*x.thuc;
	return temp;
}
CSoPhuc CSoPhuc::operator/(CSoPhuc &x)
{
	CSoPhuc temp;
    temp.thuc=((x.thuc*thuc)+(x.ao*ao))/(pow(x.thuc,2)+pow(x.ao,2));
    temp.ao=((x.thuc*ao)-(x.ao*thuc))/(pow(x.thuc,2)+pow(x.ao,2));
	return temp;
}
CSoPhuc CSoPhuc::operator+=(int phanso)
{
	CSoPhuc temp;
	temp.thuc=thuc+phanso;
	temp.ao=ao;
	return temp;
}
CSoPhuc CSoPhuc::operator-=(int phanso)
{
	CSoPhuc temp;
	temp.thuc=thuc-phanso;
	temp.ao=ao;
	return temp;
}
CSoPhuc CSoPhuc::operator*=(int phanso)
{
	CSoPhuc temp;
	temp.thuc=thuc*phanso;
	temp.ao=ao*phanso;
	return temp;
}
CSoPhuc CSoPhuc::operator/=(int phanso)
{
	CSoPhuc temp;
	temp.thuc=thuc/phanso;
	temp.ao=ao/phanso;
	return temp;
}
int main(){
    CSoPhuc a,b,kq;
    a.Nhap();
    b.Nhap();
    kq=a+b;
    cout<<"a+b: ";
    kq.Xuat();
    kq=a-b;
    cout<<"a-b: ";
    kq.Xuat();
    kq=a*b;
    cout<<"a*b: ";
    kq.Xuat();
    kq=a/b;
    cout<<"a/b: ";
    kq.Xuat();
    kq=(a+=8);
    cout<<"a+=8: ";
    kq.Xuat();
    kq=(a-=8);
    cout<<"a-=8: ";
    kq.Xuat();
    kq=(a*=8);
    cout<<"a*=8: ";
    kq.Xuat();
    kq=(a/=8);
    cout<<"a/=8: ";
    kq.Xuat();
}
