#include <iostream> 
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;
char vavedi(char a){
cout<<"Vavedete bukva ";
cin>>a;
return a;
}
void izvedi(char a){
if(a>='a'&&a<='z') cout<<a-96<<endl;
else if(a>='A'&&a<='Z') cout<<a-64<<endl;
}
 
int main(){
char a;
for(int i=0;i<10;i++){
a=vavedi(a);
izvedi(a);
}

system ("pause");
return 0;	
}
