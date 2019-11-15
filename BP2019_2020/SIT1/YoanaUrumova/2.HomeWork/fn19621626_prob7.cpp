#include <iostream> 
#include <math.h>
#include <bits/stdc++.h>
using namespace std;
float vavedi(float a){
    cout<<"Vavedete chislo ";
	cin>>a;
	return a;
}
float izchisli(float y){ 
  float x=0;
  x=2*(2*y+5)/(14-y/3);
 return  x;
}

int main(){     
float y;
	y=vavedi(y); 
	if(y==42)  cout<<"Izchislenieto e neopredeleno"<<endl;
    else	cout<<"x="<<izchisli(y)<<endl;
    

system ("pause");
return 0;	
}
