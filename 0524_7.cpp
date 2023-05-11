#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int sum_i[11]; // 행 별 더한값
	int max_i[11]; // 행 별 최댓값
	int no[11];

	int a[11][11];

	for (int i = 0; i < 11; i++)
	{
		no[i] = 0;
		max_i[i] = -5;
		sum_i[i] = 0;
		for (int j = 0; j < 11; j++)
		{
			cin >> a[i][j];
			sum_i[i] += a[i][j];
			if (max_i[i] < a[i][j])
			{
				max_i[i] = a[i][j];
			}
		}
	}

	vector<int> v;
	int cnt = 0;
	while (cnt <= 11)
	{
		int temp_max = -10;
		int temp_i = -1;
		for (int i = 0; i < 11; i++)
		{
			if (no[i] == 0)
			{
				if (temp_max < sum_i[i] - max_i[i])
				{
					temp_max = sum_i[i] - max_i[i];
					temp_i = i;
				}
			}
		}
		no[temp_i] = cnt;
		cnt++;
	}

	for (int i = 0; i < 11; i++)
	{
		cout << no[i] << " ";
	}

	return 0;
}
