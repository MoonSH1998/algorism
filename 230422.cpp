#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

// N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

void sort(v);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int temp, n;

	scanf("%d", &n);

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		v.push_back(temp);
	}

	sort(v);

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", v[i]);
	}

	return 0;
}

void sort(vector<int> v)
{
}