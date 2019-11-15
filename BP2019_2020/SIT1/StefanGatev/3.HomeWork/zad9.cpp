# include <iostream>
using namespace std;
void range(int age) {
	if (age > 0 && age < 1) cout << "Baby" << endl;
	else if (age < 3) cout << "Toddler" << endl;
	else if (age < 5) cout << "Preschool" << endl;
	else if (age <= 12) cout << "Gradeschooler" << endl;
	else if (age < 18) cout << "Teen" << endl;
	else if (age < 21) cout << "Young Adult" << endl;
}
int main() {
	int age;
	cout << "age= ";
	cin >> age;

	range(age);
}