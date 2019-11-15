#include <iostream>
#include <string>

using namespace std;

string chechDigits(int);

main()
{
  int num;
  do
  {
    cout << "Въведете число: ";
    cin >> num;

    cout << chechDigits(num) << endl;
  } while (num != 0);
}

string chechDigits(int num)
{
  if (num < 1000)
  {
    return "less than four-digits";
  }
  else if (num > 9999)
  {
    return "more than fout-digits";
  }

  return "four-digits";
}
