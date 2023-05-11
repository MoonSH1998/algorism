#include <iostream>

using namespace std;

int arr[2001][2001];
int arrS[2001][2001];
int d;
int go(int depth, int index)
{
	if (depth == d)
		return 0;
	if (arrS[depth][index] != 0)
		return arrS[depth][index];
	arrS[depth][index] = arr[depth][index];
	arrS[depth][index] += max(go(depth + 1, index), go(depth + 1, index + 1));
	return arrS[depth][index];
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> d;
	for (int i = 0; i < d; i++)
	{
		for (int k = 0; k < i + 1; k++)
		{
			char c;
			cin >> c;
			arr[i][k] = c;
			arr[i][k] -= 64;
		}
	}
	cout << go(0, 0);
	return 0;
}
