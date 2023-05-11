#include <stdio.h>
#include <string.h>
char point[2001][2001];
int DT[2001][2001];
int ans, n;
int Search(int depth, int idx)
{
	if (depth >= n)
	{
		return 0;
	}
	if (DT[depth][idx] != -1)
	{
		return DT[depth][idx];
	}
	DT[depth][idx] = point[depth][idx] - 'A' + 1;
	int case1 = Search(depth + 1, idx);
	int case2 = Search(depth + 1, idx + 1);
	DT[depth][idx] += case1 > case2 ? case1 : case2;
	return DT[depth][idx];
}
int main(void)
{
	int i, j;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", point[i]);
		getchar();
	}
	memset(DT, -1, sizeof(DT));
	printf("%d", Search(0, 0));
	return 0;
}