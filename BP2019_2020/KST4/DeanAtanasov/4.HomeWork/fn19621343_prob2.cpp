#include <iostream>
using namespace std;
void Season(int Month);

int main()
{
 int Month;
 cout << "Select month." << endl;
 cin >> Month;
 Season (Month);

 return 0;

}

void Season(int Month)
{


    switch (Month)
    {
        case 12:
        case 1:
        case 2:
            cout << " Winter " << endl;
            break;
        case 3:
        case 4:
        case 5:
            cout << " Spring " << endl;
            break;
        case 6:
        case 7:
        case 8:
            cout << " Summer " << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << " Fall " << endl;
            break;
        default:


            cout << " Not a month." << endl;
            break;
    }
}
