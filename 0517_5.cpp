#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, c;
	vector<long long> v1;
	vector<long long> v2;
	cin >> n >> k >> c;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v1.push_back(a);
	}
	for (int i = 0; i < k; i++)
	{
		int a;
		cin >> a;
		v2.push_back(a);
	}
	sort(v1.begin(), v1.end());
	string ans = "no";
	for (int i = 0; i < v2.size(); i++)
	{
		if (binary_search(v1.begin(), v1.end(), v2[i]))
			c--;
		if (c == 0)
			ans = "yes";
	}
	cout << ans;

	return 0;
}