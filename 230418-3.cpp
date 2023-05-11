#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, c, temp;
	vector<int> v;

	scanf("%d", &n);
	scanf("%d", &c);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		v.push_back(temp);
	}
	sort(v.begin(), v.end());

	int max = 0;
	for (int i = 0; i < n - 1; i++)
	{
		max = max < (v[i + 1] - v[i]) ? (v[i + 1] - v[i]) : max;
	}
	int dis = v.end() - v.begin();

	search(1, n * n, m);

	return 0;
}