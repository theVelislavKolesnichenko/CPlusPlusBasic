#include <iostream>
#include <math.h>
using namespace std;
void chisla(int a){
	for(int i=1; i<=a; i++) cout<<i<<" ";
}
int main(){
	int a;
	cout<<"Vavedete cqlo chislo "; 
	cin>>a;
	chisla(a);
	cout<<endl;
	return 0;
}
