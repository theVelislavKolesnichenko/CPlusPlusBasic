#include <iostream>

using namespace std;

void outputStart();
void outputFinal();

int main()
{
    outputStart();
    _getwch();
    outputFinal();

    return 0;
}

void outputStart() {
    printf("Start ?\n");
}

void outputFinal() {
    printf("Final !\n");
}
