#include <iostream>
#include <algorithm>
using namespace std;
// bool search(long long f, long long s)
// {
// 	bool k = true;
// 	//공약수 찾기
// 	for (long long i = 2; i <= f || i <= s; i++)
// 	{
// 		if (f % i == 0 && s % i == 0)
// 		{
// 			k = false;
// 		}
// 	}
// 	return k;
// }
bool gcd(long long a, long long b)
{
	if (a < b)
	{
		swap(a, b);
	}
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	if (a == 1)
		return true;
	else
		return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int ans = 0;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		pair<long long, long long> a;
		cin >> a.first >> a.second;
		if (gcd(abs(a.first), abs(a.second)))
		{
			ans++;
		}
	}
	cout << ans;
	return 0;
}