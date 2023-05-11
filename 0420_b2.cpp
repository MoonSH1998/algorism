#include <iostream>

using namespace std;
int a[15][15] = {};

int check(int x, int y)
{
    if (x == 0)
    {
        return y;
    }
    else if (y == 1)
    {
        return 1;
    }
    else
    {
        if (a[x][y] != 0)
        {
            return a[x][y];
        }
        else
        {
            return a[x][y] = check(x, y - 1) + check(x - 1, y);
        }
    }
    return -1;
}
int main(void)
{
    int cnt, x, y;
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        {
            cin >> x >> y;
            a[x][y] = check(x, y);
        }
        cout << a[x][y] << endl;
    }

    return 0;
}