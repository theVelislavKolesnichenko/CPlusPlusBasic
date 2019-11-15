#include <iostream>
using namespace std;
struct rectangle 
{
float a, b;
};
rectangle rec_in();
float rec(rectangle rec);

int main() 
{
	rectangle x;
    x = rec_in();
	cout << "S = a * b" << "\nS = " << rec(x) << endl;
return 0;
}
rectangle rec_in() 
{
	rectangle str;
	cout << "a = ";
	cin >> str.a;
	cout << "b = ";
	cin >> str.b;
return str;
}
    float rec(rectangle rec) {
return rec.a * rec.b;
}