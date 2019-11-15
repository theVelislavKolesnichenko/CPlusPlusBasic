#include <iostream>
using namespace std;
int main()
{
	cout << "Vuvejdame stranite na triugulnika"<< endl;
	struct p {
		float x, y, z;
	};
	p p1;
	cin >> p1.x;
	cin >> p1.y;
	cin >> p1.z;
	float p2 = p1.x + p1.y + p1.z;
	cout <<"Izvejdame obikolkata na triugulnika: "<< p2;
}