#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int arr[1000000];
	vector<int> v;
	int n;
	int count = 0;
	int max = 0;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> n;
		if (n > max)
		{
			max = n;
		}
		v.push_back(n);
	}

	for (int i = 0; i < max; i++)
	{
		arr[i] = 0;
	}

	for (int i = 2; i <= 2 * max; i++)
	{
		for (int j = i + i; j <= max; j += i)
		{
			if (arr[j] != 1)
			{
				arr[j] = 1;
			}
		}
	}

	while (v.size() > 0)
	{

		n = v[0];
		for (int t = n / 2; t >= 2; t--)
		{
			if (arr[t] == 0 && arr[n - t] == 0)
			{
				cout << t << " " << n - t << endl;
				// printf("%d %d\n", t, n - t);
				break;
			}
		}

		v.erase(v.begin() + 0);
	}

	return 0;
}