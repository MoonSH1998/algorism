#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, temp;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int sum = 0;
	temp = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= temp)
		{
			sum++;
			temp++;
		}
	}
	cout << sum;
	return 0;
}