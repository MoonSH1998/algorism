#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string b = "I love C++";
    string c = b.substr(2, 4);
    cout << c << endl;
    string d = b.substr(2);
    cout << d << endl;
    return 0;
}