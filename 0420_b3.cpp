#include <iostream>

using namespace std;
int main(void)
{
    int x, ans;
    ans = 0;
    cin >> x;
    if (x % 5 == 0)
    {
        ans = x / 5;
    }
    else
    {
        for (int i = x / 5; i >= 0; i--)
        {
            for (int k = 1; k * 3 + i * 5 <= x && ans == 0; k++)
            {
                if ((x - 5 * i) % 3 == 0)
                {
                    ans = (x - i * 5) / 3 + i;
                }
            }
        }
    }
    if (ans != 0)
    {
        cout << ans;
    }
    else
    {
        cout << -1;
    }

    return 0;
}