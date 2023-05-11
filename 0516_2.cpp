#include <iostream>

using namespace std;
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	long long s1 = 1LL * (m / 20) * (n / 40);
	long long s2 = 1LL * (m / 40) * (n / 20);
	long long s3 = (m / 40) * (n / 40) * 2LL;
	printf("%lld", s1 + s2 - s3);

	return 0;
}