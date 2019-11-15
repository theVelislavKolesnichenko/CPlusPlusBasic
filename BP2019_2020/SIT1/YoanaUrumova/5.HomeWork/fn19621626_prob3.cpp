#include <iostream>
#include <math.h>
using namespace std;
float formula(float x);
int main(){
	float x,y;
	do{
	cout<<"Vavedete chislo ";
	cin>>x;
	}
	while(x>100||x<-100);
	y=formula(x);
	if(y==0)cout<<"Ne moje da se deli na 0."<<endl;
	else cout<<"y= "<<y<<endl;

system("pause");
return 0;
}
float formula(float x){
	float y=0;
	if(x<0) y=sqrt(pow(x,2)+1);
	else if(x>=0&&x!=20) y=(x+10)/(x-20);
	return y;
}
