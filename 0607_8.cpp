#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int R, C;
int arr[MAX][MAX];
int d[MAX][MAX];
int start_x, start_y;
int x_[4] = {-1, 1, 0, 0};
int y_[4] = {0, 0, -1, 1};
int min_ = 9999;
queue<pair<int, int> > q;

void bfs(int start_x, int start_y)
{

	q.push(make_pair(start_x, start_y));
	d[start_x][start_y] = 1;
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int xx = x + x_[i];
			int yy = y + y_[i];
			if (arr[xx][yy] == 3)
			{
				if (min_ > d[x][y])
				{
					min_ = d[x][y];
				}
			}
			if ((0 <= xx && xx < R) && (0 <= yy && yy < C) && d[xx][yy] == 0 && arr[xx][yy] == 1)
			{
				q.push(make_pair(xx, yy));
				d[xx][yy] = d[x][y] + 1;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> R >> C;
	for (int i = 0; i < R; ++i)
	{
		for (int k = 0; k < C; k++)
		{
			char a;
			cin >> a;
			if (a == '.')
				arr[i][k] = 1;
			else if (a == '&')
			{
				arr[i][k] = 1;
				start_x = i;
				start_y = k;
			}
			else if (a == '@')
			{
				arr[i][k] = 3;
			}
		}
	}
	bfs(start_x, start_y);
	if (min_ == 9999)
	{
		cout << -1;
	}
	else
	{
		cout << min_ - 1;
	}
}