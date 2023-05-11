#include <iostream>
using namespace std;

void hanoi(int n, int from, int mid, int to)
{
	if (n == 1)
	{
		cout << n << " " << to << endl;
		return;
	}
	else
	{
		hanoi(n - 1, from, to, mid);
		cout << n << " " << to << endl;
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
	{
		mid = 3;
		to = 2;
	}
	else
	{
		mid = 2;
		to = 3;
	}
	hanoi(n, 1, mid, to);
	return 0;
}