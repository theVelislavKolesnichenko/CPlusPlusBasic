#include<iostream>
using namespace std;
double pos_neg(double a){
	if (a>=0)
	cout<<"Cisloto "<<a<<" e polojitelno!!!"<<endl;
	else  
		cout<<"Cisloto "<<a<<" e otritsatelno!!!"<<endl;
	return 0;}
int main (){
	double a;
	cout<<"---Proveri dali chisloto e polojitelno ili otritsatelno---"<<endl;
  cout<< "Napishi chislo = ";
	cin>>a;
	cout<<"Proverka ^-^"<<endl;
	pos_neg(a);
	system("pause");}

