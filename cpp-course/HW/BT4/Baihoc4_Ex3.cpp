class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		friend istream& operator>>(istream &, CPhanSo &);
		friend ostream& operator>>(ostream &, CPhanSo &);
};
istream& operator>>(istream &is, CPhanSo &x);
{
	cout<<"Nhap tu: ";
	is>>x.tu;
	cout<<"Nhap mau: ";
	is>>x.mau;
	return is;
}
ostream& operator>>(ostream &os, CPhanSo &x);
{
	os<<"\n Tu: "<<x.tu;
	os<<"\n Mau: "<<x.mau;
	return os;
}
