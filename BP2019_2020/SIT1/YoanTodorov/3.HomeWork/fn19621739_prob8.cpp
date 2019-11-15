#include <iostream>
#include <math.h>

using namespace std;
int abc(char ch);
int main()
{
    char c;
    cout<<"char= ";
    cin>>c;
    cout<<abc(c)<<endl;
    return 0;
}
int abc(char ch)
{
    int a;
    switch(ch)
    {
        case 'a': case 'A':
        {
            a=1;
        }
        break;
        case 'b': case'B':
        {
            a=2;
        }
        break;
        case 'c': case'C':
        {
            a=3;
        }
        break;
        case 'd': case'D':
        {
            a=4;
        }
        break;
        case 'e': case'E':
        {
            a=5;
        }
        break;
        case 'f': case'F':
        {
            a=6;
        }
        break;
        case 'g': case'G':
        {
            a=7;
        }
        break;
        case 'h': case'H':
        {
            a=8;
        }
        break;
        case 'i': case'I':
        {
            a=9;
        }
        break;
        case 'k': case'K':
        {
            a=10;
        }
        break;
        case 'l': case'L':
        {
            a=11;
        }
        break;
        case 'm': case'M':
        {
            a=12;
        }
        break;
        case 'n': case'N':
        {
            a=13;
        }
        break;
        case 'o': case'O':
        {
            a=14;
        }
        break;
        case 'p': case'P':
        {
            a=15;
        }
        break;
        case 'q': case'Q':
        {
            a=16;
        }
        break;
        case 'r': case'R':
        {
            a=17;
        }
        break;
        case 's': case'S':
        {
            a=18;
        }
        break;
        case 't': case'T':
        {
            a=19;
        }
        break;
        case 'v': case'V':
        {
            a=20;
        }
        break;
        case 'x': case'X':
        {
            a=21;
        }
        break;
        case 'y': case'Y':
        {
            a=22;
        }
        break;
        case 'z': case'Z':
        {
            a=23;
        }
        break;
        default:
            {
                a=-1;
            }
            break;

    }
    return a;
}
