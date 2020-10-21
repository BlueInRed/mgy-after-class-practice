#include <cstdio>
#include <iostream>
using namespace std;

int n, m, ans;
char a[105][105];
int dx[15] = {0, 1, -1, 0, 0}, 
    dy[15] = {0, 0,  0, 1,-1};

void inp() {
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '@')
                ans++;
        }
    scanf("%d", &m);
}

void update() {
    bool visit[105][105] = {};

    for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            if (a[i][j] == '@' && !visit[i][j])
                for (int x=1; x<=4; x++) {
                    int to_i = i + dx[x], 
                        to_j = j + dy[x];
                    if (a[to_i][to_j] == '.') {
                        a[to_i][to_j] = '@';
                        ans++;
                        visit[to_i][to_j] = true;
                    }
                }
}

void work() {
    for (int day=2; day<=m; day++)
        update();
    
    printf("%d\n", ans);
}

int main(void) {
    inp();
    work();

    return 0;
}