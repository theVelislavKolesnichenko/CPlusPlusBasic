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
void sravni(float a, float b){
if(a>b) cout<<"Po golqmoto e "<<a<<"."<<endl;
else if(a<b) cout<<"Po golqmoto e "<<b<<"."<<endl;
else cout<<"Chislata sa ravni."<<endl;
}
 
int main(){
float a, b;
for(int i=0;i<5;i++){
a=vavedi(a);
b=vavedi(b);
sravni(a,b);
}
system ("pause");
return 0;	
}
