#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	long long ans = 0;
	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		long long temp_;
		cin >> temp_;
		if (temp_ < 0 && ans > 0 && ans > sum)
		{
			sum = ans;
		}
		if (ans + temp_ <= 0 || ans <= 0)
		{
			ans = 0;
		}
		ans += temp_;
	}

	if (ans > sum)
	{
		sum = ans;
	}

	cout << sum;

	return 0;
}