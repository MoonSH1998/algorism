#include <iostream>
#include <string>
using namespace std;
int main(void)
{

	int same = 1;
	int cnt;
	string str;
	string str2;
	cin >> cnt;
	cin.ignore();
	int ans[1000];
	for (int j = 0; j < cnt; j++)
	{
		getline(cin, str);

		for (int i = 0; i < str.length() / 2; i++)
		{
			switch (str[i])
			{
			case 'b':
				if (str[str.length() - i - 1] != 'd')
				{
					same = 0;
				}
				break;
			case 'd':
				if (str[str.length() - i - 1] != 'b')
				{
					same = 0;
				}
				break;
			case 'p':
				if (str[str.length() - i - 1] != 'q')
				{
					same = 0;
				}
				break;
			case 'q':
				if (str[str.length() - i - 1] != 'p')
				{
					same = 0;
				}
				break;

			case 's':
				if (str[str.length() - i - 1] != 'z')
				{
					same = 0;
				}
				break;
			case 'z':
				if (str[str.length() - i - 1] != 's')
				{
					same = 0;
				}
				break;
			case 'i':
			case 'l':
			case 'm':
			case 'n':
			case 'o':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
				if (str[i] != str[str.length() - i - 1])
				{
					same = 0;
				}
				break;
			default:
				same = 0;
				break;
			}
		}
		if (same == 0)
		{
			ans[j] = 0;
		}
		else
		{
			ans[j] = 1;
		}
		same = 1;
	}
	for (int i = 0; i < cnt; i++)
	{
		if (ans[i])
		{
			cout << "mirror" << endl;
		}
		else
		{
			cout << "default" << endl;
		}
	}
	return 0;
}