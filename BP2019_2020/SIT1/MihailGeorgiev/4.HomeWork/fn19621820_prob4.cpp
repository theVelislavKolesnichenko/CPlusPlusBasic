#include <iostream>
#include <math.h>
#include <sstream>

using namespace std;

string findRoots(int, int, int);

main()
{
  // ax^2 + 2bx + d = 0

  int a, b, d;

  cout << "a = ";
  cin >> a;

  cout << "b = ";
  cin >> b;

  cout << "d = ";
  cin >> d;

  cout << "Корените на уравнението ax^2 + 2bx + d = 0 са: \n"
       << findRoots(a, b, d);
}

string findRoots(int a, int b, int c)
{
  // (-b +- sqrt(b^2 - 4ac)) / 2a

  double x1 = (b * (-1) - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
  double x2 = (b * (-1) + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;

  stringstream result;
  result << "x1 = " << x1 << " x2 = " << x2;

  return result.str();
}
