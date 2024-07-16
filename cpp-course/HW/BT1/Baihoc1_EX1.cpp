#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hoten;
    float toan;
    float van;
    float dtb; 
    cout << "Ho ten:" ;
    getline(cin, hoten);
    cout << "Nhap toan:";
    cin>>toan;
    cout<<"Nhap van:";
    cin>>van;
    while(toan<0 || toan>10 || van<0 || van>10 )
    {
        cout<<" Nhap sai -  Nhap lai"<<endl;
        cout<<" Nhap toan: "<<endl;
        cin>>toan;
        cout<<" Nhap van: "<<endl;
        cin>>van;
    }

    dtb= float (toan+van)/2;
    cout<< "Ho va ten: " << hoten << endl;
    cout<< "toan: " << toan << endl;
    cout<< "van: " << van << endl;
    cout<< "diem trung binh: " << dtb << endl;
    return 0;
}
