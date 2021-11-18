#include <iostream>
using namespace std;

struct Point {
    double x, y;
    char A;
};

struct Line {
    Point A, B;
};

void printPoint(Point point);
Point enterPoint();
Line enterLine();
void printLine(Line line);
double lineLength(Line line);

int main()
{
    Line line = enterLine();
    printLine(line);
    cout << " length of line is " << lineLength(line) << endl;

    cout << sizeof(Point) << endl;
    cout << sizeof(line) << endl;
}

void printPoint(Point point)
{
    cout << "Point(" << point.x << "; " << point.y << ")";
}

Point enterPoint()
{
    cout << "Enter coordinate.X and Y: \n";
    Point point;
    cout << "Point value: ";
    cin >> point.A;
    cin >> point.x >> point.y;

    return point;
}

Line enterLine()
{   
    Line line;
    cout << "Enter Line with point A with: \n";
    line.A = enterPoint();

    cout << "and point B with: \n";
    line.B = enterPoint();

    return line;
}

void printLine(Line line)
{
    cout << "Line[";
    printPoint(line.A);
    cout << ", ";
    printPoint(line.B);
    cout << "]";
}

double lineLength(Line line)
{
    return sqrt(pow(line.A.x - line.B.x, 2) + pow(line.A.y - line.B.y, 2));
}
