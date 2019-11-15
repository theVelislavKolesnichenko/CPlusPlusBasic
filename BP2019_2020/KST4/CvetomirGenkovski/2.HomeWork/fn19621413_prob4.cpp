#include <iostream>
using namespace std;
void war(int a)
{
	cout << a % 10;
}
void gun(int a)
{
	cout << a / 10 % 10;
}
void run(int a)
{
	cout << a / 100 % 10;
}
int main()
{
	int q = 837;

	cout << "edinici "; war(q);
	cout << endl << "desetici "; gun(q);
	cout << endl << "stotici "; gun(q);
}