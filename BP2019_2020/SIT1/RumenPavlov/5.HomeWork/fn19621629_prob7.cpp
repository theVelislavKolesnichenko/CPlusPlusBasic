#include <iostream>

using namespace std;
int prime(int i);
int main()
{
	bool primenumber;
	for (int i=2;i<21;i++)
	{
	primenumber=prime(i);

	if(primenumber==true)
		cout<<i<<" ";
	}


	   




return 0;
}
int prime(int i)
{
bool primenumber=true;

   for(int p = 2; p <= i/2; p++) 
   {
      if (i%p == 0) 
	  {
         primenumber = false;
         break;
      }
   }  
   return primenumber;
}