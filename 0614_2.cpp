#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a;
	int ans = 0, pop = 1;
	string s;
	vector<int> v;
	cin >> n;
	while (pop <= n)
	{
		cin >> s;
		if (s[0] == 'r')
		{
			if (v[v.size() - 1] == pop)
			{
				v.erase(v.begin() + (v.size() - 1));
				pop++;
			}
			else
			{
				sort(v.rbegin(), v.rend());
				v.erase(v.begin() + (v.size() - 1));
				pop++;
				ans++;
			}
		}
		else
		{
			cin >> a;
			v.push_back(a);
		}
	}

	cout << ans;

	return 0;
}
