#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int a[100000];
int n;
void binarySearch(int target);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int temp, m;

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
		binarySearch(temp);
	}

	return 0;
}

void binarySearch(int target)
{
	int left = 0;
	int right = n - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] == target)
		{
			printf("1\n"); // 원하는 값이 mid 위치에 있는 경우
			return;
		}
		else if (a[mid] < target)
		{
			left = mid + 1; // 중간값보다 오른쪽에 있는 경우
		}
		else
		{
			right = mid - 1; // 중간값보다 왼쪽에 있는 경우
		}
	}
	printf("0\n"); // 원하는 값이 배열에 없는 경우
	return;
}