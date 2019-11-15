#include <iostream>
#include <math.h>
using namespace std;
float operations(float number);
int main()
{
	float number;
	cout<<"Enter a number between -100 and 100"<<endl;
	cin>>number;
	if(number<=-100 && number>=100)
	{
		cout<<"Enter again"<<endl;
		cin>>number;
	}
	operations(number);



return 0;
}
float operations(float number)
{
	float y;
   if(number<0)
   {
   y=sqrt(pow(number,2)+1);
   return y;
   }
   if(number>=0)
   {
	   y=(number+10)/(number-20); 
	   return y;
   }
}