#include <iostream>
#include <algorithm>

using namespace std;

struct Net
{
	int a, b, c, d;
} net[1000001];

bool compare(Net p1, Net p2)
{
	if (p1.a == p2.a)
	{
		if (p1.b == p2.b)
		{
			if (p1.c == p2.c)
			{
				return p1.d < p2.d;
			}
			else
				return p1.c < p2.c;
		}
		else
			return p1.b < p2.b;
	}
	else
		return p1.a < p2.a;
}

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Net &p = net[i];
		scanf("%d.%d.%d.%d", &p.a, &p.b, &p.c, &p.d);
	}
	sort(net, net + n, compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d.%d.%d.%d\n", net[i].a, net[i].b, net[i].c, net[i].d);
	}
	return 0;
}

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
	vector<pair<int, int>> vtemp;
	queue<pair<int, int>> v;
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
