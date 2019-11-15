#include <iostream>
using namespace std;

struct Rectangle {
	double width, length;
};

Rectangle inRectangle() {
	Rectangle Obj;

	cout << "width = ";
	cin >> Obj.width;

	cout << "length = ";
	cin >> Obj.length;

	return Obj;
}
double Area(Rectangle Obj) {

	return Obj.length * Obj.width;
}

int main() {
	Rectangle Obj = inRectangle();
	cout << "Area: " << Area(Obj) << endl;
}