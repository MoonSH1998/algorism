
#include <iostream>
using namespace std;

int arr[20000];
int n;
int main()
{
	int count = 0;
	cin >> count;
	while (count > 0)
	{

		int cnt = 0;
		cin >> n;

		for (int i = 0; i < n; i++)
		{
			arr[i] = 0;
		}
		for (int i = 2; i <= 2 * n; i++)
		{
			if (arr[i] == 0)
			{
				arr[i] = 0;
			}	
			for (int j = i + i; j <= n; j += i)
			{
				if (arr[j] != 1)
				{
					arr[j] = 1;
				}
			}
		}
		for (int t = n / 2; t >= 2; t--)
		{
			if (arr[t] == 0 && arr[n - t] == 0)
			{
				printf("%d %d\n", t, n - t);
				break;
			}
		}
		count--;
	}
	return 0;
}