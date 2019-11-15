#include <iostream>
using namespace std;
int fun1();
int fun2();
int fun3();
	int main(){ 
		cout<<endl<<"Functsia 1"<<endl;
	fun1();
	cout<<endl<<"Functsia 2"<<endl;
		fun2();
		cout<<endl<<"Functsia 3"<<endl;
		fun3();
	system("pause");}
	int fun1(){
		int col=5;
	int n=1;
		for(int row=1; row<=5;row++){
			cout<<endl;
			for(col=5; col>=n;col--){
					cout<<"%";		
				} n++;
		
		}cout<<endl; return 0;}
		int fun2(){
		int n=1,m=3;
		for(int row=1; row<=5;row++){
			cout<<endl;
			if(n<=3){
			for(int col=1; col<=n;col++){
					cout<<"%";	
			}
			n++;
			}
			else {
			for(int col=4; col>=m;col--){
					cout<<"%";	
			} 
			m++;
			}	
		}cout<<endl;
		return 0;
		}
	int fun3(){
		int n=1,m=1;
		for(int row=1; row<=5;row++){
			cout<<endl;
			for(int i=1;i<=n;i++){
				cout<<" ";}
			for(int col=10; col>=m;col--){
		
				 cout<<"%";}
			m=m+2;
			 n++;
		}cout<<endl;
		return 0;
		}