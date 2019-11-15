#include <iostream>
#include <math.h>
using namespace std;
float Sum(float a, float b, float c);
int main(){
	float a=1,b=1,c=1;
	while(a!=0&&b!=0||a!=0&&c!=0||b!=0&&c!=0){
	cout<<"Vavedete tri chisla ";
	cin>>a>>b>>c;	
	cout<<"Sumata e ravna na "<<Sum(a,b,c)<<endl;
	}
system("pause");
return 0;
}
float Sum(float a, float b, float c){
	return a+b+c;
}
