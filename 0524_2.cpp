#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, left, right, search;

	cin >> n >> m;
	int temp = 1;

	for (int i = 0; i < m; i++)
	{
		cin >> search;
		left = temp - search;
		if (left < 0)
		{
			left += n;
		}
		right = search - temp;
		if (right < 0)
		{
			right += n;
		}
		cout << min(left, right) << " ";
		temp = search;
	}
	return 0;
}