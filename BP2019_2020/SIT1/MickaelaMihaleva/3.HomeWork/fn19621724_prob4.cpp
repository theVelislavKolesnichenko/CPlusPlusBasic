#include<iostream>
using namespace std;
double izraz(double y){
return 20/y;}
int main(){
	double y;
	cout<<"---Istsislqvane na izraza x=20/y---"<<endl;
	cout<<"Vuvedi stoinost na y = ";
cin>>y;
cout<<"Istsislqvane *-*"<<endl;

if (y!=0)
cout<<"Izraza e raven na = "<<izraz(y)<<endl;
else cout<<"Vuvedohte nekorektna stoinost!!! Ne se deli na 0!!!"<<endl;
system("pause"); }