#include <iostream>
using namespace std;
int main()
{
 int age;
 cout << "Enter age." << endl;
 cin >> age;
 if (0 < age && age < 1 ){
  cout << "Baby" << endl;
 }
 else if (1 <= age && age < 3){
   cout << "Toddler" << endl ;
 }
 else if (3 <= age && age < 5){
   cout << "Preschool" <<endl;
 }
 else if (5 <= age && age <= 12){
   cout << "Gradeschooler" <<endl;
 }
else if (13 <= age && age < 18){
    cout << "Teen" <<endl;
}
else if (18 <= age && age < 21){
   cout << "Young adult" << endl;
}
return 0;
}



