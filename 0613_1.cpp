#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	vector<pair<char, int>> v;
	pair<char, int> p;

	cin >> n >> m;
	char temp;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		p.first = temp;
		if (i == n - 1)
		{
			if (v[v.size() - 1].first == temp)
			{
				v[v.size() - 1].second++;
				if (v[v.size() - 1].second >= m)
				{
					v.pop_back();
				}
			}
			else
			{
				v.push_back(make_pair(temp, 1));
			}
		}
		else if (v.size() == 0)
		{
			v.push_back(make_pair(temp, 1));
		}
		else if (v[v.size() - 1].first == temp)
		{
			v[v.size() - 1].second++;
		}
		else
		{
			if (v[v.size() - 1].second >= m)
			{
				v.pop_back();
			}
			if (v[v.size() - 1].first == temp)
			{
				v[v.size() - 1].second++;
			}
			else
				v.push_back(make_pair(temp, 1));
		}
	}

	if (v.size() == 0)
	{
		cout << "CLEAR!";
	}

	for (int r = 0; r < v.size(); r++)
	{
		for (int i = 0; i < v[r].second; i++)
			cout << v[r].first;
	}

	return 0;
}