#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, tempx, tempy;
	vector<int> x;
	vector<int> y;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tempx >> tempy;
		x.push_back(tempx);
		y.push_back(tempy);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	tempx = x[x.size() / 2];
	tempy = y[y.size() / 2];

	n = 0;
	for (int i = 0; i < m; i++)
	{
		n += abs(x[i] - tempx);
		n += abs(y[i] - tempy);
	}
	cout << n;
	return 0;
}
