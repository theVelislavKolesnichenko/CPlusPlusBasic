#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int vavedi(int a){
	cout<<"Vavedete chislo ";
	cin>>a;
	return a;}
void proveri(int a){
	if(a<1000) cout<<"less four-digit"<<endl;
	if(a>999&&a<10000) cout<<"four-digit"<<endl;
	if(a>9999) cout<<"more four-digit"<<endl;
}

int main(){
	int a;
	a=vavedi(a);
do{	proveri(a);
	a=vavedi(a);}
while(a!=0);
	return 0;
}
