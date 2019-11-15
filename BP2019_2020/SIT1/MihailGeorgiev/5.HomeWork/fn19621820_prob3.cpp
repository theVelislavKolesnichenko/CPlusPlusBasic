#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

string doMath(int);

main()
{
  int n;
  cout << "Въведете число от -100 до 100: ";
  cin >> n;

  cout << doMath(n);
}

string doMath(int n)
{

  stringstream result;

  if (n >= -100 && n < 0)
    result << "y(x) = √(x2+1) = " << sqrt(n * n + 1);
  else if (n >= 0 && n <= 100)
    result << "y(x) = (x+10)/(x-20) = " << (n + 10) / (n - 20);
  else
    return "Числото не е от интервала -100 до 100";

  return result.str();
}
