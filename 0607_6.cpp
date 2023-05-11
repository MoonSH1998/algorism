#include <iostream>
#include <queue>
#define MAX 1001

using namespace std;

int R, C;
int arr[MAX][MAX];
int visited[MAX][MAX];
int dist[MAX][MAX];
int start_x, start_y;
int x_[4] = {-1, 1, 0, 0};
int y_[4] = {0, 0, -1, 1};
int min_ = MAX;
queue<pair<int, int> > q;

void bfs(int start_x, int start_y)
{
	visited[start_x][start_y] = 1;
	q.push(make_pair(start_x, start_y));
	dist[start_x][start_y] = 0;

	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int xx = x + x_[i];
			int yy = y + y_[i];
			if (arr[xx][yy] == 3)
			{
				if (min_ > dist[x][y])
				{
					min_ = dist[x][y];
				}
			}
			if ((0 <= xx && xx < R) && (0 <= yy && yy < C) && !visited[xx][yy] && arr[xx][yy] == 1)
			{
				visited[xx][yy] = 1;
				q.push(make_pair(xx, yy));
				dist[xx][yy] = dist[x][y] + 1;
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
	if (min_ == 1010)
	{
		cout << -1;
	}
	else
	{
		cout << min_;
	}
}