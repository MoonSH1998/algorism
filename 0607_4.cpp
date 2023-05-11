#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	pair<int, int> temp;
	vector<pair<int, int> > vtemp;
	queue<pair<int, int> > v;
	vector<int> k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		k.push_back(b);
		temp.first = a, temp.second = b;
		vtemp.push_back(temp);
	}
	cin >> a;

	sort(vtemp.begin(), vtemp.end());
	b = vtemp[a - 1].second;
	sort(k.begin(), k.end());

	for (int i = 0; i < n; i++)
	{
		if (vtemp[i].second <= b)
		{
			v.push(vtemp[i]);
		}
	}
	int ans = 1;
	int i = 0;

	while (1)
	{

		if (v.front().second == k[0])
		{
			if (v.front().first == a)
			{
				cout << ans;
				return 0;
			}
			ans++;
			v.pop();
			k.erase(k.begin() + 0);
		}
		else
		{
			v.push(v.front());
			v.pop();
		}
	}
	return 0;
}