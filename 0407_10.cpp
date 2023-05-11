#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string f("I love C++");
    char ch1 = f.at(7);
    char ch2 = f[7];
    cout << ch1 << endl;
    cout << ch2 << endl;
    return 0;
}