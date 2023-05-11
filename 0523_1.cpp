#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, ans, temp;

	cin >> n >> m;

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		ans = upper_bound(v.begin(), v.end(), temp) - v.begin();
		ans -= (lower_bound(v.begin(), v.end(), temp) - v.begin());

		cout << ans + " ";
		ans = 0;
	}

	return 0;
}