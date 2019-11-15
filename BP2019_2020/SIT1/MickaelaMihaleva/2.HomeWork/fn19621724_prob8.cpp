#include <iostream>
  using namespace std;
  const int S=987;
int chislo(char x);
  double skorost(double t);
    int vreme(int v);
  int main()
  {
    int t,v;
	cout<< "Vuvedi vreme na putyvane = ";
	t=chislo('t');
		cout<<"Skorostta na vlaka ot gara A do gara B"<<" e "<<skorost(t)<<"km/h"<<endl;
		cout<< "Vuvedi skorost na putyvane = ";
	v=chislo('v');
		cout<<"Vremeto za pristigane ot gara A do gara B"<<" e "<<vreme(v)<<"h"<<endl;
	system("pause");
  }
  int chislo(char x){
  int a;
  cin>>a;
  return a;
  }
 double skorost(double t){ 
  return S/t;}
 int vreme(int v){ 
	  
  return S/v;}