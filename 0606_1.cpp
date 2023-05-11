#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	int ans = 1;
	int max = 10;
	int front = 0;
	int maxi;
	int arr[1010];
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[a - 1] = b;
	}
	cin >> a; //이것은 홍현이의 번호 b는 홍현이의 순서
	a--;
	b = arr[a];

	for (int i = 0; i < n; i++)
	{
		if (arr[i] < b)
		{
			ans++;
			if (max >= arr[i] && maxi > i)
			{
				max = arr[i];
				maxi = i;
			}
		}
		else if (arr[i] == b && i != a)
		{
			v.push_back(i);
			if (a > i)
			{
				front++; //홍현이와 같은 순번의 전 접속
			}
		}
	}
	if (a < maxi)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > maxi)
			{
				ans++;
			}
		}
		ans += front;
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i] > maxi && v[i] < a)
			{
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}