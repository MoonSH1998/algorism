#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, temp;
	int ans = 0;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			// j부터 i 까지
			if (v[i] > v[j])
			{
				ans = ans < v[i] * (m / v[j]) + m % v[j] ? v[i] * (m / v[j]) + m % v[j] : ans;
			}
		}
	}
	if (ans == 0)
		ans = m;
	cout << ans;
	return 0;
}