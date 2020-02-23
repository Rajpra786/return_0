#include<iostream>
using namespace std;

int maxi(int a,int b)
{
	if(a>b) return a;
	else return b;
}

char maxi(char a,char b)
{
	if(a>b) return a;
	else return b;
}

float maxi(float a,float b)
{
	if(a>b) return a;
	else return b;
}


int main()
{
	int x=4,y=6;
	cout<<max(x,y)<<endl;
	float p=5.6,q=6.9;
	cout<<max(p,q)<<endl;
	char l='a',m='c';
	cout<<max(l,m)<<endl;	
	return 0;
}
