#include <iostream>
using namespace std;
void func(int num){
	if (num % 2 == 0) cout << "even"<<endl;
	else cout << "odd"<<endl;
}
int main()
{
	int a;
	cout << "vuvedete chislo=";
		cin >> a;
		func(a);
		return 0;
} 