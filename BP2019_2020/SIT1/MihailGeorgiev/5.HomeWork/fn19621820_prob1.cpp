#include <iostream>

using namespace std;

void doMath(int, int &);

main()
{
  int a, b(1);

  cout << "Въведете положителни числа (за край сложете 0):\n";
  cin >> a;
  while (a > 0)
  {
    doMath(a, b);
    cin >> a;
  }

  cout << "Произведението на всичките числа е равно на: " << b;
}

void doMath(int a, int &b)
{
  b *= a;
}
