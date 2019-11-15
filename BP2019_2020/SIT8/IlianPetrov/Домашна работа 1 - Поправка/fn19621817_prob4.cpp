#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout <<setw(4)<<"Rank"<<"  "<<setw(7)<<"Gymnast"<<"             "<< setw(6) << "Nation"<<"    "<<setw(6)<<"Ribbon"<<"   "<<setw(4)<<"Ball"<<"   "<<setw(6)<<"Batons"<<"  "<<setw(4)<<"Hoop"<< "      "<< setw(5) << "Total" << endl;
	cout <<setw(1) <<"1"<<"     "<<setw(11)<< "Dina Averina"<<"        "<< setw(6)<<"Russia"<<"    "<<setw(6)<<"21.650"<<"   "<<setw(6)<<"22.950"<<" "<<setw(6)<<"23.000"<<"  "<<setw(6)<<"23.800"<<"    "<<setw(6)<<"91.400"<<endl;
	cout << setw(1) << "2" << "     " << setw(12) << "Arina Averina"<< "       " << setw(6) << "Russia" << "    " << setw(6) << "20.850" << "   " << setw(6) << "23.100" << " " << setw(6) << "24.050" << "  " << setw(6) << "23.100" << "    " << setw(6) << "91.100" << endl;
	cout << setw(1) << "3" << "     " << setw(11) << "Linoy Ashram" << "        " << setw(6) << "Israel" << "    " << setw(6) << "21.050" << "   " << setw(6) << "23.100" << " " << setw(6) << "23.500" << "  " << setw(6) << "22.050" << "    " << setw(6) << "89.700" << endl;
	cout << setw(1) << "4" << "     " << setw(13) << "Boryana Kaleyn" << "      " << setw(8) << "Bulgaria" <<"  "<< setw(6) << "19.900" << "   " << setw(6) << "22.400" << " " << setw(6) << "22.350" << "  " << setw(6) << "21.625" << "    " << setw(6) << "86.275" << endl;
	cout << setw(1) << "5" << "     " << setw(17) << "Vlada Nikolchenko" << "   " << setw(7) << "Ukraine" << "   " << setw(6) << "19.450" << "   " << setw(6) << "22.250" << " " << setw(6) << "19.500" << "  " << setw(6) << "22.950" << "    " << setw(6) << "84.150" << endl;


return 0;
}