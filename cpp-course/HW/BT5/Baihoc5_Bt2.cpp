#include<iostream>
using namespace std;
class CDiem
{
	private:
		float x;
		float y;
	public:
		CDiem();
		CDiem(int, int);
		CDiem(const CDiem&);
		~CDiem();
		friend ostream& operator<<(ostream& ,CDiem &);
};
CDiem::CDiem()
{
	x=8;
	y=4;
}
CDiem::CDiem(int X, int Y)
{
	x=X;
	y=Y;
}
CDiem::CDiem(const CDiem &a)
{
	y=a.y;
	x=a.x;
}
ostream& operator<<(ostream &os, CDiem &a)
{
	os<<"("<<a.x<<","<<a.y<<")";
	return os;
}
CDiem::~CDiem()
{
	return;
}
int main()
{
	CDiem A;
	CDiem B(31,5);
	cout<<A<<endl;
	cout<<B<<endl;
	return 0;
}
