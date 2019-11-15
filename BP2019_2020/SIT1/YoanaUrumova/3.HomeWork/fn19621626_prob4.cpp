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
void smetni(float y){
if(y==0) cout<<"Ne moje da se deli na 0."<<endl;
else {
float x=20/y;
cout<<"x="<<x<<endl;}
}
 
int main(){
float y;
for(int i=0;i<10;i++){
y=vavedi(y);
smetni(y);
}
system ("pause");
return 0;	
}
