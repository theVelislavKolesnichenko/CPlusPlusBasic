#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
void Season(int a)
{
    if(a>=1 && a<=3)
   {
       cout<<"Winter";
   }
    if(a>=4 && a<=6)
    {

      cout<<"Spring";
    }
    if(a>=7&& a<=9)
    {
        cout<<"Summer";
    }
     else cout<<"Invalid input!";
}
int main()
{
    int a;
  cout<<"a=";
  cin>>a;
  Season(a);


     return 0;

}








