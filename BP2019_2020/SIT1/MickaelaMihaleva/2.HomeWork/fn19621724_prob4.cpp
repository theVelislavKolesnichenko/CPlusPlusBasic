#include <iostream>
#include <iomanip>
  using namespace std;
 int chislo(char x);
   int units(int a);
   int tens(int a);
   int hundreds(int a);
  int main()
  {
    int a;
	a=chislo('a');
	 cout<<"Cifrata na edinisti = "<<units(a)<<endl<<"Cifrata na desetisti = "<<tens(a)<<endl<<"Cifrata na stotisti = "<<hundreds(a)<<endl;
	system("pause");
  }
  int chislo(char x){
  int vyvedi;
  cout<< "Vuvedi tritsivreno chislo:";
  cin>>vyvedi;
  return vyvedi ;
  }
  int units(int a){
    return a%10 ;}
  int tens(int a){
    return (a/10)%10 ;}
  int hundreds(int a){
    return(a/100)%10;}

 
