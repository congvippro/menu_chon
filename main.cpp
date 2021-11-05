#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main(int argc, char** argv) {
	int a,b,c,d,n;
	int m=0;
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
	if (a==2)
		{
			
			cout<<"nhap so ";
			cin>>b;
			for (int i=0;b/pow(10,i)>0.1;i++)
				{
					m=i+1;
				}
			for (;m>0;m--)
				{
					n=pow(10,m);
					c = b/n;
					b = b % n ;
					if (c==1) 
					{
						d=d+pow(2,m);
					}
					else if(c!=0) {cout<<"nhap sai";return 0;}
				}
		cout<<d+1;
		}
	return 0;
}
