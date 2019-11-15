#include <iostream>
#include <math.h>
using namespace std;
void Fun(float *n, float a, float b);
int main(){
float a;
float b;
float sum;
cout<<"Vevedete parvoto chislo ";
cin>>a;
do{ cout<<"Vavedete vtoro chislo ";
cin>>b;
}while(a>=b);
sum=1;
cout<<"Before sum="<<sum<<endl;
Fun(&sum-1,a,b);                        
cout<<"After sum="<<sum<<endl;
system("pause");
return 0;
}
void Fun(float *n, float a, float b){
	*(n+1)=a+b;
}
