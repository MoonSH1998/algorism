#include <stdio.h>
#include <iostream>
using namespace std;

int S[100], n, k;
int find(int s, int e);
int main(void)
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", &S[i]);
    printf("%d\n", find(0, n - 1));
    return 0;
}

int find(int s, int e)
{
    if (s > e)
    {
        return -1;
    }
    else if (S[(s + e) / 2] == k)
    {
        cout << "정답";
        cout << (s + e) / 2;
        cout << "정답";
        return 1;
    }
    else if (S[(s + e) / 2] < k)
    {
        s = (s + e) / 2 + 1;
        find(s, e);
    }
    else
    {
        e = (s + e) / 2 - 1;
        cout << e;
        find(s, e);
    }
    return 0;
}