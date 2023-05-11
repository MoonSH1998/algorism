#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int arr[2000000];
int d;
int min_ = 100000000;
long long max_ = -1;

void go(int depth, long long index, long long sum)
{
	sum += arr[index];
	if (depth == d)
	{
		if (sum > max_)
		{
			max_ = sum;
		}
		if (sum < min_)
		{
			min_ = sum;
		}
		return;
	}
	else
	{
		go(depth + 1, index * 2, sum); //좌 이동

		go(depth + 1, index * 2 + 1, sum); // 우 이동
	}
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n = 0;
	int k = 1;
	cin >> d; //깊이
	for (int i = 1; i <= d; i++)
	{
		n += k;
		k *= 2;
	}
	for (int i = 1; i <= n; i++)
	{
		char c;
		scanf(" %c", &c);
		arr[i] = c - 64;
	}
	go(1, 1, 0);
	cout << min_ << endl
		 << max_;

	return 0;
}