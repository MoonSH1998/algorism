#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a("I love C++");
    a.erase(0, 7);
    cout << a << endl;
    a = "C++";
    a.clear();
    cout << a << endl;
    return 0;
}