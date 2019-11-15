#include <iostream>
#include <math.h>
using namespace std;
void Fun(float *q);
int main(){
float a=0;
float *q=&a;
cout<<"Before a="<<a<<endl;
Fun(q);
cout<<"After a="<<a<<endl;
system("pause");
return 0;
}
void Fun(float *q){
	float a;
	cout<<"Vavedete chislo ";
	cin>>a;
	*q=a;
}
