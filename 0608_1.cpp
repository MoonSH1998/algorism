#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<long long> v1, v2, v3;
	long long sum = 0;
	long long max = 0;
	long long min = 9999999999;

	int n;
	int c = 1;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		c *= 2;
	}
	char a;
	for (int i = 0; i < c - 1; i++)
	{
		//입력받을 떄 벡터에 넣어볼까
		scanf("%c", &a);
		if (a == 10)
			scanf("%c", &a);
		if (i % 2 == 0)
			v1.push_back(a - 64);
		else
			v2.push_back(a - 64);
	}
	// v에는 하나씩 넣었다. 이제 시작해보자.

	return 0;
}
