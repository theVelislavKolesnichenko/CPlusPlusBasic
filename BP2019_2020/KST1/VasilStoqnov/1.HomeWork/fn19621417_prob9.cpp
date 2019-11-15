#include <iostream>
using namespace std;

int main() {
	int visochina, osnova,otgovor;
	cout << "vavedete visochina i osnova : ";
	cin >> visochina >> osnova;
	otgovor = (0.5)*visochina*osnova;    

	cout << "liceto na triagalnika e : " << otgovor;
	return 0;
}