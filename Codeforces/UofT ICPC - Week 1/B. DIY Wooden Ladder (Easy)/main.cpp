/*
 * problem: B. DIY Wooden Ladder (Easy)
 * contest: UofT ICPC - Week 1
 * judge: Codeforces
 * url: https://codeforces.com/gym/473598/problem/B
 * date: Sat 16 Sep 2023 05:37:41 PM
 * status: Accepted
 */
#include <bits/stdc++.h>

const int MAXN = 1e5 + 10;
const int inf = 0x3f3f3f3f;

using namespace std;

// clang-format off
int read(){
    int f=1,x=0;char ch=getchar();
    while (ch<'0' || ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while (ch>='0' && ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return f*x;
}
// clang-format on

int n;
int a[MAXN];

void solve() {
    memset(a, 0, sizeof(a));
    n = read();
    for (int i = 1; i <= n; i++)
        a[i] = read();
    sort(a + 1, a + n + 1);
    printf("%d\n", min(a[n - 1] - 1, n - 2));
}

int main() {
    int t = read();
    while (t--)
        solve();

    return 0;
}
