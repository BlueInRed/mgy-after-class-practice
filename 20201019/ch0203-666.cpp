#include <cstdio>
#include <algorithm>
using namespace std;

int m, n, ans;

void dfs(int k, int sum, int last) {
    // printf("%d\n", sum);
    if (k == n + 1) {
        if (sum == m) {
            ans++;
        }
        return ;
    }

    for (int x=last; x<=m - sum; x++)     // todo 优化循环的次数
        dfs(k + 1, sum + x, x);
}

void inp_pri() {
    scanf("%d%d", &m, &n);
    
    ans = 0;
    dfs(1, 0, 0);
    
    printf("%d\n", ans);
}

int main(void) {
    // calc();

    int T;
    scanf("%d", &T);

    while (T--)
        inp_pri();
    
    return 0;
}
