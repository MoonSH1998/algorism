#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[1000001] = {0};
	long long min, max;
	cin >> min >> max;

	for (long long i = 2; i * i <= max; i++)
	{
		long long k = i * i;
		long long t = min / k;
		while (k * t <= max)
		{
			if (k * t >= min)
				a[max - k * t] = 1;
			t++;
		}
	}
	int cnt = 0;
	for (int i = 0; i <= max - min; i++)
	{
		if (a[i] == 0)
			cnt++;
	}

	cout << cnt;

	return 0;
}
