#include <iostream>
#include <string>

using namespace std;

string checkYear(int);

main()
{
  int year;
  do
  {
    cout << "Въведете година: ";
    cin >> year;

    cout << checkYear(year) << endl;
  } while (year < 0);
}

string checkYear(int year)
{
  return (year % 4 == 0) ? "Високосна" : "Не е високосна";
}
