#include <iostream>

using std::cout;
using std::cin;

void shape1();
void shape2();
void shape3();

int main()
{
    shape1();
    cout << std::endl;
    shape2();
    cout << std::endl;
    shape3();

    return 0;
}
void shape1()
{
    int i, length;
    length = 5;
    i = 0;
    while (i < 5)
    {
        int j;
        j = 0;
        
        while (j < length)
        {
            cout << "*";
            j++;
        }
        cout << std::endl;
        length--;
        i++;
    }

}
void shape2()
{
    int i, length;
    length = 1;
    i = 0;
    do
    {
        int j;
        j = 0;

        do
        {
            cout << "*";
            j++;

        }while(j < length);

        cout << std::endl;
        if (i >= 2)
        {
            length--;
        }
        else
        {
           length++;
        }
        i++;

    }while(i < 5);
}

void shape3()
{
    int length;
    length = 10;

    for(int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < length; j++)
        {
            cout << "*";
        }
        length -= 2;
        cout << std::endl;
        for(int k = 0; k < i; k++)
        {
            cout << " ";
        }

    }
}
