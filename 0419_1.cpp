#include <iostream>
#include <string>
using namespace std;
int main()
{

    int a[26] = {};
    int count = 0;
    int ans = 1;
    int cnt;
    cin >> cnt;

    for (int j = 0; j <= cnt; j++)
    {
        string str;
        getline(cin, str);

        int len = str.length();
        for (int i = 0; i < str.length(); i++)
        {
            // cout << (int)str[i] - 97;
            int k = (int)str[i] - 97;

            if (a[k] == 0)
            {
                a[k] = 1;
                while (k == (int)str[i] - 97)
                {
                    i++;
                }
                i--;
            }
            else
            {
                ans = 0;
            }
        }
        count += ans;
        ans = 1;
        for (int t = 0; t < 26; t++)
            a[t] = 0;
    }
    cout << --count;

    return 0;
}