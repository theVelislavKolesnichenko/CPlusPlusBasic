#include <iostream>
using namespace std;
int main()
{
	cout << "Vuvejdame stranite na pravougulnika" << endl;
	struct p {
		float x, y;
	};
	p p1;
	cin >> p1.x;
	cin >> p1.y;
	float p2 = p1.x * p1.y;
	cout << "Izvejdame liceto na pravougulnika: " << p2;
}