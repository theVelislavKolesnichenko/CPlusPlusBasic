#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
float vavedi(float a){
	cout<<"Vavedete chislo ";
	cin>>a;
	return a;}
void broi(float m[10]){
	int polojitelni=0, otricatelni=0;
	for(int i=0;i<10;i++){
	if(m[i]>0) polojitelni++;
	if(m[i]<0) otricatelni++;}
	cout<<"Ima "<<polojitelni<<" polojitelni chisla i "<<otricatelni<<" otricatelni chisla."<<endl;
}

int main(){
	float m[10];
	for(int i=0;i<10;i++){ m[i]=vavedi(m[i]); }
	broi(m);
	return 0;
}
