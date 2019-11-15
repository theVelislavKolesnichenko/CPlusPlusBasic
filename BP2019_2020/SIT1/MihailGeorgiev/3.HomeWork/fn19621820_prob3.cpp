#include <iostream>

using namespace std;

int inputInVar(char ch);
void isPositive(int a);

main()
{
  int a;

  a = inputInVar('A');

  isPositive(a);
}

int inputInVar(char ch)
{
  int temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}

void isPositive(int a)
{
  (a > 0) ? cout << "Positive" : cout << "Negative";
}
