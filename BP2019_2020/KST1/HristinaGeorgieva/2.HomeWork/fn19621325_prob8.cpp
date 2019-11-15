#include <iostream>
using namespace std;
int speed(int t);
int time(int s);
int main()
{
	int t, s;
	cout << "Time=";
	cin >> t;
	cout << "Speed="<<speed(t) << endl;
	cout << "Speed=";
	cin >> s;
	cout <<"Time="<< time(s) << endl; 
	system("pause");
	return 0;
}
int speed(int t) {
	return 987 / t; 
}
int time(int s) {
	return 987 / s;
}