#include <iostream>
#include <math.h>
using namespace std;
float smetni(float a, float c);
int main(){
	float a=1,proizvedenie=1;
while(a!=0) {
	cout<<"Vavedete chislo ";
	cin>>a;
	if (a<0) cout<<"Chisloto trqbva da e poloshitelno."<<endl;
	else if (a>0) proizvedenie=smetni(a,proizvedenie);
}
cout<<"Obshtoto proizvedenie e "<<proizvedenie;
	return 0;
}
float smetni(float a, float c){
	c=c*a;
	return c;
}
