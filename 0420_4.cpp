#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<pair<int, string> > v;
    v.push_back(pair<int, string>(3, "mit"));
    v.push_back(pair<int, string>(6, "cording"));
    v.push_back(pair<int, string>(1, "school"));
    v.push_back(pair<int, string>(4, "songdo"));
    v.push_back(pair<int, string>(2, "banana"));
    v.push_back(pair<int, string>(2, "apple"));

    cout << "정렬 전" << endl;
    vector<pair<int, string> >::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
        cout << "[" << iter->first << "," << iter->second << "]" << endl;

    cout << endl;
    sort(v.begin(), v.end());

    cout << "정렬 후" << endl;
    for (iter = v.begin(); iter != v.end(); iter++)
        cout << "[" << iter->first << iter->second << "]" << endl;

    return 0;
}