#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    bool space = false;
    if (str.empty())
    {
        cout << "0";
        return 0;
    }
    int len = str.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '=')
                count++;
            else if (str[i + 1] == '-')
                count++;
        }

        else if (str[i] == 'l')
        {
            if (str[i + 1] == 'j')
                count++;
        }
        else if (str[i] == 'n')
        {
            if (str[i + 1] == 'j')
                count++;
        }
        else if (str[i] == 's')
        {
            if (str[i + 1] == '=')
                count++;
        }
        else if (str[i] == 'z')
        {
            if (i == 0 || str[i - 1] != 'd')
                if (str[i + 1] == '=')
                    count++;
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == 'z')
            {
                if (str[i + 2] == '=')
                {
                    count++;
                }
            }
            else if (str[i + 1] == '-')
                i++;
            count++;
        }
    }
    cout << len - count;
    return 0;
}