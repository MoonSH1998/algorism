#include <iostream>

using namespace std;
int a[41];
int fibonacci(int n)
{
    if (n == 0)
    {
        a[0] = 1;
        return 0;
    }
    else if (n == 1)
    {
        a[1] = 1;
        return 1;
    }
    else if (a[n] != 0)
    {
        return a[n];
    }
    else
    {
        return a[n] = fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0)
        {
            cout << "1 0";
            cout << endl;
        }
        else if (k == 1)
        {
            cout << "0 1";
            cout << endl;
        }
        else
        {
            fibonacci(k);
            cout << a[k - 1];
            cout << " ";
            cout << a[k];
            cout << endl;
        }
    }

    return 0;
}
