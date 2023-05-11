#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
int s[6]; //홍현이보다 후에 접속한 사람의 우선순위 중 홍현이보다 앞에있는 숫자의 종류가 몇개인지 체크 -> 홍현이의 순서가 뒤바뀔 것임.
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, a, b;
	int ans = 1, front = 0, back = 0;
	int arr[1010];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		arr[a - 1] = b;
	}
	cin >> a; //이것은 홍현이의 번호 b는 홍현이의 순서
	a--;
	b = arr[a];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < b)
		{
			ans++;
			if (i > b)
			{
				s[arr[i]] = 1;
			}
		}
		else if (arr[i] == b)
		{
			if (a > i)
			{
				front++; //홍현이와 같은 순번의 전 접속
			}
			else if (a < i)
			{
				back++; //홍현이와 같은 순번의 후 접속
			}
		}
	}
	int cnt = 0;
	for (int i = 0; i <= 5; i++)
	{
		cnt++;
	}
	if (cnt % 2 == 0)
	{
		cout << ans + front;
	}
	else
	{
		cout << ans + back;
	}

	return 0;
}
