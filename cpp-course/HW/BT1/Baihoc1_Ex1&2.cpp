#include<iostream>
#include<string>
using namespace std;

string hoten;
int toan;
int van;
float dtb;
int main()
{
    cout<<"nhap ho ten:";
    getline(cin,hoten);
    cout<<"nhap toan:";
    cin>>toan;
    cout<<"nhap van:";
    cin>>van;
    dtb=(float) (toan+van)/2;
    cout<<"\n hoten:"<<hoten;
    cout<<"\n toan:"<<toan;
    cout<<"\n van:"<<van;
    cout<<"\n Trung binh:"<<dtb;
    return 1;
}

