#include <iostream>
#include <math.h>
  using namespace std;
  double chislo(char x);
   double ops(double y);
  int main()
  {
    double y;
	y=chislo('y');
	 cout<<"Izraza x=2*((2*y+5)/(14-y/3)) e raven na 2((2"<<y<<"+5)/(14-"<<y<<"/3))="<<ops(y)<<endl;
	system("pause");
  }
  double chislo(char x){
  double vyvedi;
  cout<< "Vyvedi chislo na promenlivata "<<x<<" = ";
  cin>>vyvedi;
  return vyvedi ;
  }
  double ops(double y){
	  return  2*((2*y+5)/(14-y/3));
  }