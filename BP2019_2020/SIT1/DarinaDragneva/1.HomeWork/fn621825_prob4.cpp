#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<setw(6) << left << "Rank"
                << setw(20) << "Gymnast"
                << setw(10) << "Nation"
                <<setw(8)<<"Ribbon"
                <<setw(8)<<"Ball"
                <<setw(8)<<"Batons"
                <<setw(8)<<"Hoop"
                <<setw(8)<<"Total"
                <<endl;



    cout<<setw(6) << "1"
                <<setw(20)<<"Dina Averina"
                <<setw(10)<<"Russia"
                <<setw(8)<<fixed <<setprecision(3) << 21.65
                <<setw(8)<<22.95
                <<setw(8)<<(float)23
                <<setw(8)<<23.8
                <<setw(8)<<91.4<<endl;



    cout<<setw(6) << "2"
                <<setw(20)<<"Arina Averina"
                <<setw(10)<<"Russia"
                <<setw(8)<<20.85
                <<setw(8)<<23.1
                <<setw(8)<<24.05
                <<setw(8)<<23.1
                <<setw(8)<<91.1<<endl;

    cout<<setw(6) << "3"
                <<setw(20)<<"Linoy Ashram"
                <<setw(10)<<"Israel"
                <<setw(8)<<21.05
                <<setw(8)<<23.1
                <<setw(8)<<23.5
                <<setw(8)<<22.05
                <<setw(8)<<89.7<<endl;

    cout<<setw(6) << "4"
                <<setw(20)<<"Boryana Kaleyn"
                <<setw(10)<<"Bulgaria"
                <<setw(8)<<19.9
                <<setw(8)<<22.4
                <<setw(8)<<22.35
                <<setw(8)<<21.625
                <<setw(8)<<86.275<<endl;

    cout<<setw(6) << "5"
                <<setw(20)<<"Vlada Nikolchenko"
                <<setw(10)<<"Ukraine"
                <<setw(8)<<19.45
                <<setw(8)<<22.25
                <<setw(8)<<19.50
                <<setw(8)<<22.95
                <<setw(8)<<84.15<<endl;
    return 0;
}



