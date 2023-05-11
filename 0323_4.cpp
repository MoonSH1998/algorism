#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    CPoint(int a, int b)
    {
        x = a;
        y = b;
    }

public:
    CPoint()
    {
        x = 0;
        y = 0;
    }

public:
    CPoint(int a)
    {
        x = a;
        y = a;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main(void)
{
    CPoint p1;
    CPoint p2(2);
    CPoint p3(3, 4);
    p1.print();
    p2.print();
    p3.print();

    return 0;
}
