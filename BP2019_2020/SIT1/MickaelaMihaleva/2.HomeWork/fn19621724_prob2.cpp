#include <iostream>
  using namespace std;
  double chislo(char x);
   double ops(double a, double b);
  int main()
  {
    double a,b;
	a=chislo('a');
	b=chislo('b');
	cout<<"Vuzmojni operashii:"<<endl;
	 ops(a,b);
	system("pause");
  }
  double chislo(char x){
  double vyvedi;
  cout<< "Vuvedi chislo "<<x<<"=";
  cin>>vyvedi;
  return vyvedi ;
  }
  double ops(double a, double b){
	  double opst;
	  cout<<"a+b="<<a+b<<endl;
		cout<<"a-b="<<a-b<<endl;
		cout<<"a*b="<<a*b<<endl;
		cout<<"a/b="<<a/b<<endl;
  cin>>opst;
  return opst;}
 
  