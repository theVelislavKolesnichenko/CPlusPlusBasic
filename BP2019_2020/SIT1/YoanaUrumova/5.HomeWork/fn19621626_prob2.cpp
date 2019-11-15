#include <iostream>
#include <math.h>
using namespace std;
int broi(long long int a);
int main(){
	long long int a;
	do{
	cout<<"Vavedete chislo ";
	cin>>a;
	}
	while(a-3>=2147483645||a+3<=-2147483646);
	cout<<"Broq cifri e "<<broi(a)<<endl;

system("pause");
return 0;
}
int broi(long  long int a){
	int broy=0;
	while(a!=0){
		a=a/10;
		broy++;
	}
	return broy;
}
