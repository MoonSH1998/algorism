#include <iostream>
#include <vector>
using namespace std;
int s[100001];
int main(void)
{
	int N, M, a, cnt = 0, start = 0;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &a);
		if (a == M)
		{
			cnt++;
		}
		else if (a > M)
		{
			start = i + 1;
		}
		else if (a < M)
		{
			for (int j = start; j <= i; ++j)
			{
				if (s[j] + a == M)
				{
					cnt++;
					start = j + 1;
				}
				else if (s[j] + a > M)
				{
					start = j + 1;
				}
				else if (s[j] + a < M)
				{
					s[j] += a;
				}
			}
		}
	}

	printf("%d", cnt);

	return 0;
}
