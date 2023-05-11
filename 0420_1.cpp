#include <iostream>
using namespace std;
int num[100];
int mid;
int answer;
void searchh(int num[], int left, int right, int ans)
{
    mid = (left + right) / 2;
    if (left > right)
    {
        answer = -1;
    }
    else if (num[mid] == ans)
    {
        answer = mid;
    }
    else if (num[mid] > ans)
    {
        right = mid - 1;
        searchh(num, left, right, ans);
    }
    else
    {
        left = mid + 1;
        searchh(num, left, right, ans);
    }
}

int main()
{
    int cnt;
    cin >> cnt;

    int ans;
    cin >> ans;

    for (int i = 0; i < cnt; i++)
    {
        cin >> num[i];
    }

    searchh(num, 0, cnt - 1, ans);
    cout << answer + 1;

    return 0;
}
