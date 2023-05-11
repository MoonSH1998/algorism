#include <iostream>

using namespace std;

int main(void)
{
	int n, temp;
	long long m, sum = 0, max = 1;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum -= temp;
		if (temp > max)
			max = temp;
	}
	sum += max * n;
	if (sum > m)
		cout << "No way!";
	else
		cout << (m - sum) / n + max;

	return 0;
}