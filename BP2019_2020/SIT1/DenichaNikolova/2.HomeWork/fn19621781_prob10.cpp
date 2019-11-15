#include <iostream>
using namespace std;

struct Rectangle {
	int a, b;
};



int area_recangle(Rectangle r)
{
	int area = 0;
	area = r.a * r.b;
	return area;
}


int main()
{
	struct Rectangle r;
	int area = 0;
	cout << "Enter 2 Numbers :";
	cin >> r.a >> r.b;

	area = area_recangle(r);
	cout << "Area = " << area;

	return 0;
}

