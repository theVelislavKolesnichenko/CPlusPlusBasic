#include <iostream>
#include <math.h>
using namespace std;
struct rezultat{
	float real;
	float imaginary;
};
rezultat formula(float x);
int main(){
	float x;
	rezultat y;
	do{
	cout<<"Vavedete chislo ";
	cin>>x;
	}
	while(x>100||x<-100);
	y=formula(x);
	cout<<" y = ";
	if (y.imaginary!=0) cout<<y.real<<" + i*"<<y.imaginary<<endl;
	else cout<<y.real<<endl;
system("pause");
return 0;
}
rezultat formula(float x){
	rezultat y; y.real=0; y.imaginary=0;
	if(x<=0) y.real=pow(x,3)/4+1;
	else if(x>=4) y.real=sqrt(x-4);
	else {	y.imaginary=sqrt(4-x); }
	return y;
}
