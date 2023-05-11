#include <iostream>

using namespace std;

int main()
{

    int k;
    cin >> k;
    int n = k;
    int i = 0;
    while (n > i)
    {
        n -= i;
        i++;
    }
    if (i % 2 == 0)
    {
        cout << n;
        cout << "/";
        cout << i - n + 1;
    }
    else
    {
        cout << i - n + 1;
        cout << "/";
        cout << n;
    }
    return 0;
}
