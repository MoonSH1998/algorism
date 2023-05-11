#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	cin >> k;
	if (k % 4 != 0)
	{
		cout << k / 2 + 1;
	}
	else
		cout << (k - 1) / 2 + 1;

	return 0;
}