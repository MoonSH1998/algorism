#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
void search(int low, int high, int target);
// 5가 들어왔을 때  -> 1~25 / mid = 12
//  mid의 번째 수 -> 행 개수별로 mid보다 작은 값 출력
//  target이 count보다 작은지 큰지 판별
//  low와 high값 조정
//  low high가 역전되는 상황에서 return
int n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int m = 0;

	scanf("%d", &n);
	scanf("%d", &m);

	search(1, n * n, m);

	return 0;
}
void search(int low, int high, int target)
{
	cout << low << " , " << high << " , " << target << " , " << endl;
	int cnt = 0;
	int mid = (low + high) / 2;
	for (int i = 1; i < n; i++)
	{

		cnt += mid / i;
	}
	if (low >= high)
	{
		cout << cnt;
		return;
	}
	else if (target > cnt)
	{
		low = mid;
		search(low, high, target);
	}
	else if (target < cnt)
	{
		high = mid;
		search(low, high, target);
	}
}
