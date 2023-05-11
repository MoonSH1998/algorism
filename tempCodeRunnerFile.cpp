#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

// push X: 정수 X를 스택에 넣는 연산이다.
// pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
// size: 스택에 들어있는 정수의 개수를 출력한다.
// empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
// top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

// 첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어진다.
//  둘째 줄부터 N개의 줄에는 명령이 하나씩 주어진다. 주어지는 정수는 1보다 크거나 같고,
// 100,000보다 작거나 같다. 문제에 나와있지 않은 명령이 주어지는 경우는 없다.
int a[10000];
int top = -1;
void push(int x)
{
	top++;
	a[top] = x;
	return;
}
int empty()
{
	return top == -1 ? 1 : 0;
}
int top_()
{
	return top == -1 ? -1 : a[top];
}
int pop()
{
	if (empty())
		return -1;
	top--;
	return a[top + 1];
}
int size()
{
	return top + 1;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, temp;
	string temp_ = "";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp_;
		if (temp_ == "push")
		{
			cin >> temp;
			push(temp);
		}
		else if (temp_ == "top")
			printf("%d\n", top_());
		else if (temp_ == "size")
			printf("%d\n", size());
		else if (temp_ == "empty")
			printf("%d\n", empty());
	}

	return 0;
}
