#include <iostream>
using namespace std;

void Start();
void End();

int main()
{
	Start();
	End();
}

void Start()
{
	cout << "Start" << endl;
	char ch;
	cin >> ch;
}

void End()
{
	cout << "End" << endl;
}