#include <iostream>
#include <queue>
using namespace std;
typedef struct s
{
	int x;
	int y;
	s(int a, int b) : x(a), y(b) {}
} SS;

//오름차순 정렧
struct cmp
{
	bool operator()(SS t, SS u)
	{
		return t.x > u.x;
	}
};

int main(void)
{
	// priority_queue
	priority_queue<SS, vector<SS>, cmp> pq;
	// push(element)
	pq.push(SS(5, 2));
	pq.push(SS(4, 3));
	pq.push(SS(8, 1));
	pq.push(SS(2, 9));
	pq.push(SS(1, 4));
	pq.push(SS(7, 14));
	// top();

	cout << "top : " << pq.top().x << " " << pq.top().y << endl;
	// empty(), size()
	if (!pq.empty())
		cout << "pq size : " << pq.size() << '\n'; // pop all
	while (!pq.empty())
	{
		cout << pq.top().x << " " << pq.top().y << endl;
		pq.pop();
	}
	cout << '\n';
	return 0;
}