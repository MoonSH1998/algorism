#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a = "hello";
    for (int i = 0; i < a.length(); i++)
        a[i] = toupper(a[i]);
    cout << a << endl;
    for (int i = 0; i < a.length(); i++)
        a[i] = tolower(a[i]);
    cout << a << endl;
    if (isdigit(a[0]))
        cout << "숫자" << endl;
    else if (isalpha(a.at(0)))
        cout << "문자" << endl;
    return 0;
}