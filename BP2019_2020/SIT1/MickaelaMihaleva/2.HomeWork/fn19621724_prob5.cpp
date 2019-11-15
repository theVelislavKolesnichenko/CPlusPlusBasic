#include <iostream>
#include <math.h>
  using namespace std;

  double chislo(char x);
   double ops(double a, double b);
  int main()
  {
    double a,b;
	a=chislo('a');
	b=chislo('b');
	 cout<<"Izraza x=2((a-b)/(b-a)) e raven na 2(("<<a<<"-"<<b<<")/("<<b<<"-"<<a<<"))="<<ops(a,b)<<endl;
	system("pause");
  }
  double chislo(char x){
  double vyvedi;
  cout<< "Vuvedi chislo "<<x<<"=";
  cin>>vyvedi;
  return vyvedi ;
  }
  double ops(double a, double b){
	  return  2*((a-b)/(b-a));
  }