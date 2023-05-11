#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int a[9];
    int max[2] = {0, 0};

    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (a[i] > max[0])
        {
            max[0] = a[i];
            max[1] = i + 1;
        }
    }

    cout << max[0];
    cout << endl;
    cout << max[1];
    cout << endl;

    return 0;
}