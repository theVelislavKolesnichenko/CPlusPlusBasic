#include <iostream>
using namespace std;
int main()
{
	int A,B;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	const double C=A/B;
	cout<<showpoint<<"C="<<C<<endl;//a) podtochka
	const double D=(float)A/B;
	cout<<showpoint<<"D="<<D<<endl;//b) podtochka
	return 0;
}
//В а) отговора не е точен защото въведихме числото с int и то трябва да е цяло.
//В b) отговора е точен защото конвентираме числото А във float и това му позволява да покаже точния резултат.