#include <iostream>
using namespace std;

class CCalc
{
private:
    int result;

public:
    CCalc(int a = 0)
    {
        result = a;
    }

    void Plus(int a)
    {
        result += a;
    }

    void Minus(int a)
    {
        result -= a;
    }
    void Print()
    {
        cout << "결과 : " << result << endl;
    }
};

int main(void)
{
    CCalc calc1;
    CCalc calc2(100);
    calc1.Plus(5);
    calc1.Minus(2);
    calc1.Print();

    calc2.Plus(100);
    calc2.Minus(50);
    calc2.Print();

    return 0;
}
