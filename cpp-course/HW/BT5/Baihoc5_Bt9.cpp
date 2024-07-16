#include<iostream>
using namespace std;
class CSoPhuc
{
	private:
		float a;
		float b;
	public:
		CSoPhuc();
		CSoPhuc(int, int);
		CSoPhuc(const CSoPhuc &);
		~CSoPhuc();
		friend ostream& operator<<(ostream &, CSoPhuc &);
};
CSoPhuc::CSoPhuc()
{
	a=8;
	b=4;
}
CSoPhuc::CSoPhuc(int A, int B)
{
	a=A;
	b=B;
}
CSoPhuc::CSoPhuc(const CSoPhuc &x)
{
	a=x.a;
	b=x.b;
}
CSoPhuc::~CSoPhuc()
{
	return;
}
ostream& operator<<(ostream &os, CSoPhuc &x)
{
	os<<x.a<<"+"<<x.b<<"i";
	return os;
}
int main()
{
	CSoPhuc sophuc;
	CSoPhuc sophuc2(31,5);
	cout<<sophuc<<endl<<sophuc2<<endl;
	return 0;
}
