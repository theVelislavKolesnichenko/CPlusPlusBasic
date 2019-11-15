#include <iostream>

using namespace std;

void month(int);

main()
{
  int number;

  cout << "Въведете месец: ";
  cin >> number;

  month(number);
}

void month(int number)
{
  switch (number)
  {
  case 12:
  case 1:
  case 2:
    cout << "Зимен";
    break;

  case 3:
  case 4:
  case 5:
    cout << "Пролетен";
    break;

  case 6:
  case 7:
  case 8:
    cout << "Летен";
    break;
  case 9:
  case 10:
  case 11:
    cout << "Есенен";
    break;

  default:
    cout << "Не е въведен валиден месец";
    break;
  }
}
