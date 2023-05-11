#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	// 5의 약수의개수만큼 나올것.
	// 9의 경우 5가 몇번 나올까 -> 1
	// 30의 경우 5가 몇번 나올까

	int n, i;
	int sum = 0;
	double k = 5;
	i = 2;

	cin >> n;

	while (pow(5, i) <= n)
	{

		k = pow(5, i);
		sum += n / k;

		i++;
	}

	int n5 = n / 5;

	cout << n5 + sum << endl;

	return 0;
}