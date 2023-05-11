#include <iostream>
using namespace std;
int main(void)
{
    int x, y;
    y = 2;
    cin >> x;

    while (x >= y)
    {
        if (x % y == 0)
        {
            cout << y << endl;
            x = x / y;
        }
        else
        {
            y++;
        }
    }
    return 0;
}