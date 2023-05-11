#include <iostream>
using namespace std;

void hanoi(int n, int from, int mid, int to)
{
	if (n == 1)
	{
		printf("%d %d\n", n, to);
		return;
	}
	else
	{
		hanoi(n - 1, from, to, mid);
		printf("%d %d\n", n, to);
		hanoi(n - 1, mid, from, to);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, mid, to;
	cin >> n >> k;
	if (k == 2)
		hanoi(n, 1, 3, 2);
	else
		hanoi(n, 1, 2, 3);
	return 0;
}