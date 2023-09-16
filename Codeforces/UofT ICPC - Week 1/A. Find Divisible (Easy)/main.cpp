/*
 * problem: A. Find Divisible (Easy)
 * contest: UofT ICPC - Week 1
 * judge: Codeforces
 * url: https://codeforces.com/gym/473598/problem/A
 * date: Sat 16 Sep 2023 05:37:41 PM
 * status: Accepted
 */
#include <bits/stdc++.h>

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

void solve() {
    int l = read(), r = read();
    printf("%d %d\n", l, l * 2);
}

int main() {
    int t = read();
    while (t--)
        solve();
    return 0;
}
