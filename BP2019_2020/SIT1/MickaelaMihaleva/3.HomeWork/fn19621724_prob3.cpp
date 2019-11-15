#include<iostream>
using namespace std;
double equal(double a, double b){
	if (a>b)
		cout<<"Cisloto "<<a<<" e po-golqmo ot cisloto "<<b<<endl;
	else if(a<b)
		
		cout<<"Cisloto "<<b<<" e po-golqmo ot chisloto "<<a<<endl;
	else cout<<"Cisloto "<<a<<" e ravno na cisloto  "<<b<<endl;
return 0;
}
int main(){
	double a,b;
	cout<<"---Proveri koe ot dvete chisla e po-golqmoto---"<<endl;
  cout<< "Purvo chisloto = ";
cin>>a;
  cout<< "Vtoro chisloto = ";
cin>>b;
cout<<"Proverka :)"<<endl;
equal(a,b);
system("pause");}