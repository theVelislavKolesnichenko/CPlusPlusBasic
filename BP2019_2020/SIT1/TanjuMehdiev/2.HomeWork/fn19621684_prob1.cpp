#include <iostream>
using namespace std;
void print1()
{
	cout<<"Start?"<<endl;
}
void print2();
int main()
{
	print1();
	system("pause");
	print2();
	return 0;
}
void print2()
{
	cout<<"Final!"<<endl;
}