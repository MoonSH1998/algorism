#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c, n;
	cin >> a >> b >> c >> n;
	vector<int> e;
	vector<int> f;
	for (int i = 0; i < n; i++)
	{
		pair<int, int> temp;
		cin >> temp.first >> temp.second;
		if (temp.second == 0)
		{
			f.push_back(temp.first);
		}
		else
		{
			e.push_back(temp.first);
		}
	}
	// f벡터에는 5핀 e벡터에는 8핀
	sort(f.begin(), f.end());
	sort(e.begin(), e.end());
	int sum = 0;
	int cnt = 0;
	// 5핀 8핀 동시 5핀 8핀

	for (int i = 0; i < a && f.size() > 0; i++)
	{
		sum += f[0];
		cnt++;
		f.erase(f.begin() + 0);
	}
	for (int i = 0; i < b && e.size() > 0; i++)
	{
		sum += e[0];
		cnt++;
		e.erase(e.begin() + 0);
	}
	f.insert(f.end(), e.begin(), e.end());

	sort(f.begin(), f.end());

	for (int i = 0; i < c && f.size() > 0; i++)
	{
		sum += f[0];
		cnt++;
		f.erase(f.begin() + 0);
	}
	cout << cnt << " " << sum;
	return 0;
}
