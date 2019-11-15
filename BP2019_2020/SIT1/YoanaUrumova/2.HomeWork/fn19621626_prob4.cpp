#include <iostream> 
#include <string>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
using namespace std;
int ed(int a){
	int ed;
	ed=a%10;
	return ed;
}
int des(int a){
	int des;
	des=a/10%10;
	return des;
}
int st(int a){
	int st;
	st=a/100%10;
	return st;
}

int main(){

int a;
cout<<"Vavedete tricifreno chislo ";
cin>>a;
cout<<"EDINICITE sa ravni na "<<ed(a)<<endl;
cout<<"STOTICITE sa ravni na "<<st(a)<<endl;
cout<<"DESETICITE sa ravni na "<<des(a)<<endl;

system ("pause");
return 0;	
}
