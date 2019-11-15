#include<iostream>
using namespace std;
double izraz(double y){
if(y>=58 && y<=87)
	cout<<"Izraza x=y^3+(y^4+2y) e raven na = "<<pow(y,3)+(pow(y,4)+ 2*y)<<"!!!"<<endl;
else if (y>15 && y<58)
	cout<<"Izraza x=2(2y+5)/(14-y/3) e raven na = "<<2*(2*y+5)/(14-y/3)<<"!!!"<<endl;
else cout<<"Vuvedohte nekorektna stoinost!!!"<<endl;
return 0;}
int main(){
	double y;
	cout<<"--- Proveri koi ot dvata izraza ste se reshi :) ---"<<endl; 
		cout<<"----- x=y^3+(y^4+2y) ili x=2(2y+5)/(14-y/3) -----"<<endl;
  cout<< "Napishi chislo = ";
	cin>>y;
	cout<<"Rezultat ^-^ :"<<endl;
	izraz(y);
	system("pause");}