#include<iostream>
using namespace std;
class CSoPhuc
{
	private:
		float a;
		float b;
	public:
		CSoPhuc();
		CSoPhuc(int,int);
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
	os<<"y="<<x.a<<"x+"<<x.b<<"";
	return os;
}
int main()
{
	CSoPhuc sophuc;
	CSoPhuc sophuc1(31,5);
	cout<<sophuc<<endl;
	cout<<sophuc1<<endl;
	return 0;
}
