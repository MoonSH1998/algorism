#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, temp, x;
	cin >> n >> m;
	x = 0;
	vector<int> v;
	vector<int> vRe;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		x += (temp);
		x %= m;
		v.push_back(temp % m);
	}

	int max = 0;

	int ans[2] = {0, x};

	for (int i = 0; i < v.size() - 1; i++)
	{
		if (max == 2 * m - 2)
			break;

		ans[0] += v[i];
		ans[1] -= v[i];
		if (ans[1] < 0)
		{
			ans[1] += m;
		}
		if (max < (ans[0] % m + ans[1] % m))
		{
			max = (ans[0] % m + ans[1] % m);
		}
	}

	cout << max;
	return 0;
}