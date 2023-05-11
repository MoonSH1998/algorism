#include <iostream>

using namespace std;

int main(void)
{
    int h, w, n, c;
    cin >> c;

    for (int i = 0; i < c; i++)
    {
        cin >> h >> w >> n;
        if (n == 1)
        {
            cout << "101";
        }
        else if (n % h == 0)
        {
            cout << h;
            if ((n / h) > 9)
                cout << n / h;
            else
                cout << "0" << n / h;
        }
        else
        {
            cout << n % h;
            if ((n / h) >= 9)
            {
                cout << n / h + 1;
            }
            else
            {
                cout << "0" << n / h + 1;
            }
        }
        cout << endl;
    }

    return 0;
}