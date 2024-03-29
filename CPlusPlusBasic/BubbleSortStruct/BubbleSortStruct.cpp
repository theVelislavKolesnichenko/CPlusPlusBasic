﻿#include <iostream>
#include <time.h>
using namespace std;

struct Point {
    double x, y;
    char symbol;
};

struct Line {
     Point start, end;
};

void printPoint(Point point);
Point enterPoint();
Line enterLine();
void enterLines(Line line[], int start, int size);
int enterLine(Line  line[], int i);
void printLine(Line line);
void printLines(Line line[], int size);
double lineLength(Line line);
void sortLines(Line line[], int size);
double random(double min, double max);
char randomSymbol();

int main()
{
    const int size = 10;
    Line line[size];

    enterLines(line, 0, size);
    
    printLines(line, size);

    sortLines(line, size);

    printLines(line, size);
}

void enterLines(Line line[], int start, int size)
{
    //[-65;74]
    srand(time(0));
    for (int i = start; i < size; i++)
    {
        enterLine(line, i);
    }
}


int enterLine(Line line[], int i)
{
    double min = -65;
    double max = 74;

    line[i].start.symbol = randomSymbol();
    line[i].start.x = random(min, max);
    line[i].start.y = random(min, max);

    line[i].end.symbol = randomSymbol();
    line[i].end.x = random(min, max);
    line[i].end.y = random(min, max);

    return i+1;
}

char randomSymbol()
{
    char min = 'A';
    char max = 'Z';
    return (char)(min + (rand() % (max - min + 1)));
}

double random(double min, double max) 
{
    return min + (((double)rand() / RAND_MAX) * (max - min));
}

void printLines(Line line[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        cout << "#:" << i << " ";
        printLine(line[i]);
        cout << endl;
    }
    cout << endl;
}

double lineLength(Line line)
{
    return sqrt(
        pow((line.start.x - line.end.x), 2) +
        pow((line.start.y - line.end.y), 2));
}

void sortLines(Line line[], int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int k = 0; k < size - 1 - i; k++)
        {
            if (lineLength(line[k]) > lineLength(line[k + 1]))
            {
                Line temp = line[k];
                line[k] = line[k + 1];
                line[k + 1] = temp;
            }
        }
    }
}

void printPoint(Point point)
{
    cout << "Point " << point.symbol << " (" << point.x
        << "; " << point.y << ")";
}

Point enterPoint()
{
    cout << "Enter coordinate.X and Y: \n";
    Point point;
    cout << "Point value: ";
    cin >> point.symbol;
    cin >> point.x >> point.y;

    return point;
}

Line enterLine()
{
    Line line;
    cout << "Enter Line with point A with: \n";
    line.start = enterPoint();

    cout << "and point B with: \n";
    line.end = enterPoint();

    return line;
}

void printLine(Line line)
{
    cout << "Line[";
    printPoint(line.start);
    cout << ", ";
    printPoint(line.end);
    cout << "] -> " << lineLength(line);
}
