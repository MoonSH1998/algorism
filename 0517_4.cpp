#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	int ans = 0;
	cin >> n >> m;
	if (m % n != 0)
	{
		ans = -1;
	}
	else
	{
		m = m / n;
		while (m % 2 == 0 || m % 3 == 0)
		{
			if (m % 2 == 0)
			{
				m = m / 2;
				ans++;
			}
			if (m % 3 == 0)
			{
				m = m / 3;
				ans++;
			}
		}
		}
	cout << ans;

	return 0;
}