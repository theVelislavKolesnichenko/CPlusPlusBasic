#include <iostream> 
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
float vavedi(float a){
    cout<<"Vavedete chislo ";
	cin>>a;
	return a;
}
float izchisli(float a, float b){ 
  float x=0;
  x=pow((a+b),3)+(pow(a,2)+2*a*b-2*b*a+pow(b,2));
 return  x;
}

int main(){     
float a, b;
	a=vavedi(a); 
	b=vavedi(b);
    cout<<"x="<<izchisli(a, b)<<endl;

system ("pause");
return 0;	
}
