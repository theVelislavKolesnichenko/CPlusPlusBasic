#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;

int main()
{
    
    cout << std::setfill ('%') << std::setw (5) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (4) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (3) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (2) << "%" << std::endl;
    cout << "%" << std::endl;
    
    cout << std::endl;
    
    cout << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (2) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (3) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (2) << "%" << std::endl;
    cout << "%" << std::endl;
    
    cout << std::endl;
    
    cout << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (2) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (3) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (4) << "%" << std::endl;
    cout << std::setfill ('%') << std::setw (5) << "%" << std::endl;

    cout << std::endl;
    
    cout << std::setfill ('%') << std::setw (10) << "%" << std::endl;
    cout << " " << std::setfill ('%') << std::setw (8) << "%" << std::endl;
    cout << "  " << std::setfill ('%') << std::setw (6) << "%" << std::endl;
    cout << "   " << std::setfill ('%') << std::setw (4) << "%" << std::endl;
    cout << "    " << std::setfill ('%') << std::setw (2) << "%" << std::endl;


    return 0;
}