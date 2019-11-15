#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int chislo,hundreds,tens,units;
	cout<<"Napishete tritsfreno chislo:";
	cin>>chislo;
	units=chislo%10;
	tens=(chislo/10)%10;
	hundreds=(chislo/100)%10;
	cout<<"Hundreds"<<" "<<hundreds<<" "<<"Tens"<<" "<<tens<<" "<<"Units"<<" "<<units<<endl;
	system("pause");
	return 0;}
