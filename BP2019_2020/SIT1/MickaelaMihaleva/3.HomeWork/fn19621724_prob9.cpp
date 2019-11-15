#include <iostream>
using namespace std;
int vuzrast(int a){
if (a<1) cout<<"Ti si Baby!!!"<<endl;
else if (a>=1 && a<3) cout<<"Ti si Toddler!!!"<<endl;
else if (a>=3 && a<5) cout<<"Ti si Preschool!!!"<<endl;
else if (a>=5 && a<12) cout<<"Ti si Toddler!!!"<<endl;
else if (a>=13 && a<18) cout<<"Ti si Gradeschooler!!!"<<endl;
else if (a>=18 && a<21) cout<<"Ti si Gradeschooler!!!"<<endl;
else cout<<"Vuvedohte nekorektna stoinost!!!"<<endl;
return 0;}
int main(){
	cout<<"-- V koq vuzrastova grypa si --"<<endl;
	cout<<"Napishi godinite si ";
int a;
cin>>a;
cout<<"Proverka ^-^"<<endl;
vuzrast(a);
system("pause");}
	