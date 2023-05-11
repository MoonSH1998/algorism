#include <iostream>
using namespace std;

class CArray
{
private:
    int *pary;
    int count;

public:
    CArray(int co)
    {
        count = co;
        pary = new int[count];
    }
    int GetCount()
    {
        return count;
    }
    void SetValue(int a, int b)
    {
        pary[a] = b;
    }
    void Print()
    {
        for (int i = 0; i < count; i++)
        {
            cout << pary[i] << endl;
        }
    }
    ~CArray()
    {
        cout << "소멸자 호출 " << endl;
        delete[] pary;
    }
};

int main(void)
{
    CArray ary(5);
    for (int i = 0; i < ary.GetCount(); i++)
        ary.SetValue(i, i + 1);
    ary.Print();
    return 0;
}