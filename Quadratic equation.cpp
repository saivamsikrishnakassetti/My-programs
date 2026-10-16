#include<iostream>
#include <cmath>
using namespace std;

int main()
{
	float a,b,c;
	cout<<"Enter a,b and c cofficients:"<<endl;
	cin>>a>>b>>c;
	float d=b*b-4*a*c;
	float root1,root2;
	if(a==0)
	{
		cout<<"This is not a quadratic equation"<<endl;
	}
	else if(d>0)
	{
		root1=root2=-b/(2*a);
		cout<<"Rots are real and equal"<<endl;
		cout<<"Root1="<<root1;
	}
	else
	{
		float real=-b/(2*a);
		float imaginary=sqrt(-d)/(2*a);
		cout<<"real="<<real<<"+"<<imaginary<<"i"<<endl;
		cout<<"real="<<real<<"-"<<imaginary<<"i";
	}
	return 0;
}
