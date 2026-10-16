#include<iostream>
using namespace std;
int main()
{
	char code;
	cin >> code;
	switch(code)
	{
		case 'B': 
		cout << "Blue";
		break;
		case 'R': 
		cout << "Red";
		break;
		case 'G': 
		cout << "Green";
		break;
		default:
			cout << "Invalid";
	}
	return 0;
}
