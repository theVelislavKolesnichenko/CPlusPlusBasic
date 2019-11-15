#include <iostream>

using namespace std;

main()
{
  float a, b, c, z;

  cout << "Въведете 3 числа разделени със спейс: ";
  cin >> a >> b >> c;

  z = 2 * (a - b) * (a - c);

  cout << "Стойнтостта на z = 2(a-b)(a-c) е равна на: " << z;
}
