#include <iostream>

using namespace std;

int main()
{
   int x,a,b,c;
   cout<<"Vuvedi chisloto:";
   cin>>x;
   a=x/100;
   b=(x/10)%10;
   c=x%10;
   cout<<"Units "<<c<<"Tens "<<b<<"Hundreds "<<a<<endl;
   return 0;
}
