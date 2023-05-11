#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<float, float> a, pair<float, float> b)
{

	if (a.first == b.first)
	{
		return a.second > b.second;
	}
	else
		return a.first < b.first;
}

int main(void)
{
	int n, a, c;
	float b, d;
	cin >> n;
	vector<pair<float, float>> v;
	for (int i = 0; i < n; i++)
	{
		scanf("%d/%f %d/%f", &a, &b, &c, &d);
		while (b > 0)
		{
			b /= 10;
		}
		while (d > 0)
		{
			d /= 10;
		}
		float t1 = a + b;
		float t2 = c + d;
		v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n - 1; i++)
	{
		if (v[i].second <= v[i + 1].second)
		{
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";

	return 0;
}