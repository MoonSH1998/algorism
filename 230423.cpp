#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(pair<int, string> v1, pair<int, string> v2)
{
	return v1.first < v2.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, temp;
	string temp2;

	vector<pair<int, string>> v;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		cin >> temp >> temp2;
		v.push_back(make_pair(temp, temp2));
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}
