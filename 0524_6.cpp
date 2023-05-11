#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int tempI[11];
	int tempJ[11];
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[11][11];
	int max[3];
	max[0] = -10;

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cin >> a[i][j];
		}
		tempI[i] = 0;
		tempJ[i] = 0;
	}

	for (int j = 0; j < 11; j++)
	{
		for (int i = 0; i < 11; i++)
		{
			if (tempI[i] == 0 && tempJ[j] == 0)
			{
				if (max[0] < a[i][j])
				{
					max[0] = a[i][j];
					max[1] = i;
					max[2] = j;
				}
			}
		}
		tempI[max[1]] = -1;
		tempJ[max[2]] = -1;
		cout << max[1] + 1 << " ";
		max[0] = -10;
	}

	return 0;
}
