#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	cout << " - Homework N1, Ex 5 - \n\n"
		<< "\nResult:\n"
		//��� 1 | ������ a
		<< setw(4) << left << "a)"
		<< setw(8) << right << setfill('%') << "   "
		<< setfill(' ')
		//��� 1 | ������ b
		<< setw(4) << left << "b)"
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//��� 1 | ������ c
		<< setw(4) << left << "c)"
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//��� 1 | ������ d
		<< setw(4) << left << "d)"
		<< setw(5) << left << setfill('%') << ""
		<< setw(5) << right << setfill('%') << ""
		<< endl;

	cout << setfill(' ')
		//��� 2 | ������ a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "    "
		<< setfill(' ')
		//��� 2 | ������ b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//��� 2 | ������ c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//��� 2 | ������ d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << " "
		<< setw(5) << right << setfill('%') << " "
		<< endl;

	cout << setfill(' ')
		//��� 3 | ������ a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//��� 3 | ������ b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//��� 3 | ������ c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "     "
		<< setfill(' ')
		//��� 3 | ������ d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "  "
		<< setw(5) << right << setfill('%') << "  "
		<< endl;

	cout << setfill(' ')
		//��� 4 | ������ a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//��� 4 | ������ b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "      "
		<< setfill(' ')
		//��� 4 | ������ c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "    "
		<< setfill(' ')
		//��� 4 | ������ d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "   "
		<< setw(5) << right << setfill('%') << "   "
		<< endl;

	cout << setfill(' ')
		//��� 5 | ������ a
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//��� 5 | ������ b
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "       "
		<< setfill(' ')
		//��� 5 | ������ c
		<< setw(4) << left << ""
		<< setw(8) << right << setfill('%') << "   "
		<< setfill(' ')
		//��� 5 | ������ d
		<< setw(4) << left << ""
		<< setw(5) << left << setfill('%') << "    "
		<< setw(5) << right << setfill('%') << "    "
		<< endl;

	system("pause");
}

//��������� �������� ����� �� ������� � �������� �������������:
//
//�)  %%%%%   b)  %       c)  %       d)  %%%%%%%%%%
//    %%%%        %%          %%           %%%%%%%%
//    %%%         %%%         %%%           %%%%%%
//    %%          %%          %%%%           %%%%
//    %           %           %%%%%           %%