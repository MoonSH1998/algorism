#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, d, temp;
	int cnt = 0;

	cin >> n >> d;
	vector<int> ant;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		ant.push_back(temp);
	}
	sort(ant.begin(), ant.end());
	//가장 긴 거리 찾기->

	while (ant[ant.size() - 1] - ant[0] > d)
	{
		int answer = 0;
		int i = 1;
		while (1)
		{
			int front = ant[i] - ant[0];
			int back = ant[ant.size() - 1] - ant[ant.size() - i - 1];
			if (front > back)
			{
				ant.erase(ant.begin());
				cnt++;
				break;
			}
			else if (front < back)
			{
				ant.erase(ant.begin() + ant.size() - 1);
				cnt++;
				break;
			}
			i++;
		}
	}
	cout << cnt;
	return 0;
}