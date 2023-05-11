#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, max, a1, a2, b1, b2, ans, a_cnt = 0, b_cnt = 0;

	vector<int> a;
	vector<int> ansA;
	vector<int> b;
	vector<int> ansB;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> max;
		a.push_back(max);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> max;
		b.push_back(max);
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++)
	{
		a_cnt = 0;
		ans = 0;
		for (int a1 = a[i] - 2; a1 <= a[i] + 2; a1++)
		{
			int t = i + 1;
			a_cnt = 0;
			ans = 0;
			while (a_cnt != -1)
			{
				if (t > n - 1)
				{
					ans = a_cnt;
					a_cnt = -1;
				}
				else if (a1 - a[t] >= -4)
				{
					a_cnt++;
					t++;
				}
				else
				{
					ans = a_cnt;
					a_cnt = -1;
				}
			}
			if (a_cnt < 0)
				a_cnt = ans;
			t = i - 1;

			while (a_cnt != -1)
			{
				if (t < 0)
				{
					ansA.push_back(a_cnt);
					a_cnt = -1;
				}
				else if (a1 - a[t] <= 4)
				{
					a_cnt++;
					t--;
				}
				else
				{
					ansA.push_back(a_cnt);
					a_cnt = -1;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		int t = i + 1;
		b_cnt = 0;
		ans = 0;
		for (int b1 = b[i] - 2; b1 <= b[i] + 2; b1++)
		{
			cout << b1 << ".. ";
			while (b_cnt != -1)
			{
				if (t > n - 1)
				{
					ans = b_cnt;
					b_cnt = -1;
				}
				else if (b1 - b[t] >= -4)
				{
					b_cnt++;
					t++;
				}
				else
				{
					ans = b_cnt;
					b_cnt = -1;
				}
			}
			if (b_cnt < 0)
				b_cnt = ans;
			t = i - 1;

			while (b_cnt != -1)
			{
				if (t < 0)
				{
					ansB.push_back(b_cnt);
					b_cnt = -1;
				}
				else if (b1 - b[t] <= 4)
				{
					b_cnt++;
					t--;
				}
				else
				{
					ansB.push_back(b_cnt);
					b_cnt = -1;
				}
			}
			cout << ansB[ansB.size()] << endl;
		}
	}

	int maxA = 0, maxB = 0, ansN1, ansN2;
	for (int i = 0; i < n * 5; i++)
	{
		cout << ansA[i] << ",  ";
		if (maxA < ansA[i])
		{
			ansN1 = i;
			maxA = ansA[i];
		}
		if (maxB < ansB[i])
		{
			ansN2 = i;
			maxB = ansB[i];
		}
	}

	cout << ansN1 << endl
		 << ansN2 << endl;

	cout << ansN1 << endl
		 << ansN2 << endl;
	cout << a[ansN1 / 5] + (ansN1 / 5) - 2 << b[ansN2 / 5] + (ansN2 / 5) - 2 << endl;
	if (a[ansN1] > b[ansN2])
	{
		cout << "good";
	}
	else
	{
		cout << "bad";
	}

	return 0;
}