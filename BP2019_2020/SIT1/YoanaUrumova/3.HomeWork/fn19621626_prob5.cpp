#include <iostream> 
#include <math.h>
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
float smetni1(float y){
float x;
x=pow(y,3)+(pow(y,4)+2*y);
return x;
}
float smetni2(float y){
float x;
x=(2*(2*y+5))/(14-y/3);
return x;
}
int main(){
float y,x;
for(int i=0;i<10;i++){
y=vavedi(y);
if(y<1) {x=smetni1(y);
cout<<"x="<<x<<endl;}
else if(y>1) {x=smetni2(y);
cout<<"x="<<x<<endl;}
}
system ("pause");
return 0;	
}
