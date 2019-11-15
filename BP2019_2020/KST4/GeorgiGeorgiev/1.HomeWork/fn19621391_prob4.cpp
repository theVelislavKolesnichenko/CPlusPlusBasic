#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string ranking[6][8] = {
        {"Rank", "Gymnast", "Nation", "Ribbon", "Ball", "Batons", "Hoop", "Total"},
        {"1", "Dina Averina", "Russia", "21.650", "22.950", "23.000", "23.800", "91.400"},
        {"2", "Arina Averina", "Russia", "20.850", "23.100", "24.050", "23.100", "91.100"},
        {"3", "Linoy Ashram", "Israel", "21.050", "23.100", "23.500", "22.050", "89.700"},
        {"4", "Boryana Kaleyn", "Bulgaria", "19.900", "22.400", "22.350", "21.625", "86.275"},
        {"5", "Vlada Nikolchenko", "Ukraine", "19.450", "22.250", "19.500", "22.950", "84.150"}
    };

    // Направете конзолата на пълен екран, неуспях да измисля кратък начин да променя setw(x) за всяка колона
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            cout << left << setw(20) << ranking[i][j];
        }
        cout << endl;
    }

    return 0;
}
