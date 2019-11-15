#include <iostream>
#include <math.h>
using namespace std;
bool Check(int a);
int main(){
	cout<<1<<" "<<2<<" ";
	for(int a=3; a<=20;a++){
		if(Check(a)==1) cout<<a<<" ";
		}
system("pause");
return 0;
}
bool Check(int a){
	bool prime=1;
	for(int i=2;i<a;i++){
		if(a%i==0) {prime=0; break;}
	}
	return prime;
}
