#include <iostream>
using namespace std;
void result();

int main() {


	result();
	return 0;
}

void result() {
	int countp = 0, countn = 0, countz = 0, arr[10], i;
	cout << "Въведете 10 числа"<<endl;
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			countn++;
		}
		else if (arr[i] == 0)
		{
			countz++;
		}
		else
		{
			countp++;
		}
	}
	cout << "Положителни = " << countp << "\n";
	cout << "Отрицателни = " << countn << "\n";
}