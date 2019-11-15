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
float izchisli(float a, float b){ 
  float x=0;
  x=2*((a-b)/(b-a));
  //Ili x=-2;
 return  x;
}

int main(){     
float a, b;
	a=vavedi(a); 
	b=vavedi(b);
    if(a==b)  cout<<"Izchislenieto e neopredeleno"<<endl;
    else	cout<<"x="<<izchisli(a, b)<<endl;

system ("pause");
return 0;	
}
