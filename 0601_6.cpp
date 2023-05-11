#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
	long long x, y;
	int cnt = 0;
	y = 2;
	cin >> x;

	while (x >= y)
	{
		if (x % y == 0)
		{
			cnt++;
			x = x / y;
		}
		else
		{
			y++;
		}

		if (cnt > 2)
		{
			cout << 0;
			return 0;
		}
	}
	if (cnt <= 2)
	{
		cout << 1;
	}
	return 0;
}