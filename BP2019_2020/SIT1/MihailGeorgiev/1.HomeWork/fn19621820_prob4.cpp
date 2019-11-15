#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Row 1
  cout << setw(5) << left << "Rank";          // Column 1
  cout << setw(20) << left << "Gymnast";      // Column 2
  cout << setw(10) << left << "Nation";       // Column 3
  cout << setw(8) << left << "Ribbon";        // Column 4
  cout << setw(8) << left << "Ball";          // Column 5
  cout << setw(8) << left << "Batons";        // Column 6
  cout << setw(8) << left << "Hoop";          // Column 7
  cout << setw(8) << left << "Total" << endl; // Column 8

  // Row 2
  cout << setw(5) << left << "1";              // Column 1
  cout << setw(20) << left << "Dina Averina";  // Column 2
  cout << setw(10) << left << "Russia";        // Column 3
  cout << setw(8) << left << "21.650";         // Column 4
  cout << setw(8) << left << "22.950";         // Column 5
  cout << setw(8) << left << "23.000";         // Column 6
  cout << setw(8) << left << "23.800";         // Column 7
  cout << setw(8) << left << "91.400" << endl; // Column 8

  // Row 3
  cout << setw(5) << left << "2";              // Column 1
  cout << setw(20) << left << "Arina Averina"; // Column 2
  cout << setw(10) << left << "Russia";        // Column 3
  cout << setw(8) << left << "20.850";         // Column 4
  cout << setw(8) << left << "23.100";         // Column 5
  cout << setw(8) << left << "24.050";         // Column 6
  cout << setw(8) << left << "23.100";         // Column 7
  cout << setw(8) << left << "91.100" << endl; // Column 8

  // Row 4
  cout << setw(5) << left << "3";              // Column 1
  cout << setw(20) << left << "Linoy Ashram";  // Column 2
  cout << setw(10) << left << "Israel";        // Column 3
  cout << setw(8) << left << "21.050";         // Column 4
  cout << setw(8) << left << "23.100";         // Column 5
  cout << setw(8) << left << "23.500";         // Column 6
  cout << setw(8) << left << "22.050";         // Column 7
  cout << setw(8) << left << "89.700" << endl; // Column 8

  // Row 5
  cout << setw(5) << left << "4";               // Column 1
  cout << setw(20) << left << "Boryana Kaleyn"; // Column 2
  cout << setw(10) << left << "Bulgaria";       // Column 3
  cout << setw(8) << left << "19.450";          // Column 4
  cout << setw(8) << left << "22.400";          // Column 5
  cout << setw(8) << left << "22.350";          // Column 6
  cout << setw(8) << left << "21.625";          // Column 7
  cout << setw(8) << left << "86.275" << endl;  // Column 8

  // Row 6
  cout << setw(5) << left << "5";                  // Column 1
  cout << setw(20) << left << "Vlada Nikolchenko"; // Column 2
  cout << setw(10) << left << "Ukraine";           // Column 3
  cout << setw(8) << left << "19.450";             // Column 4
  cout << setw(8) << left << "22.250";             // Column 5
  cout << setw(8) << left << "19.500";             // Column 6
  cout << setw(8) << left << "22.950";             // Column 7
  cout << setw(8) << left << "84.150" << endl;     // Column 8
}
