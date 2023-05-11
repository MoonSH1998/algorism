#include <iostream>
using namespace std;
int main(void)
{
	int min, max;
	cin >> min >> max;
	bool a[1000001];
	// 0는 소수
	a[0] = 1;
	a[1] = 1;

	int i = 2;
	int t = 1;
	while (i <= max)
	{
		for (int k = 2; k * i < max + 1; k++)
		{
			if (a[i * k] == 0)
			{
				a[i * k] = 1;
			}
		}
		i++;

		while (i <= max)
		{
			if (a[i] == 1)
			{
				i++;
			}
			else
			{
				break;
			}
		}
	}
	for (int j = min; j <= max; j++)
	{
		if (a[j] == 0)
		{
			printf("%d\n", j);
		}
	}
	return 0;
}