#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int arr[11][11];
int tempI[11] = {-10};
int tempJ[11] = {0};
int answer[11];
int ans = 0;

void check_next(int c, int score)
{
	if (c == 11)
	{
		if (score > ans)
		{
			copy(tempI, tempI + 11, answer);
			ans = score;
			return;
		}
	}
	for (int i = 0; i < 11; i++)
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

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cin >> arr[i][j];
		}
	}
	int c = 0;
	int score = 0;

	check_next(c, score);

	cout << ans << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << answer[i] + 1 << " ";
	}

	return 0;
}
