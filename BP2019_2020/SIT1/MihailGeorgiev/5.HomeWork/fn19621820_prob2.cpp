#include <iostream>

using namespace std;

int countDigit(int);

main()
{
  int a;

  cout << "Въведете число от -2147483648 до 2147483647\n";
  cin >> a;

  if (a >= -2147483648 && a <= 2147483647)
    cout << "Въведените цифри са: " << countDigit(a);
  else
    cout << "Числото трябва да е от -2147483648 до 2147483647";
}

int countDigit(int n)
{
  int count = 0;
  while (n != 0)
  {
    n = n / 10;
    ++count;
  }
  return count;
}
