#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float vavedi(float a){
	cout<<"Vavedete x=";
	cin>>a;
	return a;}

float smetni(float x){
float V=0, n=1;
for(int i=0;i<20;i++){
	V=V+(pow(x,n)+(1.0/2.0)*n+1.0);
	n++;}
return V;}

int main(){
	float x;
	x=vavedi(x);
	cout<<"V="<<smetni(x)<<endl;
	return 0;
}
