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
float smetni(float b, float c){
   
	cout<<"Vavedete operacia +, -, * ili / ";
	char op;
	cin>>op;
	cout<<b<<op<<c<<"=";
	switch(op)
	{
		
		case '+': { cout<<b+c<<endl;break;}	
		case '-': { cout<<b-c<<endl;break;}
		case '*': { cout<<b*c<<endl;break;}
		case '/': { cout<<b/c<<endl;break;}
		default: { cout<<"Nqma takava operaciq"<<endl;break;}				
	}

}
int main(){
	float d,c;
 for(int i=0;i<5;i++){
d=vavedi(d);
c=vavedi(c);
smetni(d,c);
}

system ("pause");
return 0;	
}
