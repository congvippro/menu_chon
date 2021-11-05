#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char** argv) {
	int a,b,c,m;
	m=0;
	cout<<"nhap chuong trinh \n";
	cout<<"1. chuyen thap phan sang nhi phan \n";
	cout<<"2. chuyen nhi phan sang thap phan \n";
	cin>>a;
	int e[10];
	if (a==1)
	    {
	    	cout<<"nhap so ";
	    	cin>>b;
	    	for (int i;b>0;i=i+1)
	    	    {
	    	    	c=b%2;
	    	    	b=b/2;
	    	    	e[i]=c;
	    	    	m++;
				}
			for (int i=m;i>0;i--)
				{
					cout<<e[i];
				}
		}
	return 0;
}
