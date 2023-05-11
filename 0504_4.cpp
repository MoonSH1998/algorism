#include <iostream>

using namespace std;
int main(void)
{

	int n;
	int c;
	int t[100001];
	int ans = 1;

	cin >> n >> c;
	for (int i = 0; i < n; i++)
	{
		cin >> t[n - 1 - i];
	}
	for (int k = 0; k < n - 1; k++)
	{
		if ((t[k] - t[k + 1]) <= c)
		{
			ans++;
		}
		else
			break;
	}
	cout << ans;
	return 0;
}
