#include<iostream>
#include<string>
using namespace std;
int maxi(int a,int b)
{
	if(a>b) return a;
	else return b;
}

int main()
{
	int x=4,y=6;
	cout<<maxi(x,y)<<endl;

	float p=5.6,q=5.9;
	cout<<maxi(p,q)<<endl;
	
	char l='a',m='b';
	cout<<maxi(l,m)<<endl;
	return 0;
}
