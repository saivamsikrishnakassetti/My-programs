#include<iostream>
using namespace std;
int x=100;  // Global variable
int main()
{
	int x=50;  // Local variable
	cout<<x<<endl;   
	cout<<::x<<endl;
	return 0;
}
