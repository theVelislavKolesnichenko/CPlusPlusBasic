#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	cout << " - Homework N1, Ex 5 - \n\n"
		<< "\nResult:\n"
		//Ред 1 | Колона a
		<< setw(4) << left << "a)"
		<< setw(8) << right << setfill('%') << "   "
		<< setfill(' ')
		//Ред 1 | Колона b
		<< setw(4) << left << "b)"
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//Ред 1 | Колона c
		<< setw(4) << left << "c)"
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//Ред 1 | Колона d
		<< setw(4) << left << "d)"
		<< setw(5) << left << setfill('%') << ""
		<< setw(5) << right << setfill('%') << ""
		<< endl;

	cout << setfill(' ')
		//Ред 2 | Колона a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "    "
		<< setfill(' ')
		//Ред 2 | Колона b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//Ред 2 | Колона c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//Ред 2 | Колона d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << " "
		<< setw(5) << right << setfill('%') << " "
		<< endl;

	cout << setfill(' ')
		//Ред 3 | Колона a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//Ред 3 | Колона b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//Ред 3 | Колона c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//Ред 3 | Колона d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "  "
		<< setw(5) << right << setfill('%') << "  "
		<< endl;

	cout << setfill(' ')
		//Ред 4 | Колона a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//Ред 4 | Колона b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//Ред 4 | Колона c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "    "
		<< setfill(' ')
		//Ред 4 | Колона d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "   "
		<< setw(5) << right << setfill('%') << "   "
		<< endl;

	cout << setfill(' ')
		//Ред 5 | Колона a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//Ред 5 | Колона b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//Ред 5 | Колона c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "   "
		<< setfill(' ')
		//Ред 5 | Колона d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "    "
		<< setw(5) << right << setfill('%') << "    "
		<< endl;

	system("pause");
}

//Съставете програма която да извежда с форматни спецификатори:
//
//а)  %%%%%   b)  %       c)  %       d)  %%%%%%%%%%
//    %%%%        %%          %%           %%%%%%%%
//    %%%         %%%         %%%           %%%%%%
//    %%          %%          %%%%           %%%%
//    %           %           %%%%%           %%