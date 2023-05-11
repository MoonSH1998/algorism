#include <iostream>

using namespace std;

int main(void)
{

	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	long long ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		ans *= 3;
	}
	cout << 3 * (ans - 1) / 2;

	return 0;
}
