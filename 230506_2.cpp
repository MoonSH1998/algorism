#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// 숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 가지고 있는지 아닌지를 구하는 프로그램을 작성하시오.
// 첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다. 숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다. 두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

// 셋째 줄에는 M(1 ≤ M ≤ 500,000)이 주어진다. 넷째 줄에는 상근이가 가지고 있는 숫자 카드인지 아닌지를 구해야 할 M개의 정수가 주어지며, 이 수는 공백으로 구분되어져 있다. 이 수도 -10,000,000보다 크거나 같고, 10,000,000보다 작거나 같다
bool binary_search(std::vector<int> nums, int target)
{
	int left = 0;
	int right = (int)nums.size() - 1;
	int pivot;
	while (left <= right)
	{
		pivot = (left + right) / 2;
		if (nums[pivot] == target)
		{
			return true;
		}
		else if (nums[pivot] < target)
		{
			left = pivot + 1;
		}
		else
		{
			right = pivot - 1;
		}
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<int> v;
	vector<int> v2;
	int n, m, temp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		v.push_back(temp);
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		v2.push_back(temp);
	}

	for (int i = 0; i < m; i++)
	{

		if (binary_search(v, v2[i]))
		{
			v2[i] = 1;
		}
		else
			v2[i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		printf("%d ", v2[i]);
	}
	return 0;
}
