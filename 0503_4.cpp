#include <iostream>
#include <queue>
using namespace std;
int main(void)
{
	queue<int> q;
	cout << endl
		 << "=== empty ===" << endl;
	cout << "size : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	cout << endl
		 << "=== push ===" << endl;
	cout << "size : " << q.size() << endl;
	cout << "empty : " << q.empty() << endl;
	cout << "front : " << q.front() << endl;
	cout << "back : " << q.back() << endl
		 << endl;
	cout << endl
		 << "=== front & pop ===" << endl;
	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
	return 0;
}