#include <iostream>
#include <math.h>
using namespace std;

void koreni(float a, float b, float c){
	float Diskriminanta;
	float x1, x2;
	if(a==0){
		if(b==0){
			if(c==0) cout<<"Vsqko x e reshenie."<<endl;
			else cout<<"Uravnenieto nqma koreni."<<endl;
		}
		else cout<<"Uravnenieto ima edin koren x="<<(-c/b)<<endl;
	}
	else{
	Diskriminanta=pow(b,2)-4*a*c;
	if (Diskriminanta<0){
		cout<<"Korena x1="<<-b/(2*a)<<"+i*"<<(sqrt(Diskriminanta*(-1)))/(2*a)<<endl;
		cout<<"Korena x2="<<-b/(2*a)<<"-i*"<<(sqrt(Diskriminanta*(-1)))/(2*a)<<endl;}
	else if (Diskriminanta==0){cout<<"Uravnenieto ima dvoen koren x="<<((-b)/(2*a))<<endl;}
	else {cout<<"Korena x1="<<((-b+sqrt(Diskriminanta))/(2*a))<<endl;
		cout<<"Korena x2="<<((-b-sqrt(Diskriminanta))/(2*a))<<endl;}	
}}
int main(){
	float a, b, c;
	for(int i=0; i<10;i++){
	cout<<"Vavedete a="; cin>>a;
	cout<<"Vavedete b="; cin>>b;
	cout<<"Vavedete c="; cin>>c;
	koreni(a,b,c);
	cout<<endl;
	}
	return 0;
}
