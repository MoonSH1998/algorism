#include <iostream>

using namespace std;
int main(void)
{
	long n, k;
	cin >> n >> k;

	long cnt = k / n;
	if (k % n == 0)
	{
		cout << cnt;
	}
	else
	{
		cout << cnt + 1;
	}

	return 0;
}
