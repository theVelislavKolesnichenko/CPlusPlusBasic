#include <iostream>

using namespace std;

struct rectangle
{
  unsigned int a, b;
};

int s(rectangle abcd);
rectangle createRectangle();

main()
{
  rectangle abcd;

  abcd = createRectangle();

  cout << "s = " << s(abcd);
}

rectangle createRectangle()
{
  rectangle abcd;

  cout << "Старната а = ";
  cin >> abcd.a;

  cout << "Старната b = ";
  cin >> abcd.b;

  return abcd;
}

int s(rectangle abcd)
{
  return abcd.a * abcd.b;
}
