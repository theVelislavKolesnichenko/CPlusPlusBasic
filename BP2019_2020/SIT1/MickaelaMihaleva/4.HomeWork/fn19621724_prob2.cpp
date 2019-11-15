#include <iostream>
using namespace std;
int mecets(int chislo);
	int main(){
		int chislo;
		cout<<"Proverka na sezon po dadeno vuvedeno chislo !!! "<<endl;
		do{
		cout<<"Vuvedi chislo= ";
		cin>>chislo;
		if(chislo<=0||chislo>12){
      cout<<"Nekorektna stoinost :(!!!Vuvedi novo chislo!!!"<<endl;}
		}while (chislo<=0||chislo>12);
		mecets(chislo);
		system("pause");} 
		int mecets(int chislo){
			switch (chislo)
		{case 1: case 2: case 12: cout<<"Sezonat e Zima!!!"<<endl; break;
		case 3: case 4: case 5: cout<<"Sezonat e Prolet!!!"<<endl; break;
		case 6: case 7: case 8: cout<<"Sezonat e Lqto!!!"<<endl; break;
		case 9: case 10: case 11: cout<<"Sezonat e Ecen!!!"<<endl; break;
			default: cout<<"Ne e validen mecetsa";
				}return 0;}
		