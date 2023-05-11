#include <iostream>
#include <algorithm>

using namespace std;

struct Net
{
	int a, b, c, d;
} net[1000001];

bool compare(Net p1, Net p2)
{
	if (p1.a == p2.a)
	{
		if (p1.b == p2.b)
		{
			if (p1.c == p2.c)
			{
				return p1.d < p2.d;
			}
			else
				return p1.c < p2.c;
		}
		else
			return p1.b < p2.b;
	}
	else
		return p1.a < p2.a;
}

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Net &p = net[i];
		scanf("%d.%d.%d.%d", &p.a, &p.b, &p.c, &p.d);
	}
	sort(net, net + n, compare);
	for (int i = 0; i < n; i++)
	{
		printf("%d.%d.%d.%d\n", net[i].a, net[i].b, net[i].c, net[i].d);
	}
	return 0;
}
