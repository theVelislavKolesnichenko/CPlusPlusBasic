#include<iostream>
using namespace std;
 int main()
{ 
	 int a, b;
	 cout << "a= ";
	 cin >> a;
	 cout << "b= ";
	 cin >> b;
	 int c,d,e,f,g,h;

	 c = a & b;                    
	 cout << "Value of C for a&b is: " << c << endl;

	 d = a | b;                   
	 cout << "Value of D for a|b is: " << d << endl;

	 e = a ^ b;                   
 	 cout << "Value of E for a^b is: " << e << endl;

	 f = ~a;                      
	 cout << "Value of F for ~a is: " << f << endl;

	 g = a << 5;                  
	 cout << "Value of G for a<<5 is: " << g << endl;

	 h = a >> 4;                  
	 cout << "Value of H for a>>4 is: " << g << endl;

	 return 0;
}
