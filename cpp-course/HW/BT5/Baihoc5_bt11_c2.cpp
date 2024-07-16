#include<iostream>
using namespace std;
class CDiem{
	private:
		float x;
		float y;
	public:
        CDiem();
		void Nhapdiem();
		void Xuatdiem();	
        CDiem(float, float);
};
CDiem::CDiem(){
    x=0;
    y=0;
}
CDiem::CDiem(float a, float b) {
    x = a;
    y = b;
}
void CDiem::Nhapdiem(){
	cout<<"\n Hoanh do: ";
	cin>>x;
	cout<<" Tung do: ";
	cin>>y;
}
void CDiem::Xuatdiem(){
	cout<<"("<<x<<";"<<y<<")";
}
class CTamGiac{
	private:
		CDiem A;
		CDiem B;
		CDiem C;
	public:
		CTamGiac();
		CTamGiac(CDiem , CDiem , CDiem );
		CTamGiac(const CTamGiac &tg);
		~CTamGiac();
		void Xuattg();
};		

CTamGiac::CTamGiac(){
	cout<<"\nToa do diem A:";
	A.Nhapdiem();
	cout<<"Toa do diem B:";
	B.Nhapdiem();
	cout<<"Toa do diem C:";
	C.Nhapdiem();
}
CTamGiac::CTamGiac(CDiem P, CDiem R, CDiem S) {
    
    A = P;
    B = R;
    C = S;
}

CTamGiac::CTamGiac(const CTamGiac& Tg) {
    A = Tg.A; // A = F;
    B = Tg.B;
    C = Tg.C;
}
CTamGiac::~CTamGiac(){
	return;
}
void CTamGiac::Xuattg(){
	cout<<"A";
	A.Xuatdiem();
	cout<<"  B";
	B.Xuatdiem();
	cout<<"  C";
	C.Xuatdiem();
}
int main(){
	//CDiem D,E,F;
	//cout<<"Nhap toa do ba dinh tam giac ABC: ";
	//CTamGiac tg1;
    CDiem D(-3, 6);
    CDiem E(-2, 6);
    CDiem F(-1, 6);

	CTamGiac tg2(D,E,F);
	CTamGiac tg3(tg2);

	cout<<"\nTam giac thu nhat co toa do ba dinh la: ";
	//tg1.Xuattg();
	cout<<"\nTam giac thu hai co toa do ba dinh la: ";
	tg2.Xuattg();
	cout<<"\nTam giac thu ba co toa do ba dinh la: ";
	tg3.Xuattg();
	return 0;
}
