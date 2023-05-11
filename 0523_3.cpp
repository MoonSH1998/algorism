#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	if (n < 6)
	{
		int ans = 1;

		// n!구하기
		while (n > 0)
		{
			ans *= n;
			n--;
		}

		int answer = 0;

		//각 자리수 더하기 - 한 자리 수가 될 때까지
		do
		{
			while (ans > 0)
			{
				answer = answer + ans % 10;
				ans /= 10;
			}
		} while (answer > 10);
		cout << answer;
	}
	else
	{
		cout << 9;
	}

	return 0;
}