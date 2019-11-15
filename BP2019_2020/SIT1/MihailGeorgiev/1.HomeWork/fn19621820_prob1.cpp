#include <iostream>
#include <clocale>

using namespace std;

main()
{
  setlocale(LC_ALL, "bg_BG.UTF-8");

  int a, b;
  float c, d;

  cout << "Въведете А: ";
  cin >> a;

  cout << "Въведете B: ";
  cin >> b;

  c = a / b;
  d = (float)a / b;

  cout << "Делението на A и B е: " << c << endl;        // ще изведе цялата част на делението, защото дели две цели числа
  cout << "Делението на A(float) и B е: " << d << endl; // ще изведе и знаците след десетичната запетая, защото едното от числата е float
}
