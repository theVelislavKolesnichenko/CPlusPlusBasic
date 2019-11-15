#include <iostream> 
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;
float vavedi(float a){
    cout<<"Vavedete chislo ";
	cin>>a;
	return a;
}

float smetni(float n,float sum){
 sum=sum+n/4;
 return sum;
}
int main(){
float m;
float sr=0;
for(int i=0;i<4;i++){
	m=vavedi(m);
	sr=smetni(m,sr);
}
cout<<"Srednoto aritmetichno e ravno na "<<sr<<endl;


system ("pause");
return 0;	
}
