#include <iostream>
 
using namespace std;

int main()
{
	int tri, ch1, ch2, ch3;
	cout<<"Vuvedi chisloto:";
	cin>>tri;
	ch1=tri/100;
	ch2=(tri/10)%10;
	ch3=tri%10;
	cout<<"HUNDREDS:"<<ch1<<endl;
	cout<<"TENS:"<<ch2<<endl;
	cout<<"UNITS:"<<ch3<<endl;
	
	return 0;

}