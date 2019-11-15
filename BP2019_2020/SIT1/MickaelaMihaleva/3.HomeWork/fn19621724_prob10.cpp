#include <iostream>
using namespace std;
int chetnost(int a){
if (a%2==0) cout<<"Tova chislo e chetno!!!"<<endl;
else  cout<<"Tova chislo e nechetno!!!"<<endl;
return 0;}
int main(){
	cout<<"-- Proverka za chetnost na chislo --"<<endl;
	cout<<"Napishi chislo ";
int a;
cin>>a;
cout<<"Proverka ^-^"<<endl;
chetnost(a);
system("pause");}