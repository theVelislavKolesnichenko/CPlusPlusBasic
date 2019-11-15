#include <iostream>
#include <stdio.h>

using namespace std;

char inputInVar(char ch);

main()
{
  char a, b;

  a = inputInVar('A');
  b = inputInVar('B');

  printf("~a = %d\n", ~a);
  printf("~b = %d\n", ~b);
  printf("a&b = %d\n", a & b);
  printf("a|b = %d\n", a | b);
  printf("a^b = %d\n", a ^ b);
  printf("b<<5 = %d\n", b << 5);
  printf("b>>4 = %d\n", b >> 4);
}

char inputInVar(char ch)
{
  char temp;

  cout << ch << "= ";
  cin >> temp;

  return temp;
}
