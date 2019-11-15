#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct rankk
{
	string name;
	string nation;
	double ribbon;
	double ball;
	double batons;
	double hoop;
	double total;
};
vector<rankk> ranking;

void insert_data_to_vector()
{
	ranking.push_back(rankk{ "Dina Averina", "Russia", 14.65, 22.95, 23, 23.80, 91.40 });
	ranking.push_back(rankk{ "Arina Averina", "Russia", 20.85, 23.1, 24.05, 23.1, 91.1});
	ranking.push_back(rankk{ "Linoy Ashram", "Israel", 21.05, 23.1, 23.5, 22.5, 89.7});
	ranking.push_back(rankk{ "Boryana Kaleyn", "Bulgaria", 19.9, 22.4, 22.35, 21.625, 86.275});
	ranking.push_back(rankk{ "Vlada Nikolchenko", "Ukraine", 19.45, 22.25, 19.5, 22.95, 84.15});
}
void main()
{
	insert_data_to_vector();
	cout << " - Homework N1, Ex 4 - \n\n"
		<< "\nResult:\n"
		<< setw(6) << left << "Rank"
		//setw(int) - задава макс. дължина на полето
		<< setw(20) << "Gymnast"
		<< setw(10) << "Nation"
		<< setw(8) << "Ribbon"
		<< setw(8) << "Ball"
		<< setw(8) << "Batons"
		<< setw(8) << "Hoop"
		<< setw(8) << "Total"
		<< endl;
	for (int i = 0; i < ranking.size(); i++) {
		cout.precision(3);
		cout << setw(6) << i+1
			<< setw(20) << ranking[i].name
			<< setw(10) << ranking[i].nation
			<< setw(8) << fixed << setprecision(3) << ranking[i].ribbon // !! Ако не се използва fixed, setprecision не работи !!!!!
			//fixed - представя числата с фиксирана десетична точка
			//setprecision(int) - задава прецизност за дробните числа
			<< setw(8) << ranking[i].ball
			<< setw(8) << ranking[i].batons
			<< setw(8) << ranking[i].hoop
			<< setw(8) << ranking[i].total
			<< endl;
	}

	system("pause");
}

//Съставете програма която извежда класиране в състезание по художествена гимнастика:
//
//Rank  Gymnast             Nation    Ribbon  Ball    Batons  Hoop    Total 
//1     Dina Averina        Russia    21.650  22.950  23.000  23.800  91.400 
//2     Arina Averina       Russia    20.850  23.100  24.050  23.100  91.100 
//3     Linoy Ashram        Israel    21.050  23.100  23.500  22.050  89.700 
//4     Boryana Kaleyn      Bulgaria  19.900  22.400  22.350  21.625  86.275
//5     Vlada Nikolchenko   Ukraine   19.450  22.250  19.500  22.950  84.150