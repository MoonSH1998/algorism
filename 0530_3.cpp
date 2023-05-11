#include <iostream>
#include <vector>
using namespace std;

int c[1000000] = {0};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	cin >> n;
	c[1] = 1;
	c[2] = 1;
	int i = 3;
	if (n < 3)
	{
		cout << c[n];
		return 0;
	}
	long long temp;
	while (i <= n)
	{
		c[i] = c[i - 2] + c[i - 1];
		c[i] %= (1000000007);
		i++;
	}

	cout << c[n];
	return 0;
}