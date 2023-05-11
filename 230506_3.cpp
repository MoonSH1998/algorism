#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[500001];
	int n, m, temp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		a[i] = temp;
	}

	sort(a, a + n);

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		if (binary_search(a, a + n, temp))
		{
			printf("1 ");
		}
		else
			printf("0 ");
	}

	return 0;
}
