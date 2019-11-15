#include <iostream>
using namespace std;
int ako(int a,int b);
int main()
{
	int a,b;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"izwejda po golqmoto cislo:"<<ako(a,b)<<endl;
	return 0;
}
int ako(int a,int b)
{
	 if(a>b)
	 {
		 return a;
	 }
	 else
	 {
		 return b;
	 }
}