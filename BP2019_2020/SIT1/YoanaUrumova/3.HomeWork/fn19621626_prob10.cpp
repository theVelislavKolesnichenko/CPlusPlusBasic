#include <iostream> 
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;
int vavedi(int a){
cout<<"Vavedete chislo ";
cin>>a;
return a;
}
void proveri(int a){
int n=a%2;
if(n==0) cout<<"Even."<<endl;
else cout<<"Odd."<<endl;
}
 
int main(){
int a;
for(int i=0;i<10;i++){
a=vavedi(a);
proveri(a);
}

system ("pause");
return 0;	
}
