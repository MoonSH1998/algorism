#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool binaryS(vector<int> v, int key)
{
	int start, end;
	start = 0;
	end = v.size();
	while (1)
	{
		int mid = (start + end) / 2;
		if (v[mid] == key)
		{
			return true;
		}
		else if (start > end)
		{
			return false;
		}
		else if (v[mid] > key)
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, num;
	scanf("%d", &n);
	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num);
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &num);
		if (binaryS(v, num))
		{
			printf("1\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}