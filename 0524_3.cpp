#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, t, s, d;
	pair<int, int> ans;
	ans.first = 10000;
	ans.second = 10000;
	cin >> n >> t;

	for (int i = 0; i < n; i++)
	{
		cin >> s >> d;

		int k = 0;
		while (s + d * k <= t + 13)
		{
			//정류장 버스 도착 시간
			if ((s + d * k >= t + 12) && ans.first > s + d * k)
			{
				ans.first = s + d * k;
				ans.second = i + 1;
				break;
			}
			k++;
		}
	}
	cout << ans.second;

	return 0;
}