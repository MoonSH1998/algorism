#include <iostream>
#include <math.h>
using namespace std;
int prime(int num)
{
	if (num == 2)
		return 2;
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return i;
	}
	return -1;
}
int main()
{
	int ans;
	long long x;
	cin >> x;
	if (prime(x) == -1)
	{
		ans = 1;
	}
	else if (prime(x / prime(x)) == -1)
	{
		ans = 1;
	}
	else
	{
		ans = 0;
	}
	cout << ans;
	return 0;
}