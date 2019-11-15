#include <iostream>
using namespace std;
float float_in(char ch);
float speed(float S,float T);
float time(float S, float V);
int main() {
	float S(987), V , T  ;// S - Разстояние ,  V - скорост , T - време.


	T = float_in('T');
	cout << "V = S / T" << "\nV = " << speed(S , T)<<endl;
	V = float_in('V');
	cout << "T = S / V" << "\nT = " << time(S, V);






	return 0;
}
float float_in(char ch) {
	float n;
	cout << ch << "=";
	cin >> n;
	return n;
}
float speed(float S, float T) {
	return S / T;
}
float time(float S,float V) {
	return S / V;
}