#include <iostream>
#include <utility>
#include <string>

using namespace std;

void same(pair<int, string> a, pair<int, string> b)
{
    if (a == b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}

void comp(pair<int, string> a, pair<int, string> b)
{
    if (a < b)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
int main(void)
{
    pair<int, string> p1 = make_pair(1, "apple");
    pair<int, string> p2 = make_pair(3, "bandnd");
    pair<int, string> p3 = make_pair(1, "apple");

    cout << "p1.first :" << p1.first << endl;
    cout << "p1.second :" << p1.second << endl;
    cout << endl;

    cout << "p1 == p2 ?";
    same(p1, p2);
    cout << "p1 == p3 ?";
    same(p1, p3);
    cout << endl;

    cout << "p1 < p2 ?";
    comp(p1, p2);
    cout << "p1 < p3 ? ";
    comp(p1, p3);
    return 0;
}