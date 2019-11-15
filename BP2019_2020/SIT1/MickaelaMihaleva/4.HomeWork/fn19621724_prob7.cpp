#include <iostream>
using namespace std;
int mas[10];
void fun();
int main(){
	
	cout<<"Vuvedi 10 chisla "<<endl;
	for(int i=0;i<=9;i++){
		cout<<"Vuvedi chislo ";
		cin>>mas[i];
	}
	fun();
	

system("pause");}
void fun(){
	int br1=0,br2=0;
	for(int i=0;i<=9;i++){
		if(mas[i]>=0){
			br1++;
		}
		else br2++;
	}
	cout<<"Polojitelnite chisla sa = "<<br1<<endl;
	cout<<"Otritsatelnite chisla sa = "<<br2<<endl;
}