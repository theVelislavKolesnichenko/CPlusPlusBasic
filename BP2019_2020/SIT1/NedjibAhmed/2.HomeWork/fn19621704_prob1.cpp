#include <iostream>


using std::cout;
using std::cin;

void start();
void final();

int main()
{
    start();
    cout << "Press any key to continue";
    cin.get();
    final();

    return 0;
}
void start()
{
    cout << "Start ? " "\n"; 
}
void final()
{
    cout << "Final !" "\n";
}