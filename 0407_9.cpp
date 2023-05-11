#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string e = "I love C++";
    int index = e.find("love");
    cout << index << endl;
    index = e.find("C#");
    cout << index << endl;
    index = e.find('v');
    cout << index << endl;
    return 0;
}