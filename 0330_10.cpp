#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string *p = new string("C++");
    cout << *p << endl;

    p->append("Great!!");
    cout << *p;

    delete p;
    return 0;
}