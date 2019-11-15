#include <iostream>
#include <math.h>
using namespace std;
float smetni(float a, float c){
	float y;
	y=sqrt(a+2)-(2/c);
	return y;
}
int main(){
	float a,c;
	cout<<"Vavedete a="; cin>>a;
	cout<<"Vavedete c="; cin>>c;	
	if(a<-2||c==0) cout<<"Invalid Input."<<endl;
	else cout<<smetni(a,c)<<endl;
	return 0;
}
