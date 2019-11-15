#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int A;
	int B;
	float C;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	C=A/B;
	cout <<"C="<<C<<endl;
	float D;
	D=(float)A/B;
	cout<<"D="<<D<<endl;
	system("pause");
	return 0;
}