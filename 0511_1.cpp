#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int check(int rr)
//*******!!! 중요
{
	if (rr & (rr - 1))
		return -1;
	else
		return 1;
}
int main(void)
{
	int n;
	cin >> n;
	int r[100];
	vector<int> ans;

	for (int i = 0; i < n; i++)
	{
		cin >> r[i];
	}

	for (int i = 0; i < n; i++)
	{

		if (check(r[i]) == -1)
		{
			ans.push_back(i + 1);
		}
	}
	cout << ans.size() << endl;

	std::vector<int>::iterator iter;
	for (iter = ans.begin(); iter != ans.end(); iter++)
	{
		std::cout << *iter << " ";
	}
	return 0;
}
