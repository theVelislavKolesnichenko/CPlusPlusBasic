#include <iostream>
using namespace std;
int main(){
	int A,B;
	double C,D;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	C=(double)A/B;
	cout<<"C="<<C<<endl;
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	D=float(A)/B;
	cout<<"D="<<D<<endl;
	system("pause");
	return 0;}
//В а подточка само C e с плаваща запетая. А и B са целочислени променливи.
//В б подточка след като самият израс се изпълни A се променя от int в float. Float e по малко байтове от double.