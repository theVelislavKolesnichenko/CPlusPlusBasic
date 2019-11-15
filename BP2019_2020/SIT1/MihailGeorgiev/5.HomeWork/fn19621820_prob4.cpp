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

  if (n >= -100 && n <= 0)
    result << "y(x) = x3/4x+1 = " << pow(n, 3) / 4 * n + 1;
  else if (n >= 0 && n < 100)
    result << "y(x) = √((x-4)) = " << sqrt(n - 4);
  else
    return "Числото не е от интервала -100 до 100";

  return result.str();
}
