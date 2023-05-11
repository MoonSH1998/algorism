#include <iostream>
using namespace std;

class CPoint
{
private:
    int x;
    int y;

public:
    void SetXY(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main(void)
{
    int sum;
    cout << "필요한 객체의 수는 ? ";
    cin >> sum;
    CPoint *p;
    p = new CPoint[sum];

    for (int i = 0; i < sum; i++)
    {
        p[i].SetXY(i + 1, i + 1);
        p[i].print();
    }
    delete[] p;
    return 0;
}
