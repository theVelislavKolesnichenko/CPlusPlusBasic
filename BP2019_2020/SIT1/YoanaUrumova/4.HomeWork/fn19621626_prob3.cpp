#include <iostream>
#include <math.h>
using namespace std;

int NOD(int a, int b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int NOK(int a, int b){
 return (a*b)/NOD(a,b);
}
int main(){
	int a, b;
	cout<<"Vavedete a="; cin>>a;
	cout<<"Vavedete b="; cin>>b;
	cout<<"Nai-golemiq im obsht delitel e "<<NOD(a,b)<<endl;
	cout<<"Nai-malkoto im obshto kratno e "<<NOK(a,b)<<endl;
	return 0;
}
