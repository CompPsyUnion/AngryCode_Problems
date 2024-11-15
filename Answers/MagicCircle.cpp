//
//  MagicCircle.cpp
//  AngryCodeProposition2024
//
//  Created by Robert He on 2024/11/16.
//

#include <algorithm>
#include <iostream>
using namespace std;
#define il inline
#define re register
#define D double

il int read() {
    re int x = 0, f = 1;
    re char c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-')
            f = -1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = x * 10 + c - 48;
        c = getchar();
    }
    return x * f;
}

#define rep(i, s, t) for (re int i = s; i <= t; ++i)
#define eps 1e-12
#define maxn 100005
#define ff(x) (x) * (x)
int n, m;
D r;

struct node {
    D x, y;
} o, e[maxn];
il D dis(node a, node b) { return sqrt(ff(a.x - b.x) + ff(a.y - b.y)); }

il void get(node a, node b, node c) {
    D a1 = b.x - a.x, a2 = c.x - a.x, b1 = b.y - a.y, b2 = c.y - a.y;
    D c1 = (ff(b.x) - ff(a.x) + ff(b.y) - ff(a.y));
    D c2 = (ff(c.x) - ff(a.x) + ff(c.y) - ff(a.y));
    o = (node){(b2 * c1 - b1 * c2) / (b2 * a1 * 2 - b1 * a2 * 2),
               (a2 * c1 - a1 * c2) / (a2 * b1 * 2 - a1 * b2 * 2)};
    r = dis(a, o);
}

il void work() {
    o = e[1];
    r = 0;
    rep(i, 2, n) {
        if (dis(o, e[i]) > r + eps) {
            o = e[i];
            r = 0;
            rep(j, 1, i - 1) {
                if (dis(o, e[j]) > r + eps) {
                    o.x = (e[i].x + e[j].x) / 2;
                    o.y = (e[i].y + e[j].y) / 2;
                    r = dis(o, e[j]);
                    rep(k, 1, j - 1) if (dis(o, e[k]) > r + eps) get(e[i], e[j], e[k]);
                }
            }
        }
        //    printf("%.10lf\n%.10lf %.10lf\n", r, o.x, o.y);
    }
}

int main() {
    n = read();
    rep(i, 1, n) scanf("%lf%lf", &e[i].x, &e[i].y);
    random_shuffle(e + 1, e + n + 1);
    work();
    printf("%.10lf\n%.10lf %.10lf", r, o.x, o.y);

    return 0;
}
