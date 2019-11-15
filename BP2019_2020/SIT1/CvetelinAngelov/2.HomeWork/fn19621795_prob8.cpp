#include <iostream>
#include <string>

using namespace std;

int input(string symb);

float speed_calc(int time);
float time_calc(int speed);

const int dist(987);

int main()
{
	cout << " - Homework N2, Ex 8 - \n\n";
	float a, b;
	a = input("time duration");
	cout << "Train speed=" << speed_calc(a) << " km/h" << endl << endl;
	b = input("travel speed");
	cout << "Travel time=" << time_calc(b) << "h" << endl;
}

int input(string symb)
{
	int val;
	cout << "Please enter a value for the " << symb << ":";
	cin >> val;
	return val;
}

float speed_calc(int time)
{
	return dist / time;
}

float time_calc(int speed)
{
	return dist / speed;
}



//Влак се движи от гара А до гара В, който са на разстояние 987 километра.
//Съставете програма с функции за :
//	- Изчисление на необходимата скорост на влака.Функцията приема като входен
//		параметър времето за което влака трябва да измине разстоянието от гара
//		А до гара В.Връща като резултат скоростта с която трябва да се движи влака.
//	- Изчисления на времето за пътуване.Функцията приема като входен параметър
//		скоростта с която се движи влака и връща като резултат времето за което
//		ще измине разстоянието от гара А до гара В.
//Във функция main въведете време за пътуване в цели часове и изведете скоростта на
//влака и въведете скорост в цяло число и изведете времето за пътуване.