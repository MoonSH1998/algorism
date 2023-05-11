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
        cout << "생성자: ";
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
    CPoint p1(1, 1);
    CPoint p2(2, 2);
    CPoint p3(3, 3);
    CPoint p4(4, 4);
    return 0;
}
//소멸자는 생성자의 역순으로