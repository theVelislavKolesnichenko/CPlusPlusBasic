#include <iostream>
#include <math.h>
using namespace std;

struct Point {
	int x, y;
};
struct Triangle {
	Point A, B, C;
};

Triangle inTriangle() {
	Triangle Obj;

	cout << "Ax = ";
	cin >> Obj.A.x;
	cout << "Ay = ";
	cin >> Obj.A.y;

	cout << "Bx = ";
	cin >> Obj.B.x;
	cout << "By = ";
	cin >> Obj.B.y;

	cout << "Cx = ";
	cin >> Obj.C.x;
	cout << "Cy = ";
	cin >> Obj.C.y;

	return Obj;
}
double perimeter(Triangle Obj) {
	double distAB = sqrt((Obj.A.x - Obj.B.x)*(Obj.A.x - Obj.B.x) + (Obj.A.y - Obj.B.y)*(Obj.A.y - Obj.B.y));
	double distBC = sqrt((Obj.B.x - Obj.C.x)*(Obj.B.x - Obj.C.x) + (Obj.B.y - Obj.C.y)*(Obj.B.y - Obj.C.y));
	double distAC = sqrt((Obj.A.x - Obj.C.x)*(Obj.A.x - Obj.C.x) + (Obj.A.y - Obj.C.y)*(Obj.A.y - Obj.C.y));

	return distAB + distBC + distAC;
}

int main() {
	Triangle Obj = inTriangle();
	cout << "Perimeter: " << perimeter(Obj) << endl;
}