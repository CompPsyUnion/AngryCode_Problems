#include <cstdio>
#include <cstring>
#include <algorithm>

#define maxn 500005

using namespace std;

int n, q, p[maxn], f[maxn], cnt, que[maxn];
bool vis[maxn];
char s[maxn];

// class Hash
// {
//   public:
    typedef unsigned long long ull;
    ull a[maxn], po[maxn], rev[maxn];
    ull base, TT;
    int lenth;
    // Hash(){lenth = 1;}
    ull power(ull a, ull b)
    {
        ull res = 1;
        while (b)
        {
            if (b & 1)
                res = res * a % TT;
            a = a * a % TT;
            b >>= 1;
        }
        return res;
    }
    void Hash_init(ull bs, ull P, char *s)
    {
        lenth = 1;
        base = bs, TT = P;
        po[0] = 1;
        a[0] = s[0];
        for (int& i = lenth; s[i]; ++i)
        {
            po[i] = po[i - 1] * bs % P;
            a[i] = (po[i] * s[i] % P + a[i - 1]) % P;
        }
        rev[0] = 1, rev[1] = power(bs, P - 2);
        for (int i = 2; i <= lenth; ++i)
            rev[i] = rev[i - 1] * rev[1] % P;
    }
    ull Query(int l, int r)
    {
        ull res = (a[r] - a[l - 1] + TT) % TT;
        res = res * rev[l] % TT;
        return res;
    }
// };

// Hash A;

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

void Init()
{
    vis[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        if (!vis[i])
            p[++cnt] = i, f[i] = i;
        for (int j = 1; p[j] * i <= n; ++j)
        {
            int x = p[j] * i;
            vis[x] = 1, f[x] = p[j];
            if (i % p[j] == 0)
                break;
        }
    }
}

bool cmp(int l1, int r1, int l2, int r2)
{
    bool flg = Query(l1, r1) == Query(l2, r2);
    return flg;
}

int main()
{
//    freopen("scroll.in", "r", stdin);
//    freopen("scroll.out", "w", stdout);
    n = read();
    Init();
    for (int i = 1; i <= n; ++i)
    {
        s[i] = getchar();
        while (s[i] > 'z' || s[i] < 'a')
            s[i] = getchar();
        // putchar(s[i]);
    }
    q = read();
    Hash_init(107, 998244353, s);
    while (q--)
    {
        int l = read(), r = read();
        int x = r - l + 1, til = 0;
        while (x != 1)
        {
            que[++til] = f[x];
            x /= f[x];
        }
        x = r - l + 1;
        for (int i = 1; i <= til; ++i)
        {
            int t = x / que[i];
            if (cmp(l, r - t, l + t, r))
                x = t;
        }
        printf("%d\n", x);
    }
    return 0;
}
