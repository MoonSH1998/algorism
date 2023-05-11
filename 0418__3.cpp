#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int count = 0;
    if (str.empty())
    {
        cout << "0";
        return 0;
    }
    int len = str.length();
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == 'c')
        {
            if (str[i + 1] == '=')
            {
                len--;
                i++;
            }
            else if (str[i + 1] == '-')
            {
                len--;
                i++;
            }
        }
        else if (str[i] == 'd')
        {
            if (str[i + 1] == 'z')
            {
                if (str[i + 2] == '=')
                {
                    len -= 2;
                    i += 2;
                }
            }
            else if (str[i + 1] == '-')
            {
                len--;
                i++;
            }
        }

        else if (str[i] == 'l')
        {
            if (str[i + 1] == 'j')
            {
                len--;
                i++;
            }
        }
        else if (str[i] == 'n')
        {
            if (str[i + 1] == 'j')
            {
                len--;
                i++;
            }
        }
        else if (str[i] == 's')
        {
            if (str[i + 1] == '=')
            {
                len--;
                i++;
            }
        }
        else if (str[i] == 'z')
        {
            if (str[i + 1] == '=')
            {
                len--;
                i++;
            }
        }
    }
    cout << len;
    return 0;
}