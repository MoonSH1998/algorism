#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	n %= 1000000007;
	int a = 100000000000 / 2;
	long long ans = (((n * (n - 1)) / 2 + n) * 3) % 1000000007;
	cout << ans;

	return 0;
}