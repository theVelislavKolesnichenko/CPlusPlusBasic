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
	 cout<<"Izraza x=(a+b)^3+(a^2+2ab-2ab+b^2) e raven  na = "<<ops(a,b)<<endl;
	system("pause");
  }
  double chislo(char x){
  double vyvedi;
  cout<< "Vuvedi chislo "<<x<<"=";
  cin>>vyvedi;
  return vyvedi ;
  }
  double ops(double a, double b){
	  return  pow((a+b),3)+(pow(a,2) +2*a*b -2*a*b + pow(b,2));
  }