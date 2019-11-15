#include <iostream>
#include <math.h>
using namespace std;
void Fun(float *n, float a, float b);
int main(){
float a;
float b;
float mul;
cout<<"Vevedete parvoto chislo ";
cin>>a;
do{ cout<<"Vavedete vtoro chislo ";
cin>>b;
}while(a>=b);
mul=1;
cout<<"Before mul="<<mul<<endl;
Fun(&mul-1,a,b);                        
cout<<"After mul="<<mul<<endl;
system("pause");
return 0;
}
void Fun(float *n, float a, float b){
	*(n+1)=a*b;
}
