#include <iostream>
#include <string>
using namespace std;

int arr[110][110];		 // 사람 , 문제 , 맞으면1틀리면-1  => 시간
int arr2_temp[110][110]; // 임시 틀린 횟수
int arr2[110];			 // 사람별 틀린횟수
int arr3[110];			 // 사람별 맞은 횟수
long long arr4[110];	 // 사람별 패널티 저장 g = t+20w

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m, q, a, b, c;
	string k;
	cin >> n >> m >> q;

	for (int i = 0; i < q; i++)
	{
		cin >> a >> b >> c >> k;
		if (arr[a][b] == 0)
		{
			if (k.compare("AC") != 0)
			{
				arr2_temp[a][b]++;
			}
			else
			{
				arr3[a]++;
				arr4[a] += c;
				arr2[a] += arr2_temp[a][b];
				arr[a][b] = c;
			}
		}
	}
	for (int i = 1; i < n + 1; i++)
	{
		arr4[i] += arr2[i] * 20;
		cout << i << " " << arr3[i] << " " << arr4[i] << endl;
	}

	return 0;
}