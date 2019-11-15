#include<iostream>

using namespace std;

int letter_position(char letter);

int main()
{	
	char f;
	cin >> f;

	cout << f << "-->" << letter_position(f) << endl;
	//cout << "D-->" << letter_position('D') << endl;
	//cout << "e-->" << letter_position('e') << endl;
	//cout << "n-->" << letter_position('n') << endl;
	//cout << "i-->" << letter_position('i') << endl;
	//cout << "t-->" << letter_position('t') << endl;
	//cout << "s-->" << letter_position('s') << endl;
	//cout << "a-->" << letter_position('a') << endl;

	return 0;
}

int letter_position(char letter)
{
	int pos;

	if (letter >= 'a' && letter <= 'z')
	{
		pos = (letter - 'a') + 1;
		return pos;
	}

	if (letter >= 'A' && letter <= 'Z')
	{
		pos = (letter - 'A') + 1;
		return pos;
	}
}