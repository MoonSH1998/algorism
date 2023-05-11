#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int a[10] = {1, 2, 3, 14, 5, 6, 7, 8, 9, 10};

    sort(a, a + 10);

    for (int i = 0; i < 10; i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}