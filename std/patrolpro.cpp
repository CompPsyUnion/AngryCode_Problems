// luogu-judger-enable-o2
#include <cstdio>
#include <cstring>
#include <algorithm>

#define maxn 100005
#define maxe (maxn << 1)

using namespace std;

int n, lnk[maxn], son[maxe], nxt[maxe], w[maxe], tot = 1;
int f[maxn], ans, res, k, to[maxn], X, Y, dep[maxn];

inline int read()
{
	char ch = getchar();
	int ret = 0, f = 1;
	while (ch > '9' || ch < '0')
	{
		if (ch == '-')
			f = -f;
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9')
		ret = ret * 10 + ch - '0', ch = getchar();
	return ret * f;
}

inline void adde(int x, int y, int z)
{
	son[++tot] = y, nxt[tot] = lnk[x], lnk[x] = tot, w[tot] = z;
}

void DFS(int now, int pre, int dp)
{
	dep[now] = dp, f[now] = 0, to[now] = now;
	for (int j = lnk[now]; j; j = nxt[j])
	{
		if (son[j] == pre)
			continue;
		DFS(son[j], now, dp + 1);
		if (f[son[j]] + w[j] + f[now] > res)
		{
			res = f[son[j]] + w[j] + f[now];
			X = to[son[j]], Y = to[now];
		}
		if (f[son[j]] + w[j] > f[now])
			f[now] = f[son[j]] + w[j], to[now] = to[son[j]];
	}
	if (f[now] > res)
		res = f[now], X = to[now], Y = now;
}

int main()
{
//    freopen("patrolpro.cpp.in", "r", stdin);
//    freopen("patrolpro.cpp.out", "w", stdout);
	n = read(), k = read() - 1;
	for (int i = 1; i < n; ++i)
	{
		int x = read(), y = read(), z = 1;
		adde(x, y, z), adde(y, x, z);
	}
	DFS(1, -1, 1);
	ans = (n - 1) * 2 - res + 1;
	// printf("%d %d\n", ans, res);
	// for (int i = 1; i <= n; ++i)
	// {
	// 	printf("%d ", f[i]);
	// }
	// printf("\n");
	if (k)
	{
		res = 0;
		while (X != Y)
		{
			if (dep[X] < dep[Y])
				swap(X, Y);
			for (int j = lnk[X]; j; j = nxt[j])
			{
				if (dep[son[j]] < dep[X])
				{
					w[j] = w[j ^ 1] = -1;
					X = son[j];
					break;
				}
			}
		}
		DFS(1, -1, 1);
		ans = ans - res + 1;
	}
	printf("%d\n", ans);
	return 0;
}
