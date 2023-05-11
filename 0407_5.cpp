#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string a("I study C++");
    int length = a.length();
    int size = a.size();
    int capacity = a.capacity();

    cout << length << endl;
    cout << size << endl;
    cout << capacity << endl;
    return 0;
}