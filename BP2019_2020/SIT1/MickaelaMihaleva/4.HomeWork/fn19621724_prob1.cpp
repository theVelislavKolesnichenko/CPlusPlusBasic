#include <iostream>
using namespace std;
double opr();

	int main(){
		cout<<"Izraza e raven na "<<opr()<<endl;
		system("pause"); 
	}
	double opr()
	{double a,c;
do{cout<<"Reshavane na izraza y=sqrt(a+2)-2/c"<<endl;
cout<<"Vuvedi chislo za a= ";
cin>>a;
cout<<"Vuvedi chislo za c= ";
cin>>c;
if(a<0||c==0){
cout<<"Nekorektni stoinosti!!"<<endl;}
}
	while ((a<0) || (c==0));
	return sqrt(a+2)-2/c;
	}