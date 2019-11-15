#include <iostream>
#include <math.h>
using namespace std;
float SrednoAritmetichno();
int main(){
	cout<<"Srednoto aritmetichno e "<<SrednoAritmetichno()<<endl;
system("pause");
return 0;
}
float SrednoAritmetichno(){
	float a, suma=0;
	for(int i=0; i<10; i++){
		cout<<"Vavedete chislo ";
		cin>>a;
		suma=suma+a;}
	return suma/10;
}
