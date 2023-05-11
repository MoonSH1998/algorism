#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 != 0)
        {
            cout << i;
        }
        else
        {
            cout << "X";
        }
    }

    return 0;
}