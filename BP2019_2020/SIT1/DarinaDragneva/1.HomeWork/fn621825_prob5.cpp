#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<< setw(4)<<left<<"a)"
        << setw(8)<<"%%%%%"
        << setw(4)<<"b)"
        << setw(8)<<"%"
        << setw(4)<<"c)"
        << setw(8)<<"%"
        << setw(4)<<"d)"
        << setw(10)<<"%%%%%%%%%%"
        <<endl;

    cout<< setw(4)<<" "
        << setw(8)<<"%%%%"
        << setw(4)<<" "
        << setw(8)<<"%%"
        << setw(4)<<" "
        << setw(8)<<"%%"
        << setw(5)<<" "
        << setw(9)<<"%%%%%%%%"
        <<endl;

    cout<< setw(4)<<" "
        << setw(8)<<"%%%"
        << setw(4)<<" "
        << setw(8)<<"%%%"
        << setw(4)<<" "
        << setw(8)<<"%%%"
        << setw(6)<<"  "
        << setw(9)<<"%%%%%%"
        <<endl;

    cout<< setw(4)<<" "
        << setw(8)<<"%%"
        << setw(4)<<" "
        << setw(8)<<"%%"
        << setw(4)<<" "
        << setw(8)<<"%%%%"
        << setw(7)<<"  "
        << setw(9)<<"%%%%"
        <<endl;

    cout<< setw(4)<<" "
        << setw(8)<<"%"
        << setw(4)<<" "
        << setw(8)<<"%"
        << setw(4)<<" "
        << setw(8)<<"%%%%%"
        << setw(8)<<"  "
        << setw(9)<<"%%"
        <<endl;
    return 0;
}
