#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string n1, n2;

    cin >> n1;
    cout << n1 << endl;

    while (getchar() != '\n')
        ;

    getline(cin, n2, '\n');

    cout << n2 << endl;

    return 0;
}