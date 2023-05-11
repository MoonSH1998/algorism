#include <iostream>
using namespace std;
class CPoint
{
private:
    int x, y;

public:
    CPoint(int a, int b) : x(a), y(b) {}
    void Print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main(void)
{
    CPoint p1(3, 4);
    p1.Print();
    return 0;
}