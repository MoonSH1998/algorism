#include <iostream>
#include <algorithm>

int n, s, h, ans;
int seq[22];

using namespace std;

void solve(int cur, int sum)
{
	if (cur == n - 1)
	{
		ans += (sum == s);
		return;
	}
	cout << "cur : " << cur << "sum :" << sum;
	solve(cur + 1, sum);
	solve(cur + 1, sum + seq[cur]);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> s >> h;
	for (int i = 0; i < n - 1; ++i)
	{
		cin >> seq[i];
	}
	solve(0, h);
	cout << ans;

	return 0;
}