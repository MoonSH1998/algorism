#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[10][10];
int tempI[10] = {-10};
int tempJ[10] = {0};
int answer[10];
int ans = 0;

int n;

void check_next(int c, int score)
{
	if (c == n)
	{
		if (score > ans)
		{
			copy(tempI, tempI + 10, answer);
			ans = score;
			return;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (tempJ[i] == 0)
		{
			tempI[c] = i; // c행 i열 선택
			tempJ[i] = 1;
			check_next(c + 1, score + arr[c][i]);

			tempJ[i] = 0;
		}
	}
	return;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int c = 0;
	int score = 0;

	check_next(c, score);

	for (int i = 0; i < n; i++)
	{
		cout << answer[i] + 1 << " ";
	}
	cout << "최댓값: " << ans;

	return 0;
}
