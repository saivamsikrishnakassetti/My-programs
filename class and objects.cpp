#include<iostream>
using namespace std;
class book
{
	public:
		int sno;
		string bookname;
		string bookauthor;
	void issuebook()
	{
		cout<<"book is issued successfully"<<endl;
	}
	void returnbook()
	{
		cout<<"book was successfully returned";
	}
};
int main()
{
	book b1,b2;
	b1.sno=101;
	b1.bookname="c++";
	b1.bookauthor="Bjarne Stroustrup";
	b1.issuebook();
	b2.sno=104;
	b2.bookname="c programming";
	b2.bookauthor="Dennis Ritche";
	b2.returnbook();
	return 0;
}
