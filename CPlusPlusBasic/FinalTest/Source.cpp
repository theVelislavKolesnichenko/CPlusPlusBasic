#include<iostream> 
using namespace std; 

int x = 5;

int f(int &a)
{
	return a = 10;
}

int main() 
{

	int a = 10;
	int b = (a++);
	cout << b << endl;
	return 0; 
} 