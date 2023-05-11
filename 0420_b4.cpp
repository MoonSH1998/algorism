#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
    string x, y;
    int up = 0;
    cin >> x;
    cin >> y;

    int xx = x.size() - 1;

    int yy = y.size() - 1;

    int thisNum;
    string tmp_s = "";
    while (xx >= 0 || yy >= 0)
    {
        if (xx <= -1)
        {
            thisNum = (y[yy] - '0');
        }
        else if (yy <= -1)
        {
            thisNum = (x[xx] - '0');
        }
        else
        {
            thisNum = (x[xx] - '0') + (y[yy] - '0');
        }
        if (up == 1)
        {
            thisNum++;

            up = 0;
        }

        if (thisNum > 9)
        {
            up = 1;
            thisNum -= 10;
        }

        xx--;
        yy--;

        string s = to_string(thisNum);

        tmp_s = tmp_s + s;
    }
    if (up == 1)
        cout << up;
    string tmp_s_reversed;
    tmp_s_reversed.resize(tmp_s.size());
    copy(tmp_s.rbegin(), tmp_s.rend(), tmp_s_reversed.begin());
    cout << tmp_s_reversed << endl;

    return 0;
}