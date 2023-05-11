#include <iostream>
using namespace std;
class CPoint
{
private:
    int x, y;

public:
    CPoint(int a, int b)
    {
        x = a;
        y = b;
        cout << "생성자";
        Print();
    }
    ~CPoint()
    {
        cout << "소멸자: ";
        Print();
    }
    void Print() { cout << "(" << x << "," << y << ")" << endl; }
};
int main(void)
{
    CPoint ary[5] = {CPoint(1, 1),
                     CPoint(2, 2),
                     CPoint(3, 3),
                     CPoint(4, 4),
                     CPoint(5, 5)};
    return 0;
}