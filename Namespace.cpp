#include<iostream>
using namespace std;
namespace CSE
{
	void show()
	{
		cout<<"CSE students";
	}
}
namespace ECE
{
	void show()
	{
		cout<<"ECE students\n";
	}
}
int main()
{
	ECE::show();
	CSE::show();
	return 0;
}
