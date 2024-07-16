#include<iostream>
using namespace std;

bool laNamNhuan (int nYear);
int tinhSoNgayTrongThang(int nMonth, int nYear);
bool laNgayHopLe(int nDay, int nMonth, int nYear);
void timNgayHomTruoc(int& nDay, int& nMonth, int& nYear);

int main()
{
	int nDay, nMonth, nYear;
	cout<<"Day: ";
	cin>>nDay;
	cout<<"Month: ";
	cin>>nMonth;
	cout<<"Year: ";
	cin>>nYear;
	
	timNgayHomTruoc(nDay, nMonth, nYear);
	cout<<"Yesterday: " << nDay << " / " << nMonth << " / " << nYear << endl;
	
	return 0;
}
bool laNamNhuan (int nYear)
{
	if ((nYear %4 == 0 && nYear %100 != 0)|| nYear %400 == 0)
	{
		return true;
	}
	return false;
}
int tinhSoNgayTrongThang(int nMonth, int nYear)
{
    int nNumOfDays;
    switch(nMonth)
    {
        case 1:case 3:case 5: case 7:case 8:case 10:case 12:
            nNumOfDays = 31;
            break;
        case 4:case 6:case 9:case 11:
            nNumOfDays = 30;
            break;
        case 2:
            if(laNamNhuan(nYear))
            {
                nNumOfDays = 29;
            }
            else
            {
                nNumOfDays = 28;
            }  
    }
    return nNumOfDays;
};
bool laNgayHopLe(int nDay, int nMonth, int nYear)
{
    if (nYear <0)
    {
        return false;
    }
    if (nMonth < 1 || nMonth > 12)
    {
        return false;
    }
    if (nDay < 1 || nDay > tinhSoNgayTrongThang(nMonth, nYear))
    {
        return false;
    }
    return true;
}
void timNgayHomTruoc(int& nDay, int& nMonth, int& nYear)
{
    nDay --;
    if (nDay ==0)
    {
        nMonth--;
        if (nMonth ==0)
        {
            nMonth = 12;
            nYear--;
        }
        nDay = tinhSoNgayTrongThang (nMonth, nYear);
    }
}
