#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int a[10] = {17, 25, 67, 84, 90, 30, 55, 6, 9, 28};
    sort(a, a + 10);
    cout << "lower bound 55: " << *lower_bound(a, a + 10, 55) << endl;
    cout << "lower bound 80: " << *lower_bound(a, a + 10, 80) << endl;
    cout << "upper bound 55: " << *upper_bound(a, a + 10, 55) << endl;
    cout << "upper bound 80: " << *upper_bound(a, a + 10, 80) << endl;
}