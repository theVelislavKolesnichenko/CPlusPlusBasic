#include <iostream>
  using namespace std;
  double chislo(char x);
   double ops(double a, double b,double c, double d);
  int main()
  {
    double a,b,c,d;
	a=chislo('a');
	b=chislo('b');
	c=chislo('c');
	d=chislo('d');
	 ops(a,b,c,d);
	system("pause");
  }
  double chislo(char x){
  double vyvedi;
  cout<< "Vuvedi chislo "<<x<<"=";
  cin>>vyvedi;
  return vyvedi ;
  }
  double ops(double a, double b,double c, double d){
	  double opst;
	  cout<<"Sredna stoinost na vuvedenite chisla e = "<<(a+b+c+d)/4<<endl;
  cin>>opst;
  return opst;}