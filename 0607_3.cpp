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
		if (temp.second == 0) // 5핀 충전
		{
			f.push_back(temp.first); //가격
		}
		else // 8핀 충전
		{
			e.push_back(temp.first); //가격
		}
	}
	// f벡터에는 5핀 e벡터에는 8핀
	sort(f.begin(), f.end());
	sort(e.begin(), e.end());
	long long sum = 0;
	int cnt = 0;

	for (int i = 0; i < a; i++)
	{
		if (f.size() == 0)
		{
			i = a;
			break;
		}
		sum += f[0];
		cnt++;
		f.erase(f.begin() + 0);
	}
	for (int i = 0; i < b; i++)
	{
		if (e.size() == 0)
		{
			i = b;
			break;
		}
		sum += e[0];
		cnt++;
		e.erase(e.begin() + 0);
	}

	f.insert(f.end(), e.begin(), e.end());

	sort(f.begin(), f.end());

	for (int i = 0; i < c; i++)
	{
		if (f.size() == 0)
		{
			i = c;
			break;
		}
		sum += f[0];
		cnt++;
		f.erase(f.begin() + 0);
	}
	cout << cnt << " " << sum;
	return 0;
}