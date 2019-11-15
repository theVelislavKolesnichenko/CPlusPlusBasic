#include <iostream>

using namespace std;

float avrg(int, int);

main()
{
  int a, count(0), sum(0);

  cout << "Въведете 10 числа: ";
  cin >> a;
  while (count++ < 10)
  {
    sum += a;
    cin >> a;
  }

  cout << avrg(count, sum);
}

float avrg(int count, int sum)
{
  return sum /= count - 1;
}
