#include <iostream>
using namespace std;
void function(int num);
int main()
{
	int num;
	cout << "Type a number: ";
	cin >> num;
	function(num);

	return 0;
}
void function(int num)
{
	int mesec = num;
	if ((mesec >= 3) && (mesec <= 5))
	{
		cout << "Spring" << endl;
	}
	else if ((mesec >= 6) && (mesec <= 8))
	{
		cout << "Summer" << endl;
	}
	else if ((mesec >= 9) && (mesec <= 11))
	{
		cout << "Autumn" << endl;
	}
	else if ((mesec == 12) || (mesec == 1) || (mesec == 2))
	{
		cout << "Winter" << endl;
	}
	else if ((mesec<1) || (mesec>12))
	{
		cout << "The months are in the range of 1 and 12." << endl;
	}
}