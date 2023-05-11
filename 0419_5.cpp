#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int k = c / (a - b);
    if ((c - a) % (a - b) != 0)
    {
        cout << (c - a) / (a - b) + 2;
    }
    else
    {
        cout << (c - a) / (a - b) + 1;
    }

    return 0;
}
