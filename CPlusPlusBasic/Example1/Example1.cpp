#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <time.h>

using namespace std;

struct Athlete {
    //char name[50];
    string name;
    int rating[5];
};

int in(Athlete athlets[], int size);
void out(Athlete athlets[], int size);
void out(Athlete athlets);
int max(Athlete athlets[], int size);
int min(Athlete athlets[], int size);
void sort(Athlete athlets[], int size);
double avg(int rating[], int size);
void save(Athlete rating[], int size);
int read(Athlete rating[]);

int main()
{
    setlocale(LC_ALL, "BG");
    const int maxSize = 5;

    Athlete athlets[maxSize];
    unsigned short option = 0;
    char choice = 'n';
    int currontSize = read(athlets);
    do {
        cout << "\nИзберете действие" << endl;
        cout << "1. Въвеждане на резултатите на състезателките\n"
            "2. Извеждане на резултатите\n"
            "3. Най-висока средна оценка\n"
            "4. Най-ниска средна оценка\n"
            "5. Класиране\n"
            "6. Изход" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            cin.ignore();
            currontSize = in(athlets, currontSize, maxSize);
            break;
        }
        case 2:
        {
            out(athlets, currontSize);
            break;
        }
        case 3:
        {
            int index = max(athlets, currontSize);
            out(athlets[index]);
            break;
        }
        case 4:
        {
            int index = min(athlets, currontSize);
            out(athlets[index]);
            break;
        }
        case 5:
        {
            sort(athlets, currontSize);
            out(athlets, currontSize);
            break;
        }
        case 6:
        {
            cout << "Наистина ли искате да напуснете програмата? \nИзберете y за потвърждение или друга буква за отказ." << endl;
            cin >> choice;
            if (choice == 'y')
            {
                option = 0;
                cout << "Довиждане!" << endl;
            }
            break;
        }
        default:
        {
            cout << "Невалиден избор" << endl;
            break;
        }
        }

    } while (choice != 'y');

    save(athlets, currontSize);

    return 0;
}

int in(Athlete athlets[], int currontSize, int maxSize)
{
    srand(time(0));
    int size = 0;
    do {
        cout << "Enter value for size from 1 to " << maxSize - currontSize;
        cin >> size;
    } while (size > maxSize - currontSize);
    
    
    for (int i = currontSize; i < size + currontSize; i++)
    {
        cout << "Enter name: ";
        //cin.getline(athlets[i].name, 50);
        getline(cin, athlets[i].name);
        for (int j = 0; j < 5; j++)
        {
            athlets[i].rating[j] = 30 - rand() % 11;
        }
    }

    return currontSize + size;
}

void out(Athlete athlets[], int size)
{
    for (int i = 0; i < size; i++)
    {
        out(athlets[i]);
    }
}

void out(Athlete athlets)
{
    cout << "Name: " << athlets.name << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << "Rating " << j + 1 << " "
            << athlets.rating[j] << endl;
    }
    cout << "Avg: " << avg(athlets.rating, 5) << endl;
}

int max(Athlete athlets[], int size)
{
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (avg(athlets[i].rating, 5) > avg(athlets[index].rating, 5))
        {
            index = i;
        }
    }

    return index;
}

int min(Athlete athlets[], int size)
{
    int index = 0;
    for (int i = 0; i < 5; i++)
    {
        if (avg(athlets[i].rating, 5) < avg(athlets[index].rating, 5))
        {
            index = i;
        }
    }

    return index;
}

void sort(Athlete athlets[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (avg(athlets[j].rating, 5) < avg(athlets[j + 1].rating, 5))
            {
                Athlete temp = athlets[j];
                athlets[j] = athlets[j + 1];
                athlets[j + 1] = temp;
            }
        }
    }
}

double avg(int rating[], int size)
{
    double sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + rating[i];
    }

    return sum / size;
}

void save(Athlete athletes[], int length)
{
    fstream fp;
    fp.open("athlete.txt", ios::out);

    for (int i = 0; i < length; i++)
    {
        fp << athletes[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            fp << athletes[i].rating[j] << endl;
        }
    }

    fp.close();
}

int read(Athlete athletes[])
{
    fstream fp;
    fp.open("athlete.txt",  ios::in);
    int length = 0;
    while (!fp.eof()) {
        getline(fp, athletes[length].name);
        for (int j = 0; j < 5; j++)
        {
            fp >> athletes[length].rating[j];
        }
        fp.ignore();
        length++;
    }

    fp.close();

    return length;
}