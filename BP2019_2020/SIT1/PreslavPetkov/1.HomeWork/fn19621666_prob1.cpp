#include <iostream>
using namespace std;
int main()
{
	int A;
	int B;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	const double C = A / B;
	cout << showpoint << "C=" << C << endl;//а) подточка
	const double D = (float)A / B;
	cout << showpoint << "D=" << D << endl;//б) подточка
	return 0;
}
//В а) подточка отговора не е десетичен защото въвеждаме числото с int което значи че числото задължително е цяло
//В б) подточка отговра става десетичен защото задаваме на числото А да се конвертира във float което му позволява да има десетична запетая