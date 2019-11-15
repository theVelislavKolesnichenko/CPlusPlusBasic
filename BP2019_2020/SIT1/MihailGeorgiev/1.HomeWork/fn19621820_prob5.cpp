#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
  // Line 1
  cout << "а)  " << setw(5) << left << string(5, '%') << "  ";                                       // Figure 1
  cout << "b)  " << setw(5) << left << string(1, '%') << "  ";                                       // Figure 2
  cout << "c)  " << setw(5) << left << string(1, '%') << "  ";                                       // Figure 3
  cout << "d)  " << setw(5) << right << string(5, '%') << setw(5) << left << string(5, '%') << endl; // Figure 4

  // Line 2
  cout << "    " << setw(5) << left << string(4, '%') << "  ";                                       // Figure 1
  cout << "    " << setw(5) << left << string(2, '%') << "  ";                                       // Figure 2
  cout << "    " << setw(5) << left << string(2, '%') << "  ";                                       // Figure 3
  cout << "    " << setw(5) << right << string(4, '%') << setw(5) << left << string(4, '%') << endl; // Figure 4

  // Line 3
  cout << "    " << setw(5) << left << string(3, '%') << "  ";                                       // Figure 1
  cout << "    " << setw(5) << left << string(3, '%') << "  ";                                       // Figure 2
  cout << "    " << setw(5) << left << string(3, '%') << "  ";                                       // Figure 3
  cout << "    " << setw(5) << right << string(3, '%') << setw(5) << left << string(3, '%') << endl; // Figure 4

  // Line 4
  cout << "    " << setw(5) << left << string(2, '%') << "  ";                                       // Figure 1
  cout << "    " << setw(5) << left << string(2, '%') << "  ";                                       // Figure 2
  cout << "    " << setw(5) << left << string(4, '%') << "  ";                                       // Figure 3
  cout << "    " << setw(5) << right << string(2, '%') << setw(5) << left << string(2, '%') << endl; // Figure 4

  // Line 5
  cout << "    " << setw(5) << left << string(1, '%') << "  ";                                       // Figure 1
  cout << "    " << setw(5) << left << string(1, '%') << "  ";                                       // Figure 2
  cout << "    " << setw(5) << left << string(5, '%') << "  ";                                       // Figure 3
  cout << "    " << setw(5) << right << string(1, '%') << setw(5) << left << string(1, '%') << endl; // Figure 4
}
