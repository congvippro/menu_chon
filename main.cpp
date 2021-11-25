#include <iostream>
using namespace std;
int main()
{
    int ngay, thang, nam, a, b, c;
    a=0;b=0;c=0;
    cin >> ngay >>thang >> nam;
    if(nam <= 0) cout << "nam khong hop le\n";
        else a=1;
    if(thang<=0 || thang>12) cout << "thang khong hop le\n";
        else b=1;
    if((nam%4 == 0 && nam%100 != 0) || nam%400 == 0)
        {
            if(thang==2 && (ngay >29 || ngay <= 0)) cout << "ngay khong hop le\n";
            else c=1;
        }
    else{
            if(thang==2 && (ngay >28 || ngay <= 0)) cout << "ngay khong hop le\n";
            else if(thang==2 && (ngay <28 || ngay >= 0)) c=1;
        }
    if(thang==1)  {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==3)  {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==4)  {if(ngay>30 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==5)  {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==6)  {if(ngay>30 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==7)  {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==8)  {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==9)  {if(ngay>30 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==10) {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==11) {if(ngay>30 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(thang==12) {if(ngay>31 || ngay < 1) cout << "ngay khong hop le\n"; else c=1;}
    if(a==1 && b==1 && c==1) cout <<ngay<<"/"<<thang<< "/"<<nam<<" la ngay hop le\n";
    return 0;
}
