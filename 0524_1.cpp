#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	unsigned int n, temp;
	int cnt = 0;
	int leng = 0;
	vector<int> v;
	cin >> n;
	while (n > 0)
	{
		temp = n & 1;
		if (temp == 1)
		{
			cnt++;
			v.push_back(leng);
		}
		n = n >> 1;

		leng++;
	}
	cout << cnt << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}