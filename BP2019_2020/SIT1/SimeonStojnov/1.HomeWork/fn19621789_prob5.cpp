#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(4) << left << "a)" << setw(8) << left << "%%%%%" << setw(4) << left << "b)" << setw(8) << left << "%" << setw(4) << left << "c)" << setw(8) << left << "%" << setw(4) << left << "d)" << setw(10) << "%%%%%%%%%%" << endl;
    cout << setw(4) << left << "" << setw(8) << left << "%%%%" << setw(4) << left << "" << setw(8) << left << "%%" << setw(4) << left << "" << setw(8) << left << "%%" << setw(4) << left << "" << setw(10) << " %%%%%%%%" << endl;
    cout << setw(4) << left << "" << setw(8) << left << "%%%" << setw(4) << left << "" << setw(8) << left << "%%%" << setw(4) << left << "" << setw(8) << left << "%%%" << setw(4) << left << "" << setw(10) << "  %%%%%%" << endl;
    cout << setw(4) << left << "" << setw(8) << left << "%%" << setw(4) << left << "" << setw(8) << left << "%%" << setw(4) << left << "" << setw(8) << left << "%%%%" << setw(4) << left << "" << setw(10) << "   %%%%" << endl;
    cout << setw(4) << left << "" << setw(8) << left << "%" << setw(4) << left << "" << setw(8) << left << "%" << setw(4) << left << "" << setw(8) << left << "%%%%%" << setw(4) << left << "" << setw(10) << "    %%" << endl;

    return 0;
}