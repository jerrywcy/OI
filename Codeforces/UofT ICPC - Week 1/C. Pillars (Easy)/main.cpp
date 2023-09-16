/*
 * problem: C. Pillars (Easy)
 * contest: UofT ICPC - Week 1
 * judge: Codeforces
 * url: https://codeforces.com/gym/473598/problem/C
 * date: Sat 16 Sep 2023 05:37:41 PM
 * status: Accepted
 */
#include <bits/stdc++.h>

const int MAXN = 2e5 + 10;
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

int main() {
    n = read();
    for (int i = 1; i <= n; i++)
        a[i] = read();
    int cond = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i + 1] && cond == -1) {
            puts("NO");
            return 0;
        }
        if (a[i] > a[i + 1] && cond == 1) {
            cond = -1;
        }
    }
    puts("YES");

    return 0;
}
