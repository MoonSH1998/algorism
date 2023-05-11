#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, ans, min;
	min = 0;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ans;
		v.push_back(ans);
	}
	sort(v.begin(), v.end());
	ans = v[n - 1];

	for (int i = v.size() - 1; i >= 1; i--)
	{
		if (v[i] == v[i - 1])
		{
			min = v[i];
			cout << min << " " << ans;
			return 0;
		}
		else if (ans % v[i] != 0)
		{
			min = v[i];
			cout << min << " " << ans;
			return 0;
		}
	}

	if (min == 0)
	{
		min = 1;
	}
	cout << min << " " << ans;

	return 0;
}