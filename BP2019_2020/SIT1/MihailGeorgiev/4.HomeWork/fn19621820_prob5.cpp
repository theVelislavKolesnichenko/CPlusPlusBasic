#include <iostream>

using namespace std;

void positiveTo(int);

main()
{
  unsigned int a;

  cout << "Въведете положително число: ";
  cin >> a;

  positiveTo(a);
}

void positiveTo(int a)
{
  for (int i = 1; i <= a; i++)
  {
    cout << i << " ";
  }
}
