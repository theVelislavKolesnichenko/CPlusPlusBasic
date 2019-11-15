#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int vavedi(int a){
	cout<<"Vavedete godina ";
	cin>>a;
	return a;}
void proveri(int a){
	if(a%400==0) cout<<"Godinata "<<a<<" e visokosna."<<endl;
	else if(a%4==0&&a%100!=0) cout<<"Godinata "<<a<<" e visokosna."<<endl;
	else cout<<"Godinata "<<a<<" NE E visokosna."<<endl;
}

int main(){
	int a;
	a=vavedi(a);
do{	proveri(a);
	a=vavedi(a);}
while(a>=0);
	return 0;
}
