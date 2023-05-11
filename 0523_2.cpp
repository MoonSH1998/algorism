#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> v;	//당일에 대한 벡터
vector<long long> ans1; // 답 출력 벡터
long long ans[30000] = {0};

long long fi(long long n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return v[1];
	}
	else
	{
		if (ans[n] != 0)
			return ans[n];
		else
		{
			return ans[n] = v[n] + fi(n - 1);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n, m, temp, temp2;
	cin >> n >> m;
	v.push_back(0);
	for (long long i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	for (long long i = 0; i < m; i++)
	{
		cin >> temp >> temp2;
		if (temp == temp2)
		{
			ans1.push_back(v[temp]);
		}
		else
		{
			ans1.push_back(fi(temp2) - fi(temp - 1));
		}
	}
	for (long long i = 0; i < ans1.size(); i++)
		if (ans1[i] > 0)
			cout << "+" << ans1[i] << endl;

		else
		{
			cout << ans1[i] << endl;
		}

	return 0;
}