#include <iostream>
#include<string>
using namespace std; 
int main()
{
	string units6 = "units " + to_string(576 % 10) + "";
	string tens7 = " tens " + to_string(576 / 10 % 10) + "";
	string hundreds5 = " hundreds" + to_string(576 / 100 % 10);
	cout << units6 << tens7 << hundreds5 << endl;
	return 0;
}
