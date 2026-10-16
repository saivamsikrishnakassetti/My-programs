#include<iostream>
using namespace std;
int main()
{
	int n=9;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x=min(min(i,j),min(n-1-i,n-1-j));
			cout << 5-x << " ";
		}
		cout << endl;
	}
}
