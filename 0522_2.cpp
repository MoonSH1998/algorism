#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long f[1000000] = {0};
long long fi(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		if (f[n] != 0)
			return f[n];
		else
		{
			return f[n] = fi(n - 1) + fi(n - 2);
		}
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cout << fi(100);

	return 0;
}