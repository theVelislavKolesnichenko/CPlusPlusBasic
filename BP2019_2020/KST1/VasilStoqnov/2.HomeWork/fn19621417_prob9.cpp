#include <iostream>
using namespace std;
int chisla(int a, int b, int c);
struct triagalnik
{
	int a, b, c;
};
int main()
{
	triagalnik A;
	cout << "vuvedete strana 'a' na triagalnika=";
		cin >> A.a;
		cout << "vuvedete strana 'b' na triagalnika=";
		cin >> A.b;
		cout << "vuvedete strana 'c' na triagalnika=";
		cin >> A.c;
		
		if (A.a == A.b == A.c)
			cout << "ravnostranen triagalnik  obiokolka ravna na =" << chisla(A.a, A.b, A.c);
		
		else if (A.a == A.b|| A.b == A.c|| A.c == A.a)
			cout << "ravnobedren triagalnik s obikolka ravna na=" << chisla(A.a, A.b, A.c);
		
		else 
			cout << "raznostranen triagalnik s obikolka ravna na =" << chisla(A.a, A.b, A.c);
		return 0;
}
int chisla(int a, int b, int c)
{
	return a + b + c;
}
