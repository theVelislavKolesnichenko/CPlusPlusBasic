#include <iostream>
#include <math.h>

using namespace std;

main()
{
  float a, c, y;

  cout << "Въведете 2 числа разделени със спейс: ";
  cin >> a >> c;

  y = sqrt(a + 2) - c * 2;

  cout << "Стойнтостта на y = √(a+2)−c2 е равна на: " << y;
}
