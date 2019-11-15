#include <iostream>
#include <math.h>

using namespace std;

string getEvenOdd(int number);

main()
{
  int number;

  cout << "Въведете число: ";
  cin >> number;

  cout << getEvenOdd(number);
}

string getEvenOdd(int number)
{
  return number % 2 == 0 ? "Even" : "Odd";
}
