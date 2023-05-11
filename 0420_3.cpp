#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> v;
    v.push_back(21);
    v.push_back(32);
    v.push_back(53);
    v.push_back(64);
    v.push_back(15);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    //반복자 iterator를 이용한 반복
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    return 0;
}