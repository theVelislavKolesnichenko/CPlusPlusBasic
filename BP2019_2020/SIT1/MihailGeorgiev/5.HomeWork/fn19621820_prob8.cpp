#include <iostream>
#include <string>

using namespace std;

void numIn(float &);

main()
{
  float num(0);

  cout << num << endl;
  numIn(num);
  cout << num << endl;
}

void numIn(float &num)
{
  cin >> num;
}
