#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    if (n != 1)
    {
        n -= 1;
        int i = 1;
        while (n > 0)
        {
            cout << "뺀다.";
            n -= 6 * i;
            i++;
            count++;
        }
    }
    cout << count;
    return 0;
}
