#include <iostream>
using namespace std;
void fun1(int procenti);
int main()
{
	int procenti=5;
	fun1(procenti);
	return 0;
}
void fun1(int procenti)
{
	for (int i = procenti; i >= 1; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << "%";
		}
		cout << endl;
	}

}


