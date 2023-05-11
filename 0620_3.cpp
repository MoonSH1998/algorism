#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	scanf("%d", &N);

	int R[1000];
	for (int i = 0; i < N; ++i)
		scanf("%d", &R[i]);

	int dp[1000];
	for (int i = 0; i < N; ++i)
	{
		// 현재 i번째 프로세스를 보고 있음
		dp[i] = 1;

		for (int j = 0; j < i; ++j)
			// i보다 번호가 작은 프로세스들 j에 대해서
			//꼬인 관계를 형성하지 않게 하는 경우만 확인
			if (R[j] < R[i])
				dp[i] = max(dp[i], dp[j] + 1);
	}
	int ans = N - *max_element(dp, dp + N);
	printf("%d", ans);

	return 0;
}
