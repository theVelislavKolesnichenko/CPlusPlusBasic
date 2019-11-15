#include <iostream>
using namespace std;
struct triangle 
{
float a, b, c;
};
triangle tr_in();
float tri(triangle tri);

int main() 
{
	triangle x;
    x = tr_in();
	cout << "P = a + b + c" << "\nP = " << tri(x) << endl;
return 0;
}
    triangle tr_in()
{
	triangle str;
	cout << "a = ";
	cin >> str.a;
	cout << "b = ";
	cin >> str.b;
	cout << "c = ";
	cin >> str.c;
return str;
}
    float tri(triangle tri) {
return tri.a + tri.b + tri.c;
}