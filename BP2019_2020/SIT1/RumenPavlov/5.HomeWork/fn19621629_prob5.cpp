#include <iostream>

using namespace std;
float f1(float numbers[10]);
int main()
{
	float numbers[10];
	cout<<"Enter 10 numbers"<<endl;
	cout<<f1(numbers)<<endl;








	return 0;
}
float f1(float numbers[10])
{
	float sum=0, average;
	for(int k=0;k<=9;k++)
	{
		cin>>numbers[k];
	}
    for (int i = 0; i < 10; ++i) {
    sum += numbers[i];
   }
	average=sum/10;
	return average;
}