#include <cstdio>
#include <algorithm>

#define MAX 1001
#define INF 10001

using namespace std;

int N, M;

bool mst[MAX] = {
	false,
};
int weights[MAX]; // MST에 포함될 정점의 가중치(트리가 확장해 나감에 따라 인접 정점들 사이의 가중치 값이 갱신된다.)
int edge[MAX][MAX];

int getMinVertex(bool *mst, int *weights)
{
	int minVertex = 0;
	int minWeight = INF;

	for (int v = 0; v < N; v++)
	{
		// 현재 트리와 인접한 정점 중 가중치가 가장 작은 정점 선택
		if (false == mst[v] && weights[v] < minWeight)
		{
			minVertex = v;
			minWeight = weights[v];
		}
	}

	return minVertex;
}

void prim(int s)
{
	int cnt = 0; // 현재 트리에 포함된 간선 개수

	int minVertex = s;
	mst[minVertex] = true; // 시작 정점을 트리에 추가

	for (int i = 0; i < N; i++)
	{
		weights[i] = INF; // 아직 mst에 포함된 간선이 없기 때문에 weight를 모른다.
	}
	weights[s] = 0; // self-loop는 없으므로 가중치 0 (나머지 n-1개의 간선은 weight값이 존재)

	while (cnt < N - 1) // n-1개의 간선을 가질 때까지 반복
	{
		for (int v = 0; v < N; v++)
		{
			/*
			아래 구문은 추 후 MST에 포함될 정점의 weight값을 갱신하는 과정이다.
			다음 조건을 만족하는 상황에서 갱신될 수 있다.
				1. 트리에 포함되지 않은 정점이여야 한다.
				2. 트리에 인접해 있어야 한다. (현재 추가되는 정점을 통해 트리와 연결 되는지 확인)
				3. 추가되는 정점을 통해서 트리와 연결 될 때 가장 작은 가중치 값을 갖는다면 weight값은 갱신된다.
			*/

			if (false == mst[v] && edge[minVertex][v] != INF) // 1,2번 조건
			{
				if (edge[minVertex][v] < weights[v]) // 3번 조건
				{
					weights[v] = edge[minVertex][v];
				}
			}
		}

		minVertex = getMinVertex(mst, weights);
		if (weights[minVertex] == INF) // connected graph가 아닌 경우 예외 처리
		{
			return;
		}

		mst[minVertex] = true; // MST 인접 노드 중 가중치가 최소인 정점을 mst에 포함 시킨다.
		cnt++;
	}
}

int main(void)
{
	scanf("%d %d", &N, &M);

	// init
	fill(&edge[0][0], &edge[MAX][MAX], INF);

	int u, v, w;
	for (int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		edge[u - 1][v - 1] = edge[v - 1][u - 1] = w;
	}

	prim(0);

	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += weights[i];
	}
	printf("%d", sum);

	return 0;
}