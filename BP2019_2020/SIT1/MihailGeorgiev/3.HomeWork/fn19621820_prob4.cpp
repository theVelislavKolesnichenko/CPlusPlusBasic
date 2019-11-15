#include <iostream>

using namespace std;

int inputInVar(char ch);
int calc(int y);

main()
{
  int y;

  y = inputInVar('Y');

  (y != 0) ? cout << "x = 20/y = " << calc(y) : cout << "Не може да се дели на 0";
}

int inputInVar(char ch)
{
  int temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

int calc(int y)
{
  return 20 / y;
}
