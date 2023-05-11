#include <iostream>

using namespace std;
int main(void)
{
	int cnt;
	cin >> cnt;
	long x[cnt];
	long y[cnt];
	long max[3] = {0, 0, 0};
	for (int i = 0; i < cnt; i++)
	{
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < cnt; i++)
	{
		for (int j = i + 1; j < cnt; j++)
		{
			long thisLen = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);

			if (max[0] < thisLen)
			{
				max[0] = thisLen;
				max[1] = i;
				max[2] = j;
			}
		}
	}
	cout << max[1] + 1 << " " << max[2] + 1;

	return 0;
}
