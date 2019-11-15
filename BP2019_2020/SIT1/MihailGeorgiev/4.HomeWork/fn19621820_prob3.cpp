#include <iostream>

using namespace std;

void lcm(int, int);
void gcd(int, int);

main()
{
  int n1, n2;
  cout << "Въведете две реални числа: ";
  cin >> n1 >> n2;

  lcm(n1, n2);

  gcd(n1, n2);
}

void lcm(int n1, int n2)
{
  int max = (n1 > n2) ? n1 : n2;

  do
  {
    if (max % n1 == 0 && max % n2 == 0)
    {
      cout << "НОК = " << max << endl;
      break;
    }
    else
      ++max;
  } while (true);
}

void gcd(int n1, int n2)
{
  while (n1 != n2)
  {
    if (n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }

  cout << "НОД = " << n1 << endl;
}
