#include <cstdio>

#define maxn 200005

int n, stk[maxn], top;
double r[maxn], x[maxn];

int main()
{
//    freopen("ballons.in", "r", stdin);
//    freopen("ballons.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%lf%lf", &x[i], &r[i]);
        while (top > 0)
        {
            int j = stk[top];
            double now = (x[i] - x[j]) / 4.0 / r[j] * (x[i] - x[j]);
            r[i] = now < r[i] ? now : r[i];
            if (r[i] <= r[j])
                break;
            else
                --top;
        }
        stk[++top] = i;
        printf("%.3lf\n", r[i]);
    }
    return 0;
}
