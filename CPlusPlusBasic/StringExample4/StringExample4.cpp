#include <iostream>
#include <string>
using namespace std;

void printASCII(string word);
int countOfA(string word);

int main()
{
    setlocale(LC_ALL, "");
 
    string word;
    getline(cin, word);

    printASCII(word);

    cout << "Count of 'A' in " << word << " is " << countOfA(word) << endl;
}

void printASCII(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        cout << word[i] << " : " << (int)(unsigned char)word[i] << endl;
    }
}

int countOfA(string word) 
{
    int count = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'A') 
        {
            count++;
        }
    }
    return count;
}