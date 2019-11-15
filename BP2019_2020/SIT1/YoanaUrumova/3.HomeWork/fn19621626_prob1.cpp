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
int main(){
int a, b;
a=vavedi(a);
b=vavedi(b);
printf("~a=%d  ~b=%d \n",~a,~b);
printf("a&b=%d \n",a&b);
printf("a|b=%d \n",a|b);
printf("a^b=%d \n",a^b);
printf("a<<5=%d  b<<5=%d \n",a<<5,b<<5);
printf("a>>4=%d  b>>4=%d \n",a>>4,b>>4);

system ("pause");
return 0;	
}
