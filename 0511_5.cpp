#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string n;
	cin >> n;
	// ans[0] = 12가 먼저 나올 때의 첫 12 의 index
	// ans[1] = 21이 먼저 나올 때의 첫 21 의 index
	// ans[2] = 답인 경우 1 없을 때 0
	int ans[3] = {0};

	ans[0] = n.find("12");
	ans[1] = n.find("21");
	if (ans[0] == -1 || ans[1] == -1)
	{
		ans[2] = 0;
	}
	else if (ans[0] < ans[1])
	{
		for (int i = ans[0] + 1; i < n.length() - 1; i++)
		{
			if (n.at(i) == '2' && n.at(i + 1) == '1')
			{
				ans[2] = 1;
			}
		}
	}
	else
	{
		for (int i = ans[1] + 1; i < n.length() - 1; i++)
		{
			if (n.at(i) == '1' && n.at(i + 1) == '2')
			{
				ans[2] = 1;
			}
		}
	}
	if (ans[2] == 1)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	return 0;
}