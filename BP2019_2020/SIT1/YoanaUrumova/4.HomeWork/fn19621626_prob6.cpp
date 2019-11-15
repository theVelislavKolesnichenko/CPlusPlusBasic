#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int vavedi(int a){
	cout<<"Vavedete chislo ";
	cin>>a;
	return a;}
void figura1(int a){
while(a>0){
	int i=0;
	while(i<a){
		cout<<"%";
		i++;}		
	a--;
	cout<<endl;}cout<<endl;}
	
void figura2(int a){
for(int i=1;i<=a;i++){
	for(int j=0;j<i;j++){
		cout<<"%";}
	cout<<endl;}
	
for(int k=a-1;k>0;k--){
	for(int h=0;h<k;h++){
		cout<<"%";}
	cout<<endl;}
cout<<endl;}

void figura3(int a){
int i,p=1;
do{ i=0;
	cout<<setw(p);
	do{cout<<"%";
		i++;}
	while(i<a);
	a=a-2;
	p++;
	cout<<endl;}	
while(a>0);}

int main(){
	int a,b,c;
	a=vavedi(a);
	b=vavedi(b);
	c=vavedi(c);
//razmerite mogat da se vavejdat, a 
//za da se poluchat figurkite v uslovieto s 
//tochno sashtite razmeri i mashtab, 
//moje da se izpolzva dolniq red
//a=5; b=3; c=10;
	figura1(a);
	figura2(b);
	figura3(c);
	return 0;
}
