#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string str;
	cin >> str;

	int ans = 0;

	for (int i = 0; i < str.length() - 1; i++)
	{
		if ((str[i]) > str[i + 1])
		{
			ans = i;
			break;
		}
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (i != ans)
			printf("%c", str[i]);
	}

	return 0;
}