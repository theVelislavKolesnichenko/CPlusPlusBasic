#include <iostream>
using namespace std;
void season(int s);
int main() {
	int m;
	while (true) {
		cout << "Enter a month:";
		cin >> m;
		season(m);
	}
	return 0;
}
void season(int s) {
	if ((s >= 1) && (s <= 12)) {
		cout << "The season is:";
		if ((s >= 3) && (s <= 5)) {
			cout << "Spring" << endl;
		}
		if ((s >= 6) && (s <= 8)) {
			cout << "Summer" << endl;
		}
		if ((s >= 9) && (s <= 11)) {
			cout << "Autumn" << endl;
		}
		if (((s >= 1) && (s <= 12)) != ((s >= 3) && (s <= 11))) {
			cout << "Winter" << endl;
		}
	}
	else cout << "This isn't a season." << endl;
}