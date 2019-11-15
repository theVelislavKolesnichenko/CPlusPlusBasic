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
void proveri(float a){
if(a>0) cout<<"Positive"<<endl;
else if(a<0) cout<<"Negative"<<endl;
}
 
int main(){
float a;
for(int i=0;i<10;i++){
a=vavedi(a);
proveri(a);
}
system ("pause");
return 0;	
}
