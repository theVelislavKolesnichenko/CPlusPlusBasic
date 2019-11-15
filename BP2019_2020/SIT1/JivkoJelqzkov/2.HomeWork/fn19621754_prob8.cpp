#include <iostream>
using namespace std;
float NS(int a);
float NT(int a);
int main() {
	int time,speed;
	cout << "Time :";
	cin >> time;
	cout << "Speed:";
	cin >> speed;
	cout <<"Needed speed :"<< NS(time)<<endl;
	cout << "Needed time :"<<NT(speed);
}
float NS(int a) {
	return 987 / a;
}
float NT(int a) {
	return 987 / a;
}